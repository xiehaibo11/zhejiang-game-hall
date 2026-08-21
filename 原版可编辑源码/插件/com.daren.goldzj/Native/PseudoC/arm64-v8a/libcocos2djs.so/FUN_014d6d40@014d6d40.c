
ulong FUN_014d6d40(Factory *param_1,ulong param_2,ulong param_3,int param_4,long param_5)

{
  long lVar1;
  ushort *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  bool bVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_1c8;
  uint local_1b0 [3];
  bool local_1a4 [4];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_98;
  char local_88;
  ushort *local_80;
  ushort *puStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  local_88 = '\0';
  local_1b0[0] = 0;
  local_80 = (ushort *)0x0;
  puStack_78 = (ushort *)0x0;
  iVar5 = *(int *)(param_2 + 7);
  iVar6 = 0;
  uVar10 = param_2;
LAB_014d6dc4:
  switch(*(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_014d6dec_caseD_0;
  case 1:
  case 9:
    local_98 = 0;
    if ((int)uVar10 == 0) goto switchD_014d6e70_caseD_1;
    v8::internal::ConsStringIterator::Initialize((ConsStringIterator *)&local_1a0,uVar10,0);
    local_1b0[0] = 0;
    if ((local_98 == 0) ||
       (uVar10 = v8::internal::ConsStringIterator::Continue
                           ((ConsStringIterator *)&local_1a0,(int *)local_1b0),
       uVar17 = local_1b0[0], (int)uVar10 == 0)) goto switchD_014d6e70_caseD_1;
    iVar6 = *(int *)(uVar10 + 7);
    uVar14 = local_1b0[0];
    goto LAB_014d6e48;
  case 2:
    lVar7 = (**(code **)(**(long **)(uVar10 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + (long)iVar6 * 2);
    goto LAB_014d6ea8;
  case 3:
  case 0xb:
    iVar6 = iVar6 + (*(int *)(uVar10 + 0xf) >> 1);
    goto switchD_014d6dec_caseD_5;
  default:
    goto switchD_014d6dec_caseD_4;
  case 5:
  case 0xd:
    goto switchD_014d6dec_caseD_5;
  case 8:
    local_80 = (ushort *)(uVar10 + (long)iVar6 + 0xb);
    break;
  case 10:
    lVar7 = (**(code **)(**(long **)(uVar10 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + iVar6);
  }
  local_88 = '\x01';
  puStack_78 = (ushort *)((long)local_80 + (long)iVar5);
  goto LAB_014d6ee4;
switchD_014d6dec_caseD_5:
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
  goto LAB_014d6dc4;
LAB_014d6e48:
  switch(*(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_014d6e70_caseD_0;
  case 1:
  case 9:
    goto switchD_014d6e70_caseD_1;
  case 2:
    lVar7 = (**(code **)(**(long **)(uVar10 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + (long)(int)uVar14 * 2);
    goto LAB_014d7268;
  case 3:
  case 0xb:
    uVar14 = uVar14 + (*(int *)(uVar10 + 0xf) >> 1);
    goto switchD_014d6e70_caseD_5;
  default:
    goto switchD_014d6dec_caseD_4;
  case 5:
  case 0xd:
    goto switchD_014d6e70_caseD_5;
  case 8:
    local_80 = (ushort *)(uVar10 + (long)(int)uVar14 + 0xb);
    break;
  case 10:
    lVar7 = (**(code **)(**(long **)(uVar10 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + (int)uVar14);
  }
  local_88 = '\x01';
  puStack_78 = (ushort *)((long)local_80 + (long)(int)(iVar6 - uVar17));
  goto switchD_014d6e70_caseD_1;
switchD_014d6e70_caseD_5:
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
  goto LAB_014d6e48;
switchD_014d6dec_caseD_0:
  local_80 = (ushort *)(uVar10 + (long)iVar6 * 2 + 0xb);
LAB_014d6ea8:
  local_88 = '\0';
  puStack_78 = local_80 + iVar5;
LAB_014d6ee4:
  local_98 = 0;
  goto switchD_014d6e70_caseD_1;
LAB_014d72fc:
  do {
    uVar10 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
    if ((uVar10 & 1) == 0) {
      if ((bool)(bVar3 | bVar13 ^ 1U)) {
        local_1c8 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
      }
      else {
        local_1c8 = -(ulong)(-uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar17 << 1;
      }
      goto LAB_014d7164;
    }
    if (local_80 == puStack_78) {
      v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
      if (local_88 != '\0') goto LAB_014d731c;
LAB_014d7340:
      uVar10 = (ulong)*local_80;
      local_80 = local_80 + 1;
    }
    else {
      if (local_88 == '\0') goto LAB_014d7340;
LAB_014d731c:
      uVar10 = (ulong)(byte)*local_80;
      local_80 = (ushort *)((long)local_80 + 1);
    }
    uVar14 = (uint)uVar10;
    uVar15 = (ulong)(uVar14 & 0x7f);
    puVar12 = (uint *)(param_5 + uVar15 * 8);
    bVar13 = (bool)(bVar13 | (uVar14 == 0xff || uVar14 == 0xb5));
    if (*puVar12 == uVar14) {
      uVar4 = puVar12[1];
      if (uVar4 != 0) {
        local_1b0[0] = uVar4 + uVar14;
      }
LAB_014d72ec:
      iVar6 = 1;
    }
    else {
      local_1a4[0] = true;
      iVar6 = unibrow::ToUppercase::Convert(uVar14,0,local_1b0,local_1a4);
      if (local_1a4[0] == false) {
        if (iVar6 == 0) goto LAB_014d72ec;
      }
      else {
        if (iVar6 != 1) {
          *(ulong *)(param_5 + uVar15 * 8) = uVar10;
          goto LAB_014d72ec;
        }
        *(ulong *)(param_5 + uVar15 * 8) = uVar10 | (ulong)(local_1b0[0] - uVar14) << 0x20;
      }
    }
    uVar17 = iVar6 + uVar17;
  } while ((int)uVar17 < 0xffffff1);
  puVar9 = (undefined8 *)v8::internal::Factory::NewInvalidStringLengthError(param_1);
  local_1c8 = v8::internal::Isolate::Throw((Isolate *)param_1,*puVar9,0);
  goto LAB_014d7164;
switchD_014d6dec_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_014d6e70_caseD_0:
  local_80 = (ushort *)(uVar10 + (long)(int)uVar14 * 2 + 0xb);
LAB_014d7268:
  local_88 = '\0';
  puStack_78 = local_80 + (int)(iVar6 - uVar17);
switchD_014d6e70_caseD_1:
  if (local_80 == puStack_78) {
    v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
    if (local_88 != '\0') goto LAB_014d6f00;
LAB_014d6f24:
    uVar10 = (ulong)*local_80;
    local_80 = local_80 + 1;
  }
  else {
    if (local_88 == '\0') goto LAB_014d6f24;
LAB_014d6f00:
    uVar10 = (ulong)(byte)*local_80;
    local_80 = (ushort *)((long)local_80 + 1);
  }
  uVar15 = param_3 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar15 + *(uint *)(param_3 - 1)) < 0x40) &&
     ((*(byte *)(uVar15 + *(uint *)(param_3 - 1)) & 7) == 0)) {
    bVar3 = (*(byte *)(uVar15 + *(uint *)(param_3 - 1)) & 8) == 0;
  }
  else {
    bVar3 = false;
  }
  local_1c8 = param_2;
  if (0 < param_4) {
    bVar13 = false;
    iVar6 = 0;
    lVar7 = param_3 + 0xb;
    do {
      uVar8 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
      if ((uVar8 & 1) == 0) {
        uVar18 = 0;
      }
      else {
        puVar2 = local_80;
        if (local_80 == puStack_78) {
          v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
          puVar2 = local_80;
        }
        if (local_88 == '\0') {
          local_80 = puVar2 + 1;
          uVar18 = (ulong)*puVar2;
        }
        else {
          local_80 = (ushort *)((long)puVar2 + 1);
          uVar18 = (ulong)(byte)*puVar2;
        }
      }
      uVar14 = (uint)uVar10;
      uVar16 = (ulong)(uVar14 & 0x7f);
      puVar12 = (uint *)(param_5 + uVar16 * 8);
      uVar17 = (uint)uVar18;
      if (*puVar12 == uVar14) {
        uVar4 = puVar12[1];
        if (uVar4 != 0) {
          local_1b0[0] = uVar4 + uVar14;
          goto LAB_014d7088;
        }
LAB_014d712c:
        if ((*(byte *)(uVar15 + *(uint *)(param_3 - 1)) >> 3 & 1) == 0) {
          *(short *)(lVar7 + (long)iVar6 * 2) = (short)uVar10;
          iVar6 = iVar6 + 1;
        }
        else {
          *(char *)(lVar7 + iVar6) = (char)uVar10;
          iVar6 = iVar6 + 1;
        }
      }
      else {
        local_1a4[0] = true;
        uVar4 = unibrow::ToUppercase::Convert(uVar14,uVar17,local_1b0,local_1a4);
        uVar19 = (ulong)uVar4;
        if (local_1a4[0] == false) {
          if (uVar4 == 1) goto LAB_014d7088;
          if (uVar4 == 0) goto LAB_014d712c;
LAB_014d70a4:
          if (*(int *)(param_2 + 7) == param_4) {
            bVar13 = uVar14 == 0xff || uVar14 == 0xb5;
            if ((uVar8 & 1) == 0) {
              iVar5 = 0;
              goto LAB_014d72c8;
            }
            uVar10 = (ulong)(uVar17 & 0x7f);
            puVar12 = (uint *)(param_5 + uVar10 * 8);
            if (*puVar12 == uVar17) {
              uVar14 = puVar12[1];
              if (uVar14 != 0) {
                local_1b0[0] = uVar14 + uVar17;
              }
LAB_014d72c4:
              iVar5 = 1;
            }
            else {
              local_1a4[0] = true;
              iVar5 = unibrow::ToUppercase::Convert(uVar17,0,local_1b0,local_1a4);
              if (local_1a4[0] == false) {
                if (iVar5 == 0) goto LAB_014d72c4;
              }
              else {
                if (iVar5 != 1) {
                  *(ulong *)(param_5 + uVar10 * 8) = uVar18;
                  goto LAB_014d72c4;
                }
                *(ulong *)(param_5 + uVar10 * 8) = uVar18 | (ulong)(local_1b0[0] - uVar17) << 0x20;
              }
            }
LAB_014d72c8:
            uVar17 = (int)uVar19 + iVar6 + iVar5;
            goto LAB_014d72fc;
          }
          if (0 < (int)uVar19) {
            puVar11 = (undefined1 *)(lVar7 + iVar6);
            iVar5 = iVar6 << 1;
            puVar12 = local_1b0;
            do {
              if ((*(byte *)(uVar15 + *(uint *)(param_3 - 1)) >> 3 & 1) == 0) {
                *(short *)(lVar7 + iVar5) = (short)*puVar12;
              }
              else {
                *puVar11 = (char)*puVar12;
              }
              puVar11 = puVar11 + 1;
              iVar5 = iVar5 + 2;
              iVar6 = iVar6 + 1;
              uVar19 = uVar19 - 1;
              puVar12 = puVar12 + 1;
            } while (uVar19 != 0);
          }
        }
        else {
          if (uVar4 != 1) {
            *(ulong *)(param_5 + uVar16 * 8) = uVar10;
            goto LAB_014d712c;
          }
          *(ulong *)(param_5 + uVar16 * 8) = uVar10 | (ulong)(local_1b0[0] - uVar14) << 0x20;
LAB_014d7088:
          if ((!bVar3) && ((uVar19 = 1, uVar14 == 0xb5 || (uVar14 == 0xff)))) goto LAB_014d70a4;
          if ((*(byte *)(uVar15 + *(uint *)(param_3 - 1)) >> 3 & 1) == 0) {
            *(short *)(lVar7 + (long)iVar6 * 2) = (short)local_1b0[0];
          }
          else {
            *(char *)(lVar7 + iVar6) = (char)local_1b0[0];
          }
          iVar6 = iVar6 + 1;
        }
        bVar13 = true;
      }
      uVar10 = uVar18;
    } while (iVar6 < param_4);
    local_1c8 = param_3;
    if (!bVar13) {
      local_1c8 = param_2;
    }
  }
LAB_014d7164:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1c8;
}

