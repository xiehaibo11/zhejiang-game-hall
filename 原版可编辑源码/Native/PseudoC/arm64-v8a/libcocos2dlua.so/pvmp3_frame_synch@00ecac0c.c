
undefined8 pvmp3_frame_synch(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  plVar2 = (long *)(param_2 + 0x6b80);
  *(undefined8 *)(param_2 + 0x6b80) = *param_1;
  iVar4 = *(int *)(param_1 + 1);
  puVar3 = (uint *)(param_2 + 0x6b88);
  *puVar3 = (*(uint *)((long)param_1 + 0xc) & 1) << 3;
  *(int *)(param_2 + 0x6b8c) = iVar4;
  uVar6 = getUpTo17bits(plVar2,0xb);
  uVar10 = *puVar3;
  for (; bVar5 = (uint)(iVar4 << 3) <= uVar10, (~uVar6 & 0x7ff) != 0;
      uVar6 = (uVar7 | uVar6 << 8) & 0xffff) {
    if (bVar5) goto LAB_00ecacf8;
    uVar7 = getUpTo9bits(plVar2,8);
    uVar10 = *puVar3;
  }
  if (!bVar5) {
    uVar9 = getNbits(plVar2,0x15);
    uVar10 = (uint)(uVar9 >> 0x13) & 0x1fff;
    uVar6 = *puVar3 - 0x20;
    *puVar3 = uVar6;
    if ((uVar9 >> 0x13 & 0x1fff) == 0) {
      uVar10 = 2;
    }
    else if (uVar10 == 3) {
      uVar10 = 0;
    }
    else {
      if (uVar10 != 2) goto LAB_00ecacf8;
      uVar10 = 1;
    }
    uVar8 = (uint)uVar9;
    uVar7 = uVar8 >> 10 & 3;
    if (uVar7 != 3) {
      iVar4 = (((int)((ulong)((long)(int)((uint)*(ushort *)
                                                 (mp3_bitrate +
                                                 (ulong)(uVar8 >> 0xc & 0xf) * 2 +
                                                 (ulong)uVar10 * 0x1e) << 0x14) *
                             (long)*(int *)(inv_sfreq + (ulong)uVar7 * 4)) >> 0x1c) >>
               (0x14 - uVar10 & 0x1f)) >> (uVar10 != 0)) + (uVar8 >> 9 & 1);
      if (*(int *)(param_2 + 0x6b8c) < iVar4) {
        *(int *)(param_1 + 2) = iVar4 + 3;
        return 0xc;
      }
      if ((iVar4 == *(int *)(param_2 + 0x6b8c)) ||
         (pbVar1 = (byte *)(*plVar2 + (long)((int)(uVar6 + iVar4 * 8) >> 3)),
         ((uint)(pbVar1[1] >> 5) | (uint)*pbVar1 << 3) == 0x7ff)) {
        *(uint *)((long)param_1 + 0xc) = uVar6 >> 3;
        return 0;
      }
    }
  }
LAB_00ecacf8:
  *(undefined4 *)(param_1 + 1) = 0;
  return 0xc;
}

