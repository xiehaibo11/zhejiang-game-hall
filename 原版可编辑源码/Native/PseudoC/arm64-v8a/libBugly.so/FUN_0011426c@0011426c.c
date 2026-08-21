
undefined8
FUN_0011426c(undefined8 param_1,uint param_2,undefined8 *param_3,int param_4,long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = _Uaarch64_is_fpreg(param_2);
  if ((iVar2 != 0) && (param_2 < 0x60)) {
    param_5 = param_5 + (long)(int)param_2 * 8;
    puVar1 = (undefined8 *)(param_5 + 0xb8);
    if (puVar1 != (undefined8 *)0x0) {
      if (param_4 != 0) {
        uVar3 = _Uaarch64_regname(param_2);
        log2Console(3,"Bugly-libunwind","%s <- %08lx.%08lx.%08lx\n",uVar3,*param_3,param_3[1],
                    param_3[2]);
        uVar3 = *param_3;
        *(undefined8 *)(param_5 + 0xc0) = param_3[1];
        *puVar1 = uVar3;
        return 0;
      }
      uVar3 = *puVar1;
      param_3[1] = *(undefined8 *)(param_5 + 0xc0);
      *param_3 = uVar3;
      uVar3 = _Uaarch64_regname(param_2);
      log2Console(3,"Bugly-libunwind","%s -> %08lx.%08lx.%08lx\n",uVar3,*param_3,param_3[1],
                  param_3[2]);
      return 0;
    }
  }
  log2Console(3,"Bugly-libunwind","bad register number %u\n",param_2);
  return 0xfffffffd;
}

