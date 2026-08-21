
undefined8
FUN_001143f8(undefined8 param_1,uint param_2,undefined8 *param_3,int param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _Uaarch64_is_fpreg(param_2);
  if (((iVar1 == 0) && (param_2 < 0x60)) &&
     (param_5 = param_5 + ((long)(int)param_2 + 0x16) * 8, param_5 != -8)) {
    if (param_4 != 0) {
      *(undefined8 *)(param_5 + 8) = *param_3;
      uVar2 = _Uaarch64_regname(param_2);
      log2Console(3,"Bugly-libunwind","%s <- %lx\n",uVar2,*param_3);
      return 0;
    }
    *param_3 = *(undefined8 *)(param_5 + 8);
    uVar2 = _Uaarch64_regname(param_2);
    log2Console(3,"Bugly-libunwind","%s -> %lx\n",uVar2,*param_3);
    return 0;
  }
  log2Console(3,"Bugly-libunwind","bad register number %u\n",param_2);
  return 0xfffffffd;
}

