
void FUN_00bc8528(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  while( true ) {
    iVar1 = OPENSSL_sk_find(uVar2,param_2);
    if (iVar1 < 0) break;
    OPENSSL_sk_delete(*(undefined8 *)(param_1 + 8),iVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x10) == param_2) {
    engine_unlocked_finish(param_2,0);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

