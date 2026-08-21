
ulong FUN_0138d060(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x26;
  double dVar10;
  
  iVar6 = (int)param_2;
  if ((param_2 & 1) == 0) {
    uVar1 = iVar6 >> 1;
    uVar2 = ~uVar1 + uVar1 * 0x8000;
    uVar2 = (uVar2 ^ uVar2 >> 0xc) * 5;
    uVar2 = (uVar2 ^ uVar2 >> 4) * 0x809;
    lVar7 = (long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xf) << 0x20) >> 0x21;
    uVar2 = *(uint *)(param_1 +
                     ((long)(int)((uVar2 ^ uVar2 >> 0x10) & 0x3fffffff) & lVar7 - 1U) * 4 + 0x13);
    while (lVar9 = (long)(unaff_x26 + (ulong)uVar2 << 0x20) >> 0x21, lVar9 != -1) {
      lVar9 = lVar9 * 3 + lVar7;
      uVar8 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar9 * 4 + 0x13);
      if (((int)uVar8 == iVar6) ||
         ((((uVar8 & 1) != 0 && (*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) &&
          (*(double *)(uVar8 + 3) == (double)(int)uVar1)))) goto LAB_0138d5c8;
      uVar2 = *(uint *)(param_1 + lVar9 * 4 + 0x1b);
    }
  }
  else {
    lVar7 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    uVar3 = *(ushort *)(lVar7 + 7);
    if (uVar3 < 0x40) {
      if ((*(uint *)(param_2 + 3) & 1) == 0) {
        uVar8 = (ulong)(int)(*(uint *)(param_2 + 3) >> 3);
      }
      else {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x138d410;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        lVar7 = (**(code **)(unaff_x26 + 0x1210))();
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar8 = (lVar7 << 0x20) >> 0x21;
      }
      lVar7 = (long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xf) << 0x20) >> 0x21;
      uVar2 = *(uint *)(param_1 + (uVar8 & lVar7 - 1U) * 4 + 0x13);
      while (lVar9 = (long)(unaff_x26 + (ulong)uVar2 << 0x20) >> 0x21, lVar9 != -1) {
        lVar9 = lVar9 * 3 + lVar7;
        uVar8 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar9 * 4 + 0x13);
        if ((((uVar8 & 1) != 0) && (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) < 0x40)
            ) && (iVar6 = FUN_01345360(uVar8,param_2),
                 iVar6 == (int)*(undefined8 *)(unaff_x26 + 0xb8))) goto LAB_0138d5c8;
        uVar2 = *(uint *)(param_1 + lVar9 * 4 + 0x1b);
      }
    }
    else if ((int)lVar7 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x138d2fc;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      lVar9 = (**(code **)(unaff_x26 + 0x1210))();
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      dVar10 = *(double *)(param_2 + 3);
      lVar7 = (long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xf) << 0x20) >> 0x21;
      uVar2 = *(uint *)(param_1 + ((lVar9 << 0x20) >> 0x21 & lVar7 - 1U) * 4 + 0x13);
      while (lVar9 = (long)(unaff_x26 + (ulong)uVar2 << 0x20) >> 0x21, lVar9 != -1) {
        lVar9 = lVar9 * 3 + lVar7;
        uVar8 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar9 * 4 + 0x13);
        if ((uVar8 & 1) == 0) {
          if (dVar10 == (double)((int)uVar8 >> 1)) goto LAB_0138d5c8;
        }
        else if ((*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) &&
                ((dVar10 == *(double *)(uVar8 + 3) ||
                 ((NAN(dVar10) && (NAN(*(double *)(uVar8 + 3)))))))) goto LAB_0138d5c8;
        uVar2 = *(uint *)(param_1 + lVar9 * 4 + 0x1b);
      }
    }
    else if (uVar3 == 0x41) {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x138d1e4;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      lVar9 = (**(code **)(unaff_x26 + 0x1210))();
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      lVar7 = (long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xf) << 0x20) >> 0x21;
      uVar2 = *(uint *)(param_1 + ((lVar9 << 0x20) >> 0x21 & lVar7 - 1U) * 4 + 0x13);
      while (lVar9 = (long)(unaff_x26 + (ulong)uVar2 << 0x20) >> 0x21, lVar9 != -1) {
        lVar9 = (lVar9 * 3 + lVar7) * 4;
        uVar8 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar9 + 0x13);
        if (((uVar8 & 1) != 0) && (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7) == 0x41))
        {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
        }
        uVar2 = *(uint *)(param_1 + lVar9 + 0x1b);
      }
    }
    else {
      if (uVar3 < 0xa9) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x138d0c4;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        lVar7 = (**(code **)(unaff_x26 + 0x1210))();
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar8 = (lVar7 << 0x20) >> 0x21;
      }
      else {
        uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        if ((uVar8 & 1) == 0) {
          uVar8 = (long)(uVar8 << 0x20) >> 0x21;
        }
        else {
          sVar4 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar8 - 1) + 7);
          if (sVar4 == 0xa4) {
            uVar8 = (ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) >> 10 & 0xfffff;
          }
          else if (sVar4 == 0x7a) {
            if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0,0x138d5e4);
              (*pcVar5)();
            }
            uVar8 = (long)(unaff_x26 + (ulong)*(uint *)(uVar8 + 0x17) << 0x20) >> 0x21;
          }
          else {
            uVar8 = 0;
          }
        }
      }
      lVar7 = (long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xf) << 0x20) >> 0x21;
      uVar2 = *(uint *)(param_1 + (uVar8 & lVar7 - 1U) * 4 + 0x13);
      while (lVar9 = (long)(unaff_x26 + (ulong)uVar2 << 0x20) >> 0x21, lVar9 != -1) {
        lVar9 = lVar9 * 3 + lVar7;
        if (iVar6 == *(int *)(param_1 + lVar9 * 4 + 0x13)) {
LAB_0138d5c8:
          return (ulong)(uint)((int)lVar9 * 2);
        }
        uVar2 = *(uint *)(param_1 + lVar9 * 4 + 0x1b);
      }
    }
  }
  return 0xfffffffffffffffe;
}

