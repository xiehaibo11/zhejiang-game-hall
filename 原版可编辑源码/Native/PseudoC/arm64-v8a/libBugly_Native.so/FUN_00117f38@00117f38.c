
undefined8
FUN_00117f38(undefined8 param_1,uint param_2,undefined8 *param_3,int param_4,long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  iVar2 = _Uaarch64_is_fpreg(param_2);
  if (iVar2 == 0) {
    puVar1 = (undefined8 *)(param_5 + (long)(int)param_2 * 8 + 0xb8);
    if (0x5f < param_2) {
      puVar1 = (undefined8 *)0x0;
    }
    if (puVar1 != (undefined8 *)0x0) {
      if (param_4 == 0) {
        *param_3 = *puVar1;
        uVar3 = _Uaarch64_regname(param_2);
        uVar5 = *param_3;
        pcVar4 = "%s -> %lx\n";
      }
      else {
        *puVar1 = *param_3;
        uVar3 = _Uaarch64_regname(param_2);
        uVar5 = *param_3;
        pcVar4 = "%s <- %lx\n";
      }
      log2Console(3,"Bugly-libunwind",pcVar4,uVar3,uVar5);
      return 0;
    }
  }
  log2Console(3,"Bugly-libunwind","bad register number %u\n",param_2);
  return 0xfffffffd;
}

