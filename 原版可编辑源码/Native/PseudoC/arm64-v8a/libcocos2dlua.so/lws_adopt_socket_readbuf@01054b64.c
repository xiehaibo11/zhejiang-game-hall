
void lws_adopt_socket_readbuf(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
                    /* try { // try from 01054b68 to 01154b6f has its CatchHandler @ 01054e68 */
                    /* try { // try from 01054b70 to 01154ccb has its CatchHandler @ 01054b14 */
  uVar1 = lws_adopt_descriptor_vhost(*(undefined8 *)(param_1 + 0x830),7,param_2,0,0);
  FUN_01054ba4(uVar1,param_3,param_4);
  return;
}

