
void ssl3_write(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 0;
  if (*(int *)(*(long *)(param_1 + 0x90) + 0xfc) != 0) {
    iVar1 = RECORD_LAYER_read_pending(param_1 + 0x3a0);
    if (((iVar1 == 0) && (iVar1 = RECORD_LAYER_write_pending(param_1 + 0x3a0), iVar1 == 0)) &&
       (iVar1 = SSL_in_init(param_1), iVar1 == 0)) {
      ossl_statem_set_renegotiate(param_1);
      lVar3 = *(long *)(param_1 + 0x90);
      *(int *)(lVar3 + 0x104) = *(int *)(lVar3 + 0x104) + 1;
      *(undefined4 *)(lVar3 + 0xfc) = 0;
      *(int *)(lVar3 + 0x100) = *(int *)(lVar3 + 0x100) + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00acf5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x70))(param_1,0x17,param_2,param_3);
  return;
}

