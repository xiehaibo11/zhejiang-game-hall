
uint FUN_00e5948c(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ushort uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ushort uVar13;
  ushort uVar14;
  uint local_a4;
  long local_a0;
  ushort local_98;
  long local_90;
  long local_88 [2];
  ulong local_78;
  ulong local_70;
  uint local_64;
  
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  local_90 = FUN_00e1d4a0(param_2);
  local_a0 = FUN_00e1c3a4(param_2,&local_a4);
  if (local_a4 != 0) {
    return local_a4;
  }
  local_a4 = FUN_00e1dd74(param_2,&DAT_019780ec,&local_a0);
  lVar6 = local_90;
  if (local_a4 != 0) {
    return local_a4;
  }
  lVar7 = 0x4f54544f;
  uVar13 = local_98;
  if (local_a0 == 0x4f54544f) {
LAB_00e59514:
    local_a4 = 0;
    *(ushort *)(param_1 + 0x120) = uVar13;
    *(long *)(param_1 + 0x118) = lVar7;
    uVar12 = FUN_00e13bcc(uVar12,0x20,0,uVar13,0,&local_a4);
    *(undefined8 *)(param_1 + 0x128) = uVar12;
    if (((local_a4 == 0) && (local_a4 = FUN_00e1bb5c(param_2,local_90 + 0xc), local_a4 == 0)) &&
       (local_a4 = FUN_00e1d718(param_2,(ulong)local_98 << 4), local_a4 == 0)) {
      local_a4 = 0;
      if (local_98 == 0) {
        uVar13 = 0;
      }
      else {
        uVar14 = 0;
        uVar13 = 0;
        do {
          lVar6 = FUN_00e1da20(param_2);
          lVar7 = FUN_00e1da20(param_2);
          uVar8 = FUN_00e1da20(param_2);
          uVar9 = FUN_00e1da20(param_2);
          uVar11 = *(ulong *)(param_2 + 8) - uVar8;
          if (uVar8 <= *(ulong *)(param_2 + 8)) {
            if (uVar11 < uVar9) {
              if ((lVar6 != 0x766d7478) && (lVar6 != 0x686d7478)) goto LAB_00e5963c;
              uVar9 = uVar11 & 0xfffffffc;
            }
            if (uVar13 != 0) {
              uVar10 = 0;
              do {
                if (*(long *)(*(long *)(param_1 + 0x128) + (ulong)uVar10 * 0x20) == lVar6)
                goto LAB_00e5963c;
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar13);
            }
            uVar11 = (ulong)uVar13;
            uVar13 = uVar13 + 1;
            plVar1 = (long *)(*(long *)(param_1 + 0x128) + uVar11 * 0x20);
            *plVar1 = lVar6;
            plVar1[1] = lVar7;
            plVar1[2] = uVar8;
            plVar1[3] = uVar9;
          }
LAB_00e5963c:
          uVar14 = uVar14 + 1;
        } while (uVar14 < local_98);
      }
      *(ushort *)(param_1 + 0x120) = uVar13;
      FUN_00e1d90c(param_2);
    }
  }
  else {
    iVar5 = FUN_00e1bb5c(param_2,local_90 + 0xc);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (local_98 != 0) {
      uVar11 = 0;
      bVar2 = false;
      uVar13 = 0;
      lVar6 = lVar6 + 0x1c;
      bVar4 = false;
      bVar3 = false;
      local_64 = 0;
      do {
        local_64 = FUN_00e1dd74(param_2,&DAT_01978104,local_88);
        if (local_64 != 0) {
          local_98 = (short)uVar11 - 1;
          break;
        }
        if ((local_78 <= *(ulong *)(param_2 + 8)) &&
           (((local_70 <= *(ulong *)(param_2 + 8) - local_78 || (local_88[0] == 0x766d7478)) ||
            (local_88[0] == 0x686d7478)))) {
          uVar13 = uVar13 + 1;
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
            local_64 = FUN_00e1bb5c(param_2,local_78 + 0xc);
            if (local_64 != 0) {
              return local_64;
            }
            FUN_00e1c3a4(param_2,&local_64);
            if (local_64 != 0) {
              return local_64;
            }
            iVar5 = FUN_00e1bb5c(param_2,lVar6);
            if (iVar5 != 0) {
              return iVar5;
            }
            bVar2 = true;
            local_64 = 0;
          }
        }
        uVar11 = uVar11 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar11 < local_98);
      if (uVar13 != 0) {
        lVar7 = local_a0;
        if ((!bVar2) && ((!bVar3 || (!bVar4)))) {
          return 0x8e;
        }
        goto LAB_00e59514;
      }
    }
    local_a4 = 2;
  }
  return local_a4;
}

