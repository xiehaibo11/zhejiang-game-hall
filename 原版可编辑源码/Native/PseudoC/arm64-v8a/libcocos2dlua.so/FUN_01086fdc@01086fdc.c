
ulong FUN_01086fdc(long *param_1,long param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  uint local_38;
  byte abStack_34 [4];
  
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_2;
  lVar3 = FT_Stream_Pos(param_2);
  param_1[1] = lVar3;
  uVar2 = FT_Stream_ReadUShort(param_2,&local_38);
  if (local_38 == 0) {
    uVar2 = uVar2 & 0xffff;
    if (uVar2 == 0) {
      return 0;
    }
    bVar1 = FT_Stream_ReadChar(param_2,&local_38);
    if (local_38 == 0) {
      if ((byte)(bVar1 - 1) < 4) {
        uVar5 = (ulong)bVar1;
        *(byte *)((long)param_1 + 0x14) = bVar1;
        *(uint *)(param_1 + 2) = uVar2;
        param_1[3] = param_1[1] + uVar5 * (uVar2 + 1) + 3;
        local_38 = FT_Stream_Skip(param_2,uVar5 * (uVar2 + 1) - uVar5);
        if ((local_38 != 0) ||
           (local_38 = FT_Stream_Read(*param_1,abStack_34,*(undefined1 *)((long)param_1 + 0x14)),
           local_38 != 0)) goto LAB_01087034;
        uVar5 = (ulong)*(byte *)((long)param_1 + 0x14);
        if (uVar5 != 0) {
          uVar4 = 0;
          pbVar6 = abStack_34;
          do {
            uVar5 = uVar5 - 1;
            uVar4 = (ulong)*pbVar6 | uVar4 << 8;
            pbVar6 = pbVar6 + 1;
          } while (uVar5 != 0);
          local_38 = 0;
          if (uVar4 != 0) {
            param_1[4] = uVar4 - 1;
            if (param_3 == '\0') {
              uVar5 = FT_Stream_Skip(param_2);
              local_38 = (uint)uVar5;
            }
            else {
              uVar5 = FT_Stream_ExtractFrame(param_2,uVar4 - 1,param_1 + 6);
              local_38 = (uint)uVar5;
            }
            if (local_38 == 0) {
              return uVar5;
            }
            goto LAB_01087034;
          }
        }
      }
      local_38 = 8;
    }
  }
LAB_01087034:
  ft_mem_free(uVar7,param_1[5]);
  param_1[5] = 0;
  return (ulong)local_38;
}

