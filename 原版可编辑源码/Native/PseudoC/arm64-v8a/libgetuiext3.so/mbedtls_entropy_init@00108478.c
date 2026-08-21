
void mbedtls_entropy_init(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  thunk_EXT_FUN_00002bb0(param_1,0,0x430);
  lVar1 = param_1 + 0x400;
  (*pcRam0000000000000000)(lVar1);
  thunk_EXT_FUN_00002bb0(param_1,0);
  iVar2 = (*pcRam0000000000000000)(lVar1);
  if (iVar2 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xd8) < 0x14) {
    lVar3 = param_1 + (long)*(int *)(param_1 + 0xd8) * 0x28;
    *(undefined8 *)(lVar3 + 0xe0) = 0;
    *(undefined8 *)(lVar3 + 0xe8) = 0;
    *(undefined8 *)(lVar3 + 0xf8) = 0x20;
    *(undefined4 *)(lVar3 + 0x100) = 1;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00108530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000000000)(lVar1);
  return;
}

