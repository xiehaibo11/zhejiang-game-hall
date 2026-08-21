
void lws_adopt_socket_vhost_readbuf
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
                    /* try { // try from 01054d3c to 01154d43 has its CatchHandler @ 01054e24 */
  uVar1 = lws_adopt_descriptor_vhost(param_1,7,param_2,0,0);
                    /* try { // try from 01054d44 to 01154e6b has its CatchHandler @ 01054b14 */
  FUN_01054ba4(uVar1,param_3,param_4);
  return;
}

