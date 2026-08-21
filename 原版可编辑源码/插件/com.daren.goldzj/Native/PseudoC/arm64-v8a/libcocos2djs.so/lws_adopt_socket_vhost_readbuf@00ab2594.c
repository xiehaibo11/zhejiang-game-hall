
void lws_adopt_socket_vhost_readbuf
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = lws_adopt_descriptor_vhost(param_1,7,param_2,0,0);
  FUN_00ab2420(uVar1,param_3,param_4);
  return;
}

