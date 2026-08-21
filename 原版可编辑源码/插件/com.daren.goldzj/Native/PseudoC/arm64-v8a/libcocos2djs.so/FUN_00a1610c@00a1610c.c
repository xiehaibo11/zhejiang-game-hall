
long * FUN_00a1610c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_3 == 0) {
    plVar4 = (long *)0x0;
    plVar3 = (long *)0x0;
  }
  else {
    plVar1 = (long *)FUN_00a15f20(param_1,param_2);
    if ((param_1 < plVar1[3]) || ((param_1 <= plVar1[3] && (param_2 < plVar1[4])))) {
      lVar2 = *plVar1;
      plVar3 = (long *)0x0;
      plVar4 = plVar1;
      if (lVar2 == 0) goto LAB_00a161ec;
      plVar1 = (long *)FUN_00a15f20(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
                                    plVar1);
    }
    lVar2 = plVar1[3];
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && (param_2 < plVar1[4])))) {
      plVar3 = (long *)0x0;
      plVar4 = plVar1;
    }
    else {
      plVar4 = (long *)plVar1[2];
      plVar3 = plVar1;
      if (plVar4 == (long *)0x0) {
        if (*plVar1 == 0) {
          plVar4 = (long *)plVar1[1];
        }
        else {
          plVar4 = (long *)FUN_00a15f20(param_1,param_2);
          plVar4[1] = plVar1[1];
        }
      }
      else {
        lVar2 = plVar1[3];
        plVar4[4] = plVar1[4];
        plVar4[3] = lVar2;
        lVar2 = *plVar1;
        plVar4[1] = plVar1[1];
        *plVar4 = lVar2;
      }
    }
  }
LAB_00a161ec:
  *param_4 = plVar3;
  return plVar4;
}

