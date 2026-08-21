
undefined8 FUN_00a15ec8(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  undefined *puVar5;
  
  bVar1 = *param_3;
  if (((bVar1 - 0x4a < 0x34) || ((bVar1 - 0x21 & 0xff) < 0xc)) || ((bVar1 - 0x30 & 0xff) < 0x19)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    if (param_3[1] - 0x21 < 0x5e) {
      iVar2 = (uint)param_3[1] + (uint)bVar1 * 0x5e;
      uVar3 = iVar2 - 0xc3f;
      if (uVar3 < 0x582) {
        if (0x45a < uVar3) {
          return 0xffffffff;
        }
        puVar4 = (ushort *)(&DAT_0131dd04 + (ulong)uVar3 * 2);
      }
      else {
        if (uVar3 < 0xf0e) {
          if (0xeaf < uVar3) {
            return 0xffffffff;
          }
          uVar3 = iVar2 - 0x11c1;
          puVar5 = &DAT_0131e5ba;
        }
        else {
          if (0x2225 < uVar3) {
            return 0xffffffff;
          }
          uVar3 = iVar2 - 0x1b4d;
          puVar5 = &DAT_0131f816;
        }
        puVar4 = (ushort *)(puVar5 + (ulong)uVar3 * 2);
      }
      if (*puVar4 != 0xfffd) {
        *param_2 = (uint)*puVar4;
        return 2;
      }
    }
  }
  return 0xffffffff;
}

