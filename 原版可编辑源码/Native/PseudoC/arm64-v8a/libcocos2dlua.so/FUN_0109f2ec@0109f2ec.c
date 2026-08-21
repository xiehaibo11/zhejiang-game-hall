
uint FUN_0109f2ec(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint local_a4;
  long local_a0;
  ushort local_98;
  long local_90;
  long local_88 [2];
  ulong local_78;
  ulong local_70;
  uint local_64;
  
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  local_90 = FT_Stream_Pos(param_2);
  local_a0 = FT_Stream_ReadULong(param_2,&local_a4);
  if ((local_a4 == 0) &&
     (local_a4 = FT_Stream_ReadFields(param_2,&DAT_014604fc,&local_a0), lVar5 = local_90,
     local_a4 == 0)) {
    lVar8 = 0x4f54544f;
    if (local_a0 != 0x4f54544f) {
      iVar6 = FT_Stream_Seek(param_2,local_90 + 0xc);
      if (iVar6 != 0) {
        return iVar6;
      }
      if (local_98 == 0) {
        return 2;
      }
      uVar7 = 0;
      bVar3 = false;
      bVar2 = false;
      uVar11 = 0;
      bVar4 = false;
      local_64 = 0;
      do {
        local_64 = FT_Stream_ReadFields(param_2,&DAT_01460514,local_88);
        if (local_64 != 0) break;
        if ((local_70 <= *(ulong *)(param_2 + 8)) &&
           (local_78 <= *(ulong *)(param_2 + 8) - local_70)) {
          uVar11 = uVar11 + 1;
          if (local_88[0] < 0x62686564) {
            if (local_88[0] == 0x4d455441) {
              bVar4 = true;
            }
            else if (local_88[0] == 0x53494e47) {
              bVar3 = true;
            }
          }
          else if ((local_88[0] == 0x68656164) || (local_88[0] == 0x62686564)) {
            if (local_70 < 0x36) {
              return 0x8e;
            }
            local_64 = FT_Stream_Seek(param_2,local_78 + 0xc);
            if (local_64 != 0) {
              return local_64;
            }
            FT_Stream_ReadULong(param_2,&local_64);
            if (local_64 != 0) {
              return local_64;
            }
            iVar6 = FT_Stream_Seek(param_2,lVar5 + 0x1c + uVar7 * 0x10);
            if (iVar6 != 0) {
              return iVar6;
            }
            bVar2 = true;
            local_64 = 0;
          }
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1 & 0xffff;
      } while ((uVar1 & 0xffff) < (uint)local_98);
      if (uVar11 == 0) {
        return 2;
      }
      lVar8 = local_a0;
      local_98 = uVar11;
      if ((!bVar2) && ((!bVar3 || (!bVar4)))) {
        return 0x8e;
      }
    }
    local_a4 = 0;
    *(ushort *)(param_1 + 0x120) = local_98;
    *(long *)(param_1 + 0x118) = lVar8;
    uVar10 = ft_mem_realloc(uVar10,0x20,0,local_98,0,&local_a4);
    *(undefined8 *)(param_1 + 0x128) = uVar10;
    if (((local_a4 == 0) && (local_a4 = FT_Stream_Seek(param_2,local_90 + 0xc), local_a4 == 0)) &&
       (local_a4 = FT_Stream_EnterFrame(param_2,(ulong)*(ushort *)(param_1 + 0x120) << 4),
       local_a4 == 0)) {
      local_a4 = 0;
      if (local_98 != 0) {
        puVar9 = *(undefined8 **)(param_1 + 0x128);
        iVar6 = 0;
        do {
          uVar10 = FT_Stream_GetULong(param_2);
          *puVar9 = uVar10;
          uVar10 = FT_Stream_GetULong(param_2);
          puVar9[1] = uVar10;
          uVar10 = FT_Stream_GetULong(param_2);
          puVar9[2] = uVar10;
          uVar7 = FT_Stream_GetULong(param_2);
          puVar9[3] = uVar7;
          if ((uVar7 <= *(ulong *)(param_2 + 8)) &&
             ((ulong)puVar9[2] <= *(ulong *)(param_2 + 8) - uVar7)) {
            puVar9 = puVar9 + 4;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)local_98);
      }
      FT_Stream_ExitFrame(param_2);
    }
  }
  return local_a4;
}

