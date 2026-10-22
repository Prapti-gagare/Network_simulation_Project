#ifndef __Network_simulation_2026_func_h__
#define __Network_simulation_2026_func_h__

#include "MS2504_param.h"

typedef enum boolean_type { FALSE, TRUE } boolean;
typedef struct host_ident_type {
    int net_id;
    int machine_id;
    char smac_id;
} host;

typedef struct port_type {
    char d[2][256];
} port;

extern int N_hosts;
extern int wait_time[MAX_HOSTS];
extern host h[MAX_HOSTS];
extern port TP[MAX_HOSTS], LLL_up[MAX_HOSTS], LLL_down[MAX_HOSTS], LAN[MAX_HOSTS];

int random_number();
boolean prob(int p);
void array_reset(port *p);
void full_reset();
void generate_data(int sender);
void connect(port *X, port *Y);
void Tpstrip(int i);
void LLL_send(int i);
void LLL_receive(int i);
void LAN_strip();
void random_order(int order[]);
void printline(int n);
void run_network_simulation();

#endif