
ulong FUN_00abfe70(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 0;
  if (*(int *)(*(long *)(param_1 + 0x90) + 0xfc) != 0) {
    iVar1 = RECORD_LAYER_read_pending(param_1 + 0x3a0);
    if (((iVar1 == 0) && (iVar1 = RECORD_LAYER_write_pending(param_1 + 0x3a0), iVar1 == 0)) &&
       (iVar1 = SSL_in_init(param_1), iVar1 == 0)) {
      ossl_statem_set_renegotiate(param_1);
      lVar4 = *(long *)(param_1 + 0x90);
      *(int *)(lVar4 + 0x104) = *(int *)(lVar4 + 0x104) + 1;
      *(undefined4 *)(lVar4 + 0xfc) = 0;
      *(int *)(lVar4 + 0x100) = *(int *)(lVar4 + 0x100) + 1;
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x108) = 1;
  uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0x17,0,param_2,param_3,param_4);
  if (((int)uVar3 == -1) && (*(int *)(*(long *)(param_1 + 0x90) + 0x108) == 2)) {
    ossl_statem_set_in_handshake(param_1,1);
                    /* try { // try from 00abff58 to 00bbff67 has its CatchHandler @ 00abff74 */
    uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0x17,0,param_2,param_3,param_4);
    uVar3 = uVar3 & 0xffffffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abff58 with catch @ 00abff74
                        */
    ossl_statem_set_in_handshake(param_1,0);
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x108) = 0;
  }
  return uVar3;
}

