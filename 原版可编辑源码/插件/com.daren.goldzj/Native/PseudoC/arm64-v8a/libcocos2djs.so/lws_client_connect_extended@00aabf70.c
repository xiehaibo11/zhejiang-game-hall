
void lws_client_connect_extended
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined8 param_10)

{
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  
  memset(&local_108,0,0xa8);
  local_d0 = param_9;
  local_c8 = param_10;
  local_108 = param_1;
  uStack_100 = param_2;
  local_f8 = param_3;
  uStack_f4 = param_4;
  local_f0 = param_5;
  uStack_e8 = param_6;
  local_e0 = param_7;
  uStack_d8 = param_8;
  lws_client_connect_via_info(&local_108);
  return;
}

