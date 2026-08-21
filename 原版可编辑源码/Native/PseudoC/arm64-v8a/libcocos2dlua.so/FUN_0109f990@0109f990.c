
undefined8 FUN_0109f990(long param_1,ulong param_2,ushort *param_3)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  ushort uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong local_38;
  
  if (*(uint *)(param_1 + 0x4c4) <= param_2) {
    return 6;
  }
  if (*(int *)(param_1 + 0x4c0) - 1U < 2) {
    lVar10 = *(long *)(param_1 + 0x4b0) + param_2 * 0x30;
    *param_3 = (ushort)*(byte *)(lVar10 + 0x34);
    param_3[1] = (ushort)*(byte *)(lVar10 + 0x35);
    lVar12 = (long)*(char *)(lVar10 + 0x18) * 0x40;
    *(long *)(param_3 + 0xc) = lVar12;
    cVar3 = *(char *)(lVar10 + 0x19);
    *(long *)(param_3 + 0x10) = (long)cVar3 * 0x40;
    *(long *)(param_3 + 0x14) = lVar12 + (long)cVar3 * -0x40;
    uVar11 = (ulong)(int)(((uint)*(byte *)(lVar10 + 0x1a) + (int)*(char *)(lVar10 + 0x1e) +
                          (int)*(char *)(lVar10 + 0x1f)) * 0x40);
  }
  else {
    if (*(int *)(param_1 + 0x4c0) != 3) {
      return 2;
    }
    uVar13 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x4b0) + param_2 * 4 + 8);
    uVar8 = (**(code **)(param_1 + 0x330))(param_1,0x73626978,uVar13,&local_38);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if (local_38 < uVar1 + 4) {
      return 3;
    }
    lVar10 = FT_Stream_Pos(uVar13);
                    /* try { // try from 0109faac to 0119fab7 has its CatchHandler @ 0109fc80 */
    uVar8 = FT_Stream_Seek(uVar13,lVar10 + (ulong)uVar1);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
                    /* try { // try from 0109fabc to 0119facf has its CatchHandler @ 0109fc84 */
    uVar8 = FT_Stream_EnterFrame(uVar13,4);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar7 = FT_Stream_GetUShort(uVar13);
    FT_Stream_GetUShort(uVar13);
    FT_Stream_ExitFrame(uVar13);
    uVar2 = *(ushort *)(param_1 + 0x152);
    *param_3 = uVar7;
    param_3[1] = uVar7;
    sVar4 = *(short *)(param_1 + 0x198);
    iVar6 = (uint)uVar7 * 0x40;
                    /* try { // try from 0109fafc to 0119fb03 has its CatchHandler @ 0109fc94 */
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = (uint)(iVar6 * sVar4) / (uint)uVar2;
    }
    *(ulong *)(param_3 + 0xc) = (ulong)uVar1;
    sVar5 = *(short *)(param_1 + 0x19a);
    uVar1 = 0;
    uVar9 = (uint)uVar2;
    if (uVar9 != 0) {
      uVar1 = (uint)(iVar6 * sVar5) / uVar9;
    }
    *(ulong *)(param_3 + 0x10) = (ulong)uVar1;
    uVar1 = 0;
    if (uVar9 != 0) {
      uVar1 = (uint)(iVar6 * (((int)sVar4 - (int)sVar5) + (int)*(short *)(param_1 + 0x19c))) / uVar9
      ;
    }
    *(ulong *)(param_3 + 0x14) = (ulong)uVar1;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = (iVar6 * (uint)*(ushort *)(param_1 + 0x19e)) / (uint)uVar2;
    }
    uVar11 = (ulong)uVar1;
  }
  *(ulong *)(param_3 + 0x18) = uVar11;
  return 0;
}

