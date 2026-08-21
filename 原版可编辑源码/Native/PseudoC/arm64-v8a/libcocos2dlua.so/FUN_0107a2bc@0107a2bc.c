
undefined8 FUN_0107a2bc(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long alStack_60 [4];
  
  if (param_2 - 1 < 4) {
    uVar3 = (ulong)param_2;
    plVar4 = alStack_60;
    do {
      lVar1 = FT_RoundFix(*param_3);
      uVar3 = uVar3 - 1;
      *plVar4 = lVar1 >> 0x10;
      param_3 = param_3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
    uVar2 = FUN_01079c40(param_1,param_2,alStack_60);
                    /* try { // try from 0107a31c to 0117a323 has its CatchHandler @ 0107a44c */
  }
  else {
    uVar2 = 6;
  }
  return uVar2;
}

