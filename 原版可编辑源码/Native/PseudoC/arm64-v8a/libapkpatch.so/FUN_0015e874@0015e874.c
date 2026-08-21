
void FUN_0015e874(ulong *param_1,uint param_2,uint param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint local_98;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
LAB_0015e8f0:
      uVar11 = 3;
      goto LAB_0015ec78;
    }
    if ((~param_2 & 0xc) == 0) {
      uVar11 = 2;
      goto LAB_0015ec78;
    }
  }
  else if ((param_2 & 0xe) != 0) goto LAB_0015e8f0;
  puVar4 = (undefined1 *)FUN_00161660(param_5);
  if (puVar4 != (undefined1 *)0x0) {
    param_1[2] = (ulong)puVar4;
    lVar5 = FUN_001616ec(param_5);
    uVar6 = FUN_00161694(param_5);
    local_78 = puVar4 + 1;
    uVar7 = FUN_0015efc0(&local_78,*puVar4);
    uVar14 = uVar6;
    if (uVar7 != 0) {
      uVar14 = uVar7;
    }
    pbVar16 = local_78 + 1;
    uVar7 = (ulong)*local_78;
    if (uVar7 == 0xff) {
      pbVar19 = (byte *)0x0;
    }
    else {
      uVar15 = 0;
      uVar12 = 0;
      pbVar19 = pbVar16;
      do {
        pbVar16 = pbVar19 + 1;
        bVar1 = *pbVar19;
        uVar12 = ((ulong)bVar1 & 0x7f) << (uVar15 & 0x3f) | uVar12;
        uVar15 = uVar15 + 7;
        pbVar19 = pbVar16;
      } while ((char)bVar1 < '\0');
      pbVar19 = pbVar16 + uVar12;
    }
    bVar1 = *pbVar16;
    uVar15 = 0;
    uVar12 = 0;
    uVar6 = lVar5 + ~uVar6;
    pbVar16 = pbVar16 + 1;
    do {
      pbVar17 = pbVar16 + 1;
      bVar2 = *pbVar16;
      uVar12 = ((ulong)bVar2 & 0x7f) << (uVar15 & 0x3f) | uVar12;
      uVar15 = uVar15 + 7;
      pbVar16 = pbVar17;
    } while ((char)bVar2 < '\0');
    local_80 = pbVar17;
    local_78 = pbVar17;
    do {
      if (pbVar17 + (uVar12 & 0xffffffff) <= local_80) break;
      uVar8 = FUN_0015efc0(&local_80,bVar1);
      lVar5 = FUN_0015efc0(&local_80,bVar1);
      lVar9 = FUN_0015efc0(&local_80,bVar1);
      uVar15 = 0;
      uVar13 = 0;
      pbVar16 = local_80;
      do {
        local_80 = pbVar16 + 1;
        bVar2 = *pbVar16;
        uVar13 = ((ulong)bVar2 & 0x7f) << (uVar15 & 0x3f) | uVar13;
        uVar15 = uVar15 + 7;
        pbVar16 = local_80;
      } while ((char)bVar2 < '\0');
      if ((uVar8 <= uVar6) && (uVar6 < lVar5 + uVar8)) {
        if (lVar9 == 0) goto LAB_0015ec74;
        uVar14 = lVar9 + uVar14;
        if (uVar13 != 0) {
          uVar6 = uVar7 & 0xf;
          pbVar17 = pbVar17 + uVar13 + (uVar12 & 0xffffffff) + -1;
          local_98 = 0x1c1dU >> uVar6 & 1;
          goto LAB_0015ea94;
        }
        if ((param_2 & 6) != 2) goto LAB_0015ec74;
        *param_1 = 0;
        param_1[3] = uVar14;
        uVar11 = 6;
        goto LAB_0015ec78;
      }
    } while (uVar8 <= uVar6);
LAB_0015ed30:
    __cxa_begin_catch(param_4);
    if ((param_3 & 1) != 0) {
      FUN_00149158(*(undefined8 *)(param_4 + -0x38));
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
LAB_0015ec74:
  uVar11 = 8;
LAB_0015ec78:
  *(undefined4 *)(param_1 + 5) = uVar11;
LAB_0015ec7c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0015ea94:
  uVar15 = 0;
  uVar12 = 0;
  pbVar16 = pbVar17;
  do {
    pbVar18 = pbVar16 + 1;
    bVar1 = *pbVar16;
    uVar12 = ((ulong)bVar1 & 0x7f) << (uVar15 & 0x3f) | uVar12;
    uVar15 = uVar15 + 7;
    pbVar16 = pbVar18;
  } while ((char)bVar1 < '\0');
  uVar8 = -1L << (uVar15 & 0x3f);
  if ((uVar15 < 0x40 & bVar1 >> 6) == 0) {
    uVar8 = 0;
  }
  uVar12 = uVar12 | uVar8;
  if ((long)uVar12 < 1) {
    if ((long)uVar12 < 0) {
      if ((param_3 & 1) == 0) {
        if ((param_2 & 5) != 0) goto LAB_0015ecb0;
        if ((param_2 >> 3 & 1) == 0) {
          __cxa_begin_catch(param_4);
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
      }
      else {
        lVar5 = FUN_00148898(param_4);
        uVar15 = param_4 + 0x20;
        if (lVar5 == 0x434c4e47432b2b01) {
          uVar15 = *(ulong *)(param_4 + -0x58);
        }
        if ((uVar15 == 0) || (*(long *)(param_4 + -0x50) == 0)) {
LAB_0015ed5c:
          __cxa_begin_catch(param_4);
          FUN_00149158(*(undefined8 *)(param_4 + -0x38));
          goto LAB_0015ed30;
        }
        uVar8 = FUN_0015f134(uVar12,pbVar19,uVar7,*(long *)(param_4 + -0x50),uVar15,param_4);
        if ((uVar8 & 1) != 0) {
          if ((param_2 & 1) != 0) {
            *param_1 = uVar12;
            param_1[1] = (ulong)pbVar17;
            param_1[3] = uVar14;
            param_1[4] = uVar15;
            uVar11 = 6;
            goto LAB_0015ec78;
          }
LAB_0015ebfc:
          if ((param_2 >> 3 & 1) == 0) goto LAB_0015ed5c;
        }
      }
    }
    else if ((param_2 & 6) == 2) {
      *param_1 = 0;
LAB_0015ecbc:
      param_1[1] = (ulong)pbVar17;
      param_1[3] = uVar14;
      lVar5 = FUN_00148898(param_4);
      uVar14 = param_4 + 0x20;
      if (lVar5 == 0x434c4e47432b2b01) {
        uVar14 = *(ulong *)(param_4 + -0x58);
      }
      param_1[4] = uVar14;
      uVar11 = 6;
      goto LAB_0015ec78;
    }
  }
  else {
    if (((pbVar19 == (byte *)0x0) || (0xc < (uint)uVar6)) || (local_98 == 0)) {
      FUN_0015ed84(param_3 & 1,param_4);
      goto LAB_0015ed5c;
    }
    local_70 = pbVar19 + *(long *)(&DAT_00120570 + uVar6 * 8) * uVar12;
    plVar10 = (long *)FUN_0015efc0(&local_70,uVar7);
    if (plVar10 == (long *)0x0) {
      if ((param_2 & 5) != 0) {
LAB_0015ecb0:
        *param_1 = uVar12;
        goto LAB_0015ecbc;
      }
      if ((param_2 >> 3 & 1) == 0) goto LAB_0015ed30;
    }
    else if ((param_3 & 1) != 0) {
      lVar5 = FUN_00148898(param_4);
      local_70 = (byte *)(param_4 + 0x20);
      if (lVar5 == 0x434c4e47432b2b01) {
        local_70 = *(byte **)(param_4 + -0x58);
      }
      if ((local_70 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_0015ed5c;
      uVar15 = (**(code **)(*plVar10 + 0x20))(plVar10,*(long *)(param_4 + -0x50),&local_70);
      if ((uVar15 & 1) != 0) {
        if ((param_2 & 1) == 0) goto LAB_0015ebfc;
        *param_1 = uVar12;
        param_1[1] = (ulong)pbVar17;
        *(undefined4 *)(param_1 + 5) = 6;
        param_1[3] = uVar14;
        param_1[4] = (ulong)local_70;
        goto LAB_0015ec7c;
      }
    }
  }
  uVar15 = 0;
  uVar12 = 0;
  do {
    bVar1 = *pbVar16;
    uVar12 = ((ulong)bVar1 & 0x7f) << (uVar15 & 0x3f) | uVar12;
    uVar15 = uVar15 + 7;
    pbVar16 = pbVar16 + 1;
  } while ((char)bVar1 < '\0');
  uVar8 = -1L << (uVar15 & 0x3f);
  if ((uVar15 < 0x40 & bVar1 >> 6) == 0) {
    uVar8 = 0;
  }
  if ((uVar12 | uVar8) == 0) goto LAB_0015ec74;
  pbVar17 = pbVar18 + (uVar12 | uVar8);
  goto LAB_0015ea94;
}

