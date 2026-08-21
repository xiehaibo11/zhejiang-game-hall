
undefined8 FUN_00a1620c(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a16068 with catch @ 00a16210
                        */
  uVar1 = 1;
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    if ((param_2[3] & param_2[4]) == 0xffffffffffffffff) {
      lVar3 = *param_2;
      if (lVar3 == 0) {
        return 3;
      }
      *(long *)(lVar3 + 0x10) = param_2[2];
      if ((long *)param_2[2] != (long *)0x0) {
        *(long *)param_2[2] = lVar3;
      }
      *param_2 = 0;
    }
    else {
      plVar2 = (long *)FUN_00a15f20(param_2[3],param_2[4],param_1);
      if (plVar2 != param_2) {
        return 2;
      }
      param_1 = (long *)param_2[2];
      if (param_1 == (long *)0x0) {
        if (*param_2 == 0) {
          param_1 = (long *)param_2[1];
        }
        else {
          param_1 = (long *)FUN_00a15f20(param_2[3],param_2[4]);
          param_1[1] = param_2[1];
        }
      }
      else {
        lVar3 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar3;
        lVar3 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar3;
      }
    }
    uVar1 = 0;
    *param_3 = (long)param_1;
  }
  return uVar1;
}

