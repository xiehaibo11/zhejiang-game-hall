
long FUN_013d1b60(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x26;
  
  lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar2 = *(uint *)(lVar1 + 0xf);
  *(undefined8 *)(unaff_x26 + 0x40) = 0x13d1bb4;
  *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
  uVar5 = (**(code **)(unaff_x26 + 0x1080))();
  *(undefined8 *)(unaff_x26 + 0x38) = 0;
  uVar6 = uVar5 & 0xffffffff;
  lVar8 = 0;
  do {
    uVar6 = uVar6 & ((long)(unaff_x26 + (ulong)uVar2 << 0x20) >> 0x21) - 1U;
    lVar3 = uVar6 * 3;
    lVar9 = (lVar3 + 4) * 4;
    uVar7 = unaff_x26 + (ulong)*(uint *)(lVar1 + lVar9 + 7);
    if ((int)uVar7 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
      return *(long *)(unaff_x26 + 200);
    }
    if ((uVar7 & 1) == 0) {
      if ((long)(uVar7 << 0x20) >> 0x21 == param_2) goto LAB_013d1c5c;
    }
    else if (((int)uVar7 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
            (*(double *)(uVar7 + 3) == (double)(long)param_2)) {
LAB_013d1c5c:
      if ((*(int *)(lVar1 + lVar9 + 0xf) >> 1 & 1U) != 0) {
        if (param_2 < 0x40000000) {
          uVar7 = (ulong)(uint)((int)param_2 * 2);
        }
        else {
          uVar7 = **(ulong **)(unaff_x26 + 0x1428);
          uVar6 = uVar7 + 0xc;
          if (uVar6 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar7 = uVar7 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar6;
          }
          else {
            uVar7 = FUN_01348560(uVar5,0xc);
          }
          *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)(uVar7 + 3) = (double)param_2;
        }
        lVar8 = FUN_013c0ba0(param_1,uVar7);
        return lVar8;
      }
      if (lVar3 + 5U < (ulong)((long)((ulong)*(uint *)(lVar1 + 3) << 0x20) >> 0x21)) {
        return unaff_x26 + (ulong)*(uint *)(lVar1 + lVar9 + 0xb);
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x13d1d18);
      (*pcVar4)();
    }
    lVar8 = lVar8 + 1;
    uVar6 = uVar6 + lVar8;
  } while( true );
}

