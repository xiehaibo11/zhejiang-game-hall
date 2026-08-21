
ulong FUN_0134a790(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x26;
  undefined8 unaff_x27;
  double dVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  while( true ) {
    uVar2 = auVar6._0_8_;
    if ((uVar2 & 0x80000001) == 0) {
      return uVar2;
    }
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(int *)(uVar2 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) break;
    auVar6 = thunk_FUN_01349c30(uVar2,auVar6._8_8_,unaff_x27);
  }
  dVar5 = *(double *)(uVar2 + 3);
  if (dVar5 <= 0.0) {
    return 0;
  }
  if (dVar5 < 9007199254740991.0) {
    dVar5 = (double)(long)dVar5;
    iVar3 = (int)dVar5;
    if ((dVar5 == (double)iVar3) &&
       (((iVar3 != 0 || (-1 < (long)dVar5)) && (!SCARRY4(iVar3,iVar3))))) {
      return (long)(iVar3 * 2);
    }
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar4 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      uVar4 = FUN_01348560(uVar2,0xc);
    }
    *(int *)(uVar4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(uVar4 + 3) = dVar5;
    return uVar4;
  }
  return unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0xb);
}

