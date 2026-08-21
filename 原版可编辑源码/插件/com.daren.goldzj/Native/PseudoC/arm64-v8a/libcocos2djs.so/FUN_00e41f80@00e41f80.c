
uint FUN_00e41f80(long param_1,long *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  undefined8 *puVar27;
  long local_bc0;
  long local_bb8;
  ulong local_ba0;
  undefined8 local_b98;
  long local_b90;
  long lStack_b88;
  long local_b80;
  ulong local_b78;
  long local_b70;
  long lStack_b68;
  long local_b60;
  long local_b58;
  ushort local_b48;
  undefined6 uStack_b46;
  int local_b40;
  ushort local_658;
  ushort local_656;
  short local_654;
  short local_652;
  ushort local_650;
  short local_64e;
  short local_64c;
  ushort local_64a;
  ulong local_618;
  long local_608;
  long lStack_600;
  byte local_5d6;
  long local_5d0;
  code *local_5b8;
  ulong local_1d0;
  undefined1 local_1bf;
  
  lVar22 = *(long *)(param_1 + 8);
  lVar24 = *(long *)(lVar22 + 0x490);
  lVar23 = *(long *)(lVar22 + 0x390);
  puVar27 = *(undefined8 **)(lVar23 + 0x50);
  if ((*(int *)(lVar24 + 0x74c) == 0xffff) || (*(long *)(lVar24 + 0x528) == 0)) {
    if (*(uint *)(lVar24 + 0x24) <= param_3) {
      return 6;
    }
  }
  else if (param_3 != 0) {
    if (*(uint *)(lVar24 + 0x530) < param_3) {
      return 6;
    }
    param_3 = (uint)*(ushort *)(*(long *)(lVar24 + 0x528) + (ulong)param_3 * 2);
    if (param_3 == 0) {
      return 6;
    }
  }
  if ((param_4 & 0x400) != 0) {
    param_4 = param_4 | 3;
  }
  *(undefined8 *)(param_1 + 0x140) = 0x10000;
  *(long *)(param_1 + 0x138) = 0x10000;
  if (param_2 != (long *)0x0) {
    lVar12 = param_2[4];
    *(long *)(param_1 + 0x140) = param_2[5];
    *(long *)(param_1 + 0x138) = lVar12;
    if (param_2[0xb] != 0xffffffff) {
      lVar12 = *(long *)(*param_2 + 0x370);
      if (((*(long *)(lVar12 + 0xc0) != 0) && ((param_4 >> 3 & 1) == 0)) &&
         (iVar8 = (**(code **)(lVar12 + 0x90))
                            (lVar22,param_2[0xb],param_3,param_4,*(undefined8 *)(*param_2 + 0xc0),
                             param_1 + 0x98,&local_658), iVar8 == 0)) {
        *(undefined4 *)(param_1 + 200) = 0;
        bVar7 = (param_4 & 0x10) != 0;
        *(ulong *)(param_1 + 0x30) = (ulong)local_656 << 6;
        *(ulong *)(param_1 + 0x38) = (ulong)local_658 << 6;
        *(long *)(param_1 + 0x40) = (long)local_654 << 6;
        *(long *)(param_1 + 0x48) = (long)local_652 << 6;
        *(ulong *)(param_1 + 0x50) = (ulong)local_650 << 6;
        *(long *)(param_1 + 0x58) = (long)local_64e << 6;
        if (bVar7) {
          local_654 = local_64e;
        }
        *(long *)(param_1 + 0x60) = (long)local_64c << 6;
        if (bVar7) {
          local_652 = local_64c;
        }
        *(undefined4 *)(param_1 + 0x90) = 0x62697473;
        *(int *)(param_1 + 0xc0) = (int)local_654;
        *(int *)(param_1 + 0xc4) = (int)local_652;
        *(ulong *)(param_1 + 0x68) = (ulong)local_64a << 6;
        (**(code **)(*(long *)(lVar22 + 0x370) + 0x118))(lVar22,0,param_3,&local_b70,&local_b48);
        *(ulong *)(param_1 + 0x70) = (ulong)local_b48;
        if ((*(char *)(lVar22 + 0x1f0) == '\0') || (*(short *)(lVar22 + 0x21e) == 0)) {
          if (*(short *)(lVar22 + 0x268) == -1) {
            sVar4 = *(short *)(lVar22 + 0x198);
            sVar5 = *(short *)(lVar22 + 0x19a);
          }
          else {
            sVar4 = *(short *)(lVar22 + 0x2c2);
            sVar5 = *(short *)(lVar22 + 0x2c4);
          }
          uVar19 = (long)sVar4 - (long)sVar5;
        }
        else {
          (**(code **)(*(long *)(lVar22 + 0x370) + 0x118))(lVar22,1,param_3,&local_b70,&local_b48);
          uVar19 = (ulong)local_b48;
        }
        *(ulong *)(param_1 + 0x78) = uVar19;
        return 0;
      }
    }
  }
  if ((param_4 >> 0xe & 1) != 0) {
    return 6;
  }
  uVar25 = *(uint *)(lVar24 + 0xb30);
  if (uVar25 == 0) {
    local_b58 = *(long *)(lVar24 + 0x6c0);
    local_b60 = *(long *)(lVar24 + 0x6b8);
    lStack_b68 = *(long *)(lVar24 + 0x6b0);
    local_b70 = *(long *)(lVar24 + 0x6a8);
    local_bb8 = *(long *)(lVar24 + 0x6d8);
    local_bc0 = *(long *)(lVar24 + 0x6e0);
  }
  else {
    puVar17 = *(undefined1 **)(lVar24 + 0x1340);
    uVar9 = 0;
    if (puVar17 != (undefined1 *)0x0) {
      if (*(char *)(lVar24 + 0x1338) == '\x03') {
        if (*(uint *)(lVar24 + 0x1350) <= param_3 - *(int *)(lVar24 + 0x134c)) {
          pbVar20 = puVar17 + 2;
          uVar21 = (uint)CONCAT11(*puVar17,puVar17[1]);
          do {
            if (param_3 < uVar21) break;
            uVar1 = (uint)CONCAT11(pbVar20[1],pbVar20[2]);
            if (param_3 < uVar1) {
              bVar3 = *pbVar20;
              uVar9 = (uint)bVar3;
              *(uint *)(lVar24 + 0x1350) = uVar1 - uVar21;
              *(uint *)(lVar24 + 0x134c) = uVar21;
              *(byte *)(lVar24 + 0x1354) = bVar3;
              goto LAB_00e42240;
            }
            pbVar20 = pbVar20 + 3;
            uVar21 = uVar1;
          } while (pbVar20 < puVar17 + *(uint *)(lVar24 + 0x1348));
          goto LAB_00e4223c;
        }
        uVar9 = (uint)*(byte *)(lVar24 + 0x1354);
      }
      else if (*(char *)(lVar24 + 0x1338) == '\0') {
        uVar9 = (uint)(byte)puVar17[param_3];
      }
      else {
LAB_00e4223c:
        uVar9 = 0;
      }
    }
LAB_00e42240:
    if (uVar25 <= uVar9) {
      uVar9 = uVar25 - 1;
    }
    lVar12 = lVar24 + (ulong)(byte)uVar9 * 8;
    lVar18 = *(long *)(lVar12 + 0xb38);
    lVar26 = *(long *)(lVar24 + 0x6d0);
    lStack_b68 = *(long *)(lVar18 + 0x48);
    local_b70 = *(long *)(lVar18 + 0x40);
    local_b58 = *(long *)(lVar18 + 0x58);
    local_b60 = *(long *)(lVar18 + 0x50);
    lVar18 = *(long *)(lVar18 + 0x68);
    lVar12 = *(long *)(lVar12 + 0xb38);
    local_bb8 = *(long *)(lVar12 + 0x70);
    local_bc0 = *(long *)(lVar12 + 0x78);
    if (lVar26 != lVar18) {
      uVar10 = FT_MulDiv(*(undefined8 *)(param_1 + 0x138),lVar26,lVar18);
      *(undefined8 *)(param_1 + 0x138) = uVar10;
      uVar10 = FT_MulDiv(*(undefined8 *)(param_1 + 0x140),lVar26,lVar18);
      *(undefined8 *)(param_1 + 0x140) = uVar10;
      bVar7 = true;
      goto LAB_00e422b8;
    }
  }
  bVar7 = false;
LAB_00e422b8:
  uVar19 = (long)(int)param_4 & 1;
  puVar13 = (undefined4 *)(param_1 + 200);
  *puVar13 = 0;
  uVar25 = (param_4 >> 1 ^ 0xffffffff) & 1;
  *(char *)(param_1 + 0x130) = (char)uVar25;
  *(byte *)(param_1 + 0x131) = (byte)uVar19 ^ 1;
  *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
  (*(code *)*puVar27)(&local_658,lVar22,param_2,param_1,uVar25,param_4 >> 0x10 & 0xf,FUN_00e4281c,
                      FUN_00e42890);
  if ((param_4 >> 8 & 1) != 0) {
    local_1bf = 1;
  }
  local_5d6 = (byte)((ulong)(long)(int)param_4 >> 10) & 1;
  puVar14 = *(undefined8 **)(*(long *)(lVar22 + 0xf0) + 0x68);
  if (puVar14 == (undefined8 *)0x0) {
    uVar9 = FUN_00e428e8(*(long *)(lVar22 + 0x490) + 0x538,param_3,&local_b78,&local_b80);
  }
  else {
    uVar9 = (**(code **)*puVar14)(puVar14[1],param_3,&local_b48);
    local_b78 = CONCAT62(uStack_b46,local_b48);
    local_b80 = (long)local_b40;
  }
  if (uVar9 != 0) {
    return uVar9;
  }
  uVar9 = (*(code *)puVar27[1])(&local_658,param_2,param_3);
  if (uVar9 != 0) {
    return uVar9;
  }
  (**(code **)(lVar23 + 0x30))(&local_b48,&local_658,0);
  lVar23 = local_b80;
  uVar9 = (*(code *)puVar27[2])(&local_b48,local_b78,local_b80);
  if ((uVar9 & 0xff) == 0xa4) {
    *(undefined1 *)(param_1 + 0x130) = 0;
    uVar9 = (*(code *)puVar27[2])(&local_b48,local_b78,lVar23);
    uVar25 = 0;
    bVar7 = true;
    plVar15 = *(long **)(*(long *)(lVar22 + 0xf0) + 0x68);
    uVar16 = local_ba0;
    local_ba0 = local_b78;
  }
  else {
    plVar15 = *(long **)(*(long *)(lVar22 + 0xf0) + 0x68);
    uVar16 = local_ba0;
    local_ba0 = local_b78;
  }
  local_b78 = local_ba0;
  if (plVar15 == (long *)0x0) {
    if (*(long *)(*(long *)(lVar22 + 0x490) + 0x570) == 0) {
      FUN_00e1d86c(*(undefined8 *)(*(long *)(lVar22 + 0x490) + 0x538),&local_b78);
      local_ba0 = uVar16;
      uVar16 = local_ba0;
    }
  }
  else {
    uVar16 = (ulong)local_b98 >> 0x20;
    local_b98 = CONCAT44((int)uVar16,(int)lVar23);
    (**(code **)(*plVar15 + 8))(plVar15[1],&local_ba0);
    uVar16 = local_ba0;
  }
  local_ba0 = uVar16;
  if (uVar9 != 0) {
    return uVar9;
  }
  if (*(long *)(*(long *)(lVar22 + 0xf0) + 0x68) == 0) {
    if (*(long *)(lVar24 + 0x568) != 0) {
      *(long *)(param_1 + 0x100) =
           *(long *)(lVar24 + 0x570) + *(long *)(*(long *)(lVar24 + 0x568) + (ulong)param_3 * 8) +
           -1;
      *(long *)(param_1 + 0x108) = lVar23;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  (*local_5b8)(&local_658);
  plVar15 = *(long **)(*(long *)(lVar22 + 0xf0) + 0x68);
  if ((plVar15 != (long *)0x0) && (*(code **)(*plVar15 + 0x10) != (code *)0x0)) {
    local_ba0 = local_618;
    local_b98 = 0;
    lStack_b88 = lStack_600;
    local_b90 = local_608;
    uVar9 = (**(code **)(*plVar15 + 0x10))(plVar15[1],param_3,0,&local_ba0);
    local_618 = local_ba0;
    lStack_600 = lStack_b88;
    local_608 = local_b90;
    if (uVar9 != 0) {
      return uVar9;
    }
  }
  if ((param_4 >> 10 & 1) == 0) {
    if (*(short *)(lVar22 + 0x1b6) != 0) {
      local_ba0 = local_ba0 & 0xffffffffffff0000;
      local_b78 = local_b78 & 0xffffffffffff0000;
      (**(code **)(*(long *)(lVar22 + 0x370) + 0x118))(lVar22,0,param_3,&local_ba0,&local_b78);
      local_1d0 = local_b78 & 0xffff;
      *(long *)(param_1 + 0x40) = (long)(short)local_ba0;
    }
    *(ulong *)(param_1 + 0x50) = local_1d0;
    *(ulong *)(param_1 + 0x70) = local_1d0;
    *(undefined1 *)(*(long *)(param_1 + 0x128) + 0xc) = 0;
    if ((*(char *)(lVar22 + 0x1f0) == '\0') || (*(short *)(lVar22 + 0x21e) == 0)) {
      if (*(short *)(lVar22 + 0x268) == -1) {
        sVar4 = *(short *)(lVar22 + 0x198);
        sVar5 = *(short *)(lVar22 + 0x19a);
      }
      else {
        sVar4 = *(short *)(lVar22 + 0x2c2);
        sVar5 = *(short *)(lVar22 + 0x2c4);
      }
      bVar6 = false;
      uVar16 = (long)sVar4 - (long)sVar5;
      *(ulong *)(param_1 + 0x68) = uVar16;
    }
    else {
      local_ba0 = local_ba0 & 0xffffffffffff0000;
      local_b78 = local_b78 & 0xffffffffffff0000;
      bVar6 = true;
      (**(code **)(*(long *)(lVar22 + 0x370) + 0x118))(lVar22,1,param_3,&local_ba0,&local_b78);
      *(long *)(param_1 + 0x60) = (long)(short)local_ba0;
      uVar16 = local_b78 & 0xffff;
      *(ulong *)(param_1 + 0x68) = uVar16;
    }
    *(ulong *)(param_1 + 0x78) = uVar16;
    *(undefined4 *)(param_1 + 0x90) = 0x6f75746c;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if ((param_2 == (long *)0x0) || (0x17 < *(ushort *)((long)param_2 + 0x1a))) {
      *(undefined4 *)(param_1 + 0xe8) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0xe8) = 0x100;
      *(undefined4 *)(param_1 + 0xe8) = 0x104;
    }
    if ((((local_b70 != 0x10000) || (local_b58 != 0x10000)) || (lStack_b68 != 0)) ||
       (local_b60 != 0)) {
      FT_Outline_Transform(puVar13,&local_b70);
      uVar10 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),local_b70);
      *(undefined8 *)(param_1 + 0x50) = uVar10;
      uVar10 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),local_b58);
      *(undefined8 *)(param_1 + 0x68) = uVar10;
    }
    if (local_bc0 != 0 || local_bb8 != 0) {
      FT_Outline_Translate(puVar13,local_bb8,local_bc0);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + local_bb8;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + local_bc0;
    }
    if ((uVar19 == 0) || (bVar7)) {
      puVar27 = *(undefined8 **)(param_1 + 0xd0);
      uVar10 = *(undefined8 *)(param_1 + 0x138);
      uVar2 = *(undefined8 *)(param_1 + 0x140);
      if (((uVar25 == 0) || (local_5d0 == 0)) &&
         (iVar8 = (int)*(short *)(param_1 + 0xca), 0 < *(short *)(param_1 + 0xca))) {
        do {
          uVar11 = FT_MulFix(*puVar27,uVar10);
          *puVar27 = uVar11;
          uVar11 = FT_MulFix(puVar27[1],uVar2);
          iVar8 = iVar8 + -1;
          puVar27[1] = uVar11;
          puVar27 = puVar27 + 2;
        } while (0 < iVar8);
      }
      uVar10 = FT_MulFix(*(undefined8 *)(param_1 + 0x50),uVar10);
      *(undefined8 *)(param_1 + 0x50) = uVar10;
      uVar10 = FT_MulFix(*(undefined8 *)(param_1 + 0x68),uVar2);
      *(undefined8 *)(param_1 + 0x68) = uVar10;
    }
    FT_Outline_Get_CBox(puVar13,&local_ba0);
    *(ulong *)(param_1 + 0x30) = local_b90 - local_ba0;
    *(long *)(param_1 + 0x38) = lStack_b88 - local_b98;
    *(ulong *)(param_1 + 0x40) = local_ba0;
    *(long *)(param_1 + 0x48) = lStack_b88;
    if (bVar6) {
      lVar22 = *(long *)(param_1 + 0x50);
      if (lVar22 < 0) {
        lVar22 = lVar22 + 1;
      }
      *(ulong *)(param_1 + 0x58) = local_ba0 - (lVar22 >> 1);
    }
    else if ((param_4 >> 4 & 1) != 0) {
      FUN_00e16d8c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x68));
    }
    return 0;
  }
  lVar22 = *(long *)(param_1 + 0x128);
  *(ulong *)(param_1 + 0x40) = local_618;
  *(ulong *)(param_1 + 0x50) = local_1d0;
  *(undefined1 *)(lVar22 + 0xc) = 1;
  *(long *)(lVar22 + 0x30) = local_bb8;
  *(long *)(lVar22 + 0x18) = lStack_b68;
  *(long *)(lVar22 + 0x10) = local_b70;
  *(long *)(lVar22 + 0x28) = local_b58;
  *(long *)(lVar22 + 0x20) = local_b60;
  *(long *)(lVar22 + 0x38) = local_bc0;
  return 0;
}

