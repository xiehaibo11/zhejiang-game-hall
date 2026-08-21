
undefined8 FUN_01368e60(int param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_2 & 1) == 0) {
    uVar4 = (uint)*(undefined8 *)(unaff_x26 + 0x140);
  }
  else {
    uVar4 = (int)unaff_x26 + *(int *)(param_2 - 1);
  }
  lVar8 = unaff_x26 + (ulong)*(uint *)(param_4 + (long)param_1 * 2 + 0x23);
  lVar6 = ((long)((ulong)*(uint *)(lVar8 + 3) << 0x20) >> 0x21) + -2;
  do {
    if ((int)unaff_x26 + *(int *)(lVar8 + lVar6 * 4 + 7) == (uVar4 | 2)) {
      uVar5 = unaff_x26 + (ulong)*(uint *)(lVar8 + lVar6 * 4 + 0xb);
      uVar7 = param_2;
      if ((uVar5 & 1) == 0) goto LAB_01368ed4;
      if (*(int *)(uVar5 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
        if (((long)*(int *)(uVar5 + 0x17) & 0x80000000U) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)(uVar5 + 0x3f);
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar5 + 0x27) * 8 + unaff_x26 + 0x2c78);
        }
                    /* WARNING: Could not recover jumptable at 0x01369158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)();
        return uVar3;
      }
      lVar8 = unaff_x26 + (ulong)*(uint *)(uVar5 + 7);
      if (((int)lVar8 == 0) || (*(int *)(lVar8 + 3) == 0)) {
        uVar1 = unaff_x26 + (ulong)*(uint *)(uVar5 + 3);
        if (((long)(uVar1 << 0x20) >> 0x21 & 0x30U) == 0) goto LAB_013690fc;
        if (((uint)((int)uVar1 >> 1) >> 4 & 1) == 0) {
          uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
          if ((uVar9 & 1) == 0) {
            uVar9 = *(ulong *)(unaff_x26 + 0x410);
          }
          uVar10 = (ulong)(*(uint *)(param_3 + 3) >> 3);
          lVar8 = 0;
          while( true ) {
            uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21) -
                              1U;
            iVar2 = *(int *)(uVar9 + (uVar10 * 3 + 5) * 4 + 7);
            if (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
            if (iVar2 == (int)param_3) {
              return *(undefined8 *)(unaff_x26 + 0xb8);
            }
            lVar8 = lVar8 + 1;
            uVar10 = uVar10 + lVar8;
          }
LAB_013690fc:
          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar5 + 0xb);
          if ((uVar9 & 1) == 0) {
            return *(undefined8 *)(unaff_x26 + 0xb8);
          }
          uVar5 = uVar1;
          if ((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
            if ((int)uVar9 == 3) break;
            uVar7 = uVar9 & 0xfffffffffffffffd;
          }
LAB_01368ed4:
          uVar5 = (long)(uVar5 << 0x20) >> 0x21 & 0xf;
          if ((uVar5 == 4) || (uVar5 == 5)) {
LAB_01368fe4:
            return *(undefined8 *)(unaff_x26 + 0xb8);
          }
          if (uVar5 == 0xd) {
            return *(undefined8 *)(unaff_x26 + 0xc0);
          }
          if (uVar5 == 2) {
            uVar5 = unaff_x26 + (ulong)*(uint *)(uVar7 + 3);
            if ((uVar5 & 1) == 0) {
              uVar5 = *(ulong *)(unaff_x26 + 0x410);
            }
            uVar7 = (ulong)(*(uint *)(param_3 + 3) >> 3);
            lVar8 = 0;
            while( true ) {
              uVar7 = uVar7 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar5 + 0xf) << 0x20) >> 0x21) -
                              1U;
              iVar2 = *(int *)(uVar5 + (uVar7 * 3 + 5) * 4 + 7);
              if (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
              if (iVar2 == (int)param_3) {
                return *(undefined8 *)(unaff_x26 + 0xb8);
              }
              lVar8 = lVar8 + 1;
              uVar7 = uVar7 + lVar8;
            }
          }
          else {
            if ((((uVar5 == 6) || (uVar5 == 7)) || (uVar5 == 8)) || (uVar5 == 9)) goto LAB_01368fe4;
            if (uVar5 == 0xb) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
            }
            if (uVar5 != 3) {
              uVar3 = FUN_01369d20(param_2,param_3);
              return uVar3;
            }
            if (*(int *)(uVar7 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
              return *(undefined8 *)(unaff_x26 + 0xb8);
            }
          }
        }
        else {
          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar5 + 0xf);
          if ((int)uVar9 != 3) {
            uVar9 = uVar9 & 0xfffffffffffffffd;
            lVar8 = unaff_x26 +
                    (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
            if (((int)uVar9 == (int)lVar8) ||
               ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) == 0xab &&
                (*(int *)(uVar9 + 0x27b) == *(int *)(lVar8 + 0x27b))))) goto LAB_013690fc;
          }
        }
      }
      break;
    }
    lVar6 = lVar6 + -2;
  } while (-1 < lVar6);
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f68));
}

