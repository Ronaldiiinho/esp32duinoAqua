#include <Arduino.h>

void init_mqtt(void);
void mqtt_loop(void);
void reconnect(void);
void mqtt_callback(char* topic, byte* payload, unsigned int length);