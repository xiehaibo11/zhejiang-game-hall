
undefined4 FUN_00a41794(long param_1,char *param_2,size_t param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  size_t local_28;
  
                    /* try { // try from 00a41798 to 00b418c3 has its CatchHandler @ 00a41950 */
  if (param_3 == 0) {
    uVar3 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = strncmp(param_2,"*",param_3);
    if (iVar1 == 0) {
      uVar2 = 0xffffffdf;
    }
    else {
      uVar2 = FUN_00a41098(param_2,param_3,&local_28);
      if (uVar2 == 0) {
        return 3;
      }
      if (local_28 != param_3) {
        return 3;
      }
      uVar2 = *(uint *)(param_1 + 0x10) | uVar2;
    }
    uVar3 = 0;
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  return uVar3;
}

