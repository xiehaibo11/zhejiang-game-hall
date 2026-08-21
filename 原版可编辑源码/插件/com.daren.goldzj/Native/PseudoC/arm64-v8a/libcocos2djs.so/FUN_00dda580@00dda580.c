
void FUN_00dda580(long param_1,uint param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar8 = *(long *)(param_1 + 0x350);
  uVar9 = *(uint *)(lVar8 + 0x48);
  uVar4 = *(uint *)(lVar8 + 0x4c);
  for (; 0xa3f < (int)param_2; param_2 = param_2 - (int)*(short *)(param_3 + 0x26e)) {
    uVar2 = *(ushort *)(param_3 + 0x26a);
    uVar11 = (uint)uVar2;
    uVar3 = *(ushort *)(param_3 + 0x26c);
    if (uVar4 < uVar2) {
      uVar11 = uVar2 - uVar4;
      if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
        TIFFFlushData1(param_1);
      }
      pbVar5 = *(byte **)(param_1 + 0x388);
      *(byte **)(param_1 + 0x388) = pbVar5 + 1;
      *pbVar5 = (byte)(uVar3 >> (ulong)(uVar11 & 0x1f)) | (byte)uVar9;
      lVar1 = *(long *)(param_1 + 0x390) + 1;
      *(long *)(param_1 + 0x390) = lVar1;
      while (8 < uVar11) {
        uVar11 = uVar11 - 8;
        if (*(long *)(param_1 + 0x370) <= lVar1) {
          TIFFFlushData1(param_1);
        }
        puVar6 = *(undefined1 **)(param_1 + 0x388);
        *(undefined1 **)(param_1 + 0x388) = puVar6 + 1;
        *puVar6 = (char)(uVar3 >> (ulong)(uVar11 & 0x1f));
        lVar1 = *(long *)(param_1 + 0x390) + 1;
        *(long *)(param_1 + 0x390) = lVar1;
      }
      uVar9 = 0;
      uVar4 = 8;
    }
    uVar4 = uVar4 - uVar11;
    uVar9 = (*(uint *)(&DAT_019560c8 + (ulong)uVar11 * 4) & (uint)uVar3) << (ulong)(uVar4 & 0x1f) |
            uVar9;
    if (uVar4 == 0) {
      if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
        TIFFFlushData1(param_1);
      }
      puVar6 = *(undefined1 **)(param_1 + 0x388);
      *(undefined1 **)(param_1 + 0x388) = puVar6 + 1;
      *puVar6 = (char)uVar9;
      uVar9 = 0;
      *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
      uVar4 = 8;
    }
  }
  if (0x3f < (int)param_2) {
    uVar10 = (ulong)((param_2 >> 6) + 0x3f);
    puVar7 = (ushort *)(param_3 + uVar10 * 6);
    uVar2 = *puVar7;
    uVar11 = (uint)uVar2;
    uVar3 = puVar7[1];
    if (uVar4 < uVar2) {
      uVar11 = uVar2 - uVar4;
      if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
        TIFFFlushData1(param_1);
      }
      pbVar5 = *(byte **)(param_1 + 0x388);
      *(byte **)(param_1 + 0x388) = pbVar5 + 1;
      *pbVar5 = (byte)(uVar3 >> (ulong)(uVar11 & 0x1f)) | (byte)uVar9;
      lVar1 = *(long *)(param_1 + 0x390) + 1;
      *(long *)(param_1 + 0x390) = lVar1;
      while (8 < uVar11) {
        uVar11 = uVar11 - 8;
        if (*(long *)(param_1 + 0x370) <= lVar1) {
          TIFFFlushData1(param_1);
        }
        puVar6 = *(undefined1 **)(param_1 + 0x388);
        *(undefined1 **)(param_1 + 0x388) = puVar6 + 1;
        *puVar6 = (char)(uVar3 >> (ulong)(uVar11 & 0x1f));
        lVar1 = *(long *)(param_1 + 0x390) + 1;
        *(long *)(param_1 + 0x390) = lVar1;
      }
      uVar9 = 0;
      uVar4 = 8;
    }
    uVar4 = uVar4 - uVar11;
    uVar9 = (*(uint *)(&DAT_019560c8 + (ulong)uVar11 * 4) & (uint)uVar3) << (ulong)(uVar4 & 0x1f) |
            uVar9;
    if (uVar4 == 0) {
      if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
        TIFFFlushData1(param_1);
      }
      puVar6 = *(undefined1 **)(param_1 + 0x388);
      *(undefined1 **)(param_1 + 0x388) = puVar6 + 1;
      *puVar6 = (char)uVar9;
      uVar9 = 0;
      *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
      uVar4 = 8;
    }
    param_2 = param_2 - (int)*(short *)(param_3 + uVar10 * 6 + 4);
  }
  puVar7 = (ushort *)(param_3 + (long)(int)param_2 * 6);
  uVar2 = *puVar7;
  uVar11 = (uint)uVar2;
  uVar3 = puVar7[1];
  if (uVar4 < uVar2) {
    uVar11 = uVar2 - uVar4;
    if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
      TIFFFlushData1(param_1);
    }
    pbVar5 = *(byte **)(param_1 + 0x388);
    *(byte **)(param_1 + 0x388) = pbVar5 + 1;
    *pbVar5 = (byte)(uVar3 >> (ulong)(uVar11 & 0x1f)) | (byte)uVar9;
    lVar1 = *(long *)(param_1 + 0x390) + 1;
    *(long *)(param_1 + 0x390) = lVar1;
    while (8 < uVar11) {
      uVar11 = uVar11 - 8;
      if (*(long *)(param_1 + 0x370) <= lVar1) {
        TIFFFlushData1(param_1);
      }
      puVar6 = *(undefined1 **)(param_1 + 0x388);
      *(undefined1 **)(param_1 + 0x388) = puVar6 + 1;
      *puVar6 = (char)(uVar3 >> (ulong)(uVar11 & 0x1f));
      lVar1 = *(long *)(param_1 + 0x390) + 1;
      *(long *)(param_1 + 0x390) = lVar1;
    }
    uVar9 = 0;
    uVar4 = 8;
  }
  uVar4 = uVar4 - uVar11;
  uVar9 = (*(uint *)(&DAT_019560c8 + (ulong)uVar11 * 4) & (uint)uVar3) << (ulong)(uVar4 & 0x1f) |
          uVar9;
  if (uVar4 == 0) {
    if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
      TIFFFlushData1(param_1);
    }
    puVar6 = *(undefined1 **)(param_1 + 0x388);
    *(undefined1 **)(param_1 + 0x388) = puVar6 + 1;
    *puVar6 = (char)uVar9;
    uVar9 = 0;
    *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
    uVar4 = 8;
  }
  *(uint *)(lVar8 + 0x48) = uVar9;
  *(uint *)(lVar8 + 0x4c) = uVar4;
  return;
}

