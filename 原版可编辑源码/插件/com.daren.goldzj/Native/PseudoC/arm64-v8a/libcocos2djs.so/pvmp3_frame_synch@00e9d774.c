
undefined8 pvmp3_frame_synch(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  plVar2 = (long *)(param_2 + 0x6b80);
  *(undefined8 *)(param_2 + 0x6b80) = *param_1;
  iVar4 = *(int *)(param_1 + 1);
  uVar7 = *(uint *)((long)param_1 + 0xc);
  puVar3 = (uint *)(param_2 + 0x6b88);
  *(int *)(param_2 + 0x6b8c) = iVar4;
  *puVar3 = (uVar7 & 1) << 3;
  uVar7 = getUpTo17bits(plVar2,0xb);
  uVar11 = *puVar3;
  for (; bVar6 = (uint)(iVar4 << 3) <= uVar11, (~uVar7 & 0x7ff) != 0;
      uVar7 = (uVar8 | uVar7 << 8) & 0xffff) {
    if (bVar6) goto LAB_00e9d86c;
    uVar8 = getUpTo9bits(plVar2,8);
    uVar11 = *puVar3;
  }
  if (!bVar6) {
    uVar10 = getNbits(plVar2,0x15);
    uVar11 = (uint)(uVar10 >> 0x13) & 0x1fff;
    uVar7 = *puVar3 - 0x20;
    *puVar3 = uVar7;
    if ((uVar10 >> 0x13 & 0x1fff) == 0) {
      uVar11 = 2;
    }
    else if (uVar11 == 3) {
      uVar11 = 0;
    }
    else {
      if (uVar11 != 2) goto LAB_00e9d86c;
      uVar11 = 1;
    }
    uVar9 = (uint)uVar10;
    uVar8 = uVar9 >> 10 & 3;
    if (uVar8 != 3) {
      iVar5 = *(int *)(param_2 + 0x6b8c);
      iVar4 = (((int)((ulong)((long)(int)((uint)*(ushort *)
                                                 (mp3_bitrate +
                                                 (ulong)(uVar9 >> 0xc & 0xf) * 2 +
                                                 (ulong)uVar11 * 0x1e) << 0x14) *
                             (long)*(int *)(inv_sfreq + (ulong)uVar8 * 4)) >> 0x1c) >>
               (0x14 - uVar11 & 0x1f)) >> (uVar11 != 0)) + (uVar9 >> 9 & 1);
      if (iVar5 < iVar4) {
        *(int *)(param_1 + 2) = iVar4 + 3;
        return 0xc;
      }
      if ((iVar4 == iVar5) ||
         (pbVar1 = (byte *)(*plVar2 + (long)((int)(uVar7 + iVar4 * 8) >> 3)),
         ((uint)(pbVar1[1] >> 5) | (uint)*pbVar1 << 3) == 0x7ff)) {
        *(uint *)((long)param_1 + 0xc) = uVar7 >> 3;
        return 0;
      }
    }
  }
LAB_00e9d86c:
  *(undefined4 *)(param_1 + 1) = 0;
  return 0xc;
}

