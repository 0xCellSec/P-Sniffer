#ifndef SNIFFER_HPP
#define SNIFFER_HPP

// libraries 
#include <pcap.h>
#include <string>

class Sniffer {
    private:
    pcap_t* handler;
    std::string connection;
    std::string sniffer_filter;
    int count;


    public:
    Sniffer(std::string network, std::string filter, int packet_batch);
    ~Sniffer();
    void startSniffing();
    static void packetHandler(u_char* args, const pcap_pkthdr* header, const u_char* packet);
};

#endif
