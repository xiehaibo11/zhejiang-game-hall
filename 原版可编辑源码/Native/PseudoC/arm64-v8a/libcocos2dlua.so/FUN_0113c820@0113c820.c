
undefined8 FUN_0113c820(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
                    /* try { // try from 0113c834 to 0123c847 has its CatchHandler @ 0113c9b0 */
  lVar4 = **(long **)(param_1 + 0x350);
  do {
    if (param_3 < 1) {
      return 1;
    }
    lVar1 = param_3;
    if (lVar4 <= param_3) {
      lVar1 = lVar4;
    }
    iVar3 = FUN_0113c2f4(param_1,param_2,lVar1,param_4);
                    /* try { // try from 0113c870 to 0123c87f has its CatchHandler @ 0113c9b4 */
    lVar2 = 0;
    if (-1 < iVar3) {
      lVar2 = lVar1;
    }
    param_2 = param_2 + lVar1;
    param_3 = param_3 - lVar2;
  } while (-1 < iVar3);
  return 0xffffffff;
}

