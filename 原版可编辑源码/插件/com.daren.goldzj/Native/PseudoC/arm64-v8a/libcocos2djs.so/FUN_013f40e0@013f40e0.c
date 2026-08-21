
void FUN_013f40e0(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long unaff_x26;
  long unaff_x27;
  
  bVar4 = (param_2 & 1) == 0;
  uVar7 = (uint)bVar4;
  if ((int)param_4 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar6 = ((long)(param_3 << 0x20) >> 0x21) * 4;
    lVar1 = lVar6 + 0x23;
    param_3 = lVar6 + 0x1f;
    *(int *)(param_4 + lVar1) = (int)unaff_x26 + *(int *)(param_4 + lVar1) + 4;
    uVar8 = (int)unaff_x26 + *(int *)(param_4 + param_3);
    if (((uVar8 & 0xfffffffd) != (uint)param_2) &&
       (uVar9 = (uint)*(undefined8 *)(unaff_x26 + 0xb88), uVar8 != uVar9)) {
      if (((uVar8 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) || (uVar8 == 3)) &&
         (uVar5 = param_2, !bVar4)) {
        while (sVar3 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar5 - 1) + 7), sVar3 == 0x438) {
          uVar5 = unaff_x26 + (ulong)*(uint *)(uVar5 + 0xb);
        }
        if ((sVar3 == 0x439) &&
           (*(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) ==
            *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar5 + 0xf) + -1) +
                    0x13))) {
          *(int *)(param_4 + param_3) = (int)(param_2 | 3);
          if ((((uint)*(undefined8 *)((param_4 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             ((((param_2 | 3) & 1) != 0 &&
              (((uint)*(undefined8 *)
                       ((unaff_x26 + (param_2 & 0xffffffff | 3) & 0xfffffffffffc0000) + 8) >> 1 & 1)
               != 0)))) {
            uVar7 = (uint)bVar4;
            FUN_0133eb00(param_4,param_4 + param_3,0,2);
          }
          *(undefined4 *)(param_4 + 0x17) = 0;
          goto LAB_013f4154;
        }
      }
      *(uint *)(param_4 + param_3) = uVar9;
      *(undefined4 *)(param_4 + 0x17) = 0;
    }
  }
LAB_013f4154:
  if ((uVar7 != 0) ||
     (bVar2 = *(byte *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 9), param_3 = (ulong)bVar2,
     (bVar2 >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2068),param_3);
  }
  uVar5 = FUN_0133fcc0(0,param_2,0);
  if (((uVar5 & 1) != 0) && (0xa8 < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar5 - 1) + 7))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20d8));
}

