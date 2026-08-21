
undefined8 FUN_01395380(ulong param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  long unaff_x26;
  double dVar5;
  double dVar6;
  
  if ((int)param_2 != (int)param_1) {
    bVar3 = (param_1 & 1) == 0;
    if ((param_2 & 1) == 0) {
      if ((bVar3) || (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
      goto LAB_013954c0;
      dVar6 = *(double *)(param_1 + 3);
      dVar5 = (double)((int)param_2 >> 1);
    }
    else if (bVar3) {
      if (*(int *)(param_2 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_013954c0;
      dVar5 = *(double *)(param_2 + 3);
      dVar6 = (double)((int)param_1 >> 1);
    }
    else {
      lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      iVar4 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      if ((int)lVar1 != iVar4) {
        uVar2 = *(ushort *)(lVar1 + 7);
        if (uVar2 < 0x40) {
          if ((*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) < 0x40) &&
             (iVar4 = FUN_01345360(), iVar4 == (int)*(undefined8 *)(unaff_x26 + 0xb8)))
          goto LAB_013954d0;
        }
        else if ((uVar2 == 0x41) &&
                (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41)) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
        }
        goto LAB_013954c0;
      }
      if (*(int *)(param_1 - 1) != iVar4) goto LAB_013954c0;
      dVar5 = *(double *)(param_2 + 3);
      dVar6 = *(double *)(param_1 + 3);
    }
    if (dVar5 == dVar6) {
      if ((int)((ulong)dVar5 >> 0x20) == (int)((ulong)dVar6 >> 0x20)) goto LAB_013954d0;
    }
    else if ((NAN(dVar5)) && (NAN(dVar6))) goto LAB_013954d0;
LAB_013954c0:
    return *(undefined8 *)(unaff_x26 + 0xc0);
  }
LAB_013954d0:
  return *(undefined8 *)(unaff_x26 + 0xb8);
}

