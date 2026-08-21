
void FUN_01346584(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x26;
  long unaff_x27;
  undefined1 auVar8 [16];
  
  if ((param_4 >> 3 & 1) == 0) {
    uVar4 = (ulong)*(ushort *)(param_3 + (param_2 + unaff_x27) * 2);
  }
  else {
    uVar4 = (ulong)*(byte *)(param_3 + param_2 + unaff_x27);
  }
  if (0xff < (uint)uVar4) {
    uVar5 = **(ulong **)(unaff_x26 + 0x1428);
    uVar7 = uVar5 + 0x10;
    if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar3 = uVar5 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar7;
    }
    else {
      lVar3 = FUN_01348560(param_1,0x10);
    }
    *(int *)(lVar3 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
    *(undefined4 *)(lVar3 + 7) = 1;
    *(undefined4 *)(lVar3 + 3) = 7;
    *(short *)(lVar3 + 0xb) = (short)uVar4;
    FUN_01346614();
    return;
  }
  lVar3 = uVar4 * 4 + 7;
  lVar1 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf18) + lVar3);
  if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    return;
  }
  uVar7 = **(ulong **)(unaff_x26 + 0x1428);
  uVar5 = uVar7 + 0x10;
  if (uVar5 < **(ulong **)(unaff_x26 + 0x1430)) {
    uVar7 = uVar7 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar5;
  }
  else {
    auVar8 = FUN_01348560(lVar1,0x10);
    param_2 = auVar8._8_8_;
    uVar7 = auVar8._0_8_;
  }
  *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
  *(undefined4 *)(uVar7 + 7) = 1;
  *(undefined4 *)(uVar7 + 3) = 7;
  *(char *)(uVar7 + 0xb) = (char)uVar4;
  uVar6 = *(ulong *)(unaff_x26 + 0xf18);
  uVar5 = (long)((ulong)*(uint *)(uVar6 + 3) << 0x20) >> 0x21;
  if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x1346d24);
    (*pcVar2)();
  }
  *(int *)(uVar6 + lVar3) = (int)uVar7;
  if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar7 & 1) != 0)) &&
     (uVar7 = unaff_x26 + (uVar7 & 0xffffffff),
     ((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar6,uVar6 + lVar3,0,2);
  }
  FUN_01346614(uVar7,param_2,uVar5,uVar4,lVar3);
  return;
}

