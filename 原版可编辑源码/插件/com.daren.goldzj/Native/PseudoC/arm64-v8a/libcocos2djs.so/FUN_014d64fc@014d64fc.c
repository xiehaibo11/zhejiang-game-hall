
ulong FUN_014d64fc(Factory *param_1,ulong param_2,ulong param_3,int param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
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
  uVar11 = param_2;
LAB_014d6580:
  switch(*(ushort *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_014d65a8_caseD_0;
  case 1:
  case 9:
    local_98 = 0;
    if ((int)uVar11 == 0) goto switchD_014d662c_caseD_1;
    v8::internal::ConsStringIterator::Initialize((ConsStringIterator *)&local_1a0,uVar11,0);
    local_1b0[0] = 0;
    if ((local_98 == 0) ||
       (uVar11 = v8::internal::ConsStringIterator::Continue
                           ((ConsStringIterator *)&local_1a0,(int *)local_1b0),
       uVar17 = local_1b0[0], (int)uVar11 == 0)) goto switchD_014d662c_caseD_1;
    iVar6 = *(int *)(uVar11 + 7);
    uVar4 = local_1b0[0];
    goto LAB_014d6604;
  case 2:
    lVar7 = (**(code **)(**(long **)(uVar11 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + (long)iVar6 * 2);
    goto LAB_014d6664;
  case 3:
  case 0xb:
    iVar6 = iVar6 + (*(int *)(uVar11 + 0xf) >> 1);
    goto switchD_014d65a8_caseD_5;
  default:
    goto switchD_014d65a8_caseD_4;
  case 5:
  case 0xd:
    goto switchD_014d65a8_caseD_5;
  case 8:
    local_80 = (ushort *)(uVar11 + (long)iVar6 + 0xb);
    break;
  case 10:
    lVar7 = (**(code **)(**(long **)(uVar11 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + iVar6);
  }
  local_88 = '\x01';
  puStack_78 = (ushort *)((long)local_80 + (long)iVar5);
  goto LAB_014d66a0;
switchD_014d65a8_caseD_5:
  uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb);
  goto LAB_014d6580;
LAB_014d6604:
  switch(*(ushort *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_014d662c_caseD_0;
  case 1:
  case 9:
    goto switchD_014d662c_caseD_1;
  case 2:
    lVar7 = (**(code **)(**(long **)(uVar11 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + (long)(int)uVar4 * 2);
    goto LAB_014d6970;
  case 3:
  case 0xb:
    uVar4 = uVar4 + (*(int *)(uVar11 + 0xf) >> 1);
    goto switchD_014d662c_caseD_5;
  default:
    goto switchD_014d65a8_caseD_4;
  case 5:
  case 0xd:
    goto switchD_014d662c_caseD_5;
  case 8:
    local_80 = (ushort *)(uVar11 + (long)(int)uVar4 + 0xb);
    break;
  case 10:
    lVar7 = (**(code **)(**(long **)(uVar11 + 0xb) + 0x30))();
    local_80 = (ushort *)(lVar7 + (int)uVar4);
  }
  local_88 = '\x01';
  puStack_78 = (ushort *)((long)local_80 + (long)(int)(iVar6 - uVar17));
  goto switchD_014d662c_caseD_1;
switchD_014d662c_caseD_5:
  uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb);
  goto LAB_014d6604;
switchD_014d65a8_caseD_0:
  local_80 = (ushort *)(uVar11 + (long)iVar6 * 2 + 0xb);
LAB_014d6664:
  local_88 = '\0';
  puStack_78 = local_80 + iVar5;
LAB_014d66a0:
  local_98 = 0;
  goto switchD_014d662c_caseD_1;
LAB_014d6a44:
  do {
    uVar11 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
    if ((uVar11 & 1) == 0) {
      uVar14 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
      goto LAB_014d68d4;
    }
    if (local_80 == puStack_78) {
      v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
      if (local_88 != '\0') goto LAB_014d6a64;
LAB_014d6a88:
      uVar11 = (ulong)*local_80;
      local_80 = local_80 + 1;
    }
    else {
      if (local_88 == '\0') goto LAB_014d6a88;
LAB_014d6a64:
      uVar11 = (ulong)(byte)*local_80;
      local_80 = (ushort *)((long)local_80 + 1);
    }
    uVar4 = (uint)uVar11;
    uVar14 = (ulong)(uVar4 & 0x7f);
    puVar13 = (uint *)(param_5 + uVar14 * 8);
    if (*puVar13 == uVar4) {
      uVar10 = puVar13[1];
      if (uVar10 != 0) {
        local_1b0[0] = uVar10 + uVar4;
      }
LAB_014d6a34:
      iVar6 = 1;
    }
    else {
      local_1a4[0] = true;
      iVar6 = unibrow::ToLowercase::Convert(uVar4,0,local_1b0,local_1a4);
      if (local_1a4[0] == false) {
        if (iVar6 == 0) goto LAB_014d6a34;
      }
      else {
        if (iVar6 != 1) {
          *(ulong *)(param_5 + uVar14 * 8) = uVar11;
          goto LAB_014d6a34;
        }
        *(ulong *)(param_5 + uVar14 * 8) = uVar11 | (ulong)(local_1b0[0] - uVar4) << 0x20;
      }
    }
    uVar17 = iVar6 + uVar17;
  } while ((int)uVar17 < 0xffffff1);
  puVar9 = (undefined8 *)v8::internal::Factory::NewInvalidStringLengthError(param_1);
  uVar14 = v8::internal::Isolate::Throw((Isolate *)param_1,*puVar9,0);
  goto LAB_014d68d4;
switchD_014d65a8_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_014d662c_caseD_0:
  local_80 = (ushort *)(uVar11 + (long)(int)uVar4 * 2 + 0xb);
LAB_014d6970:
  local_88 = '\0';
  puStack_78 = local_80 + (int)(iVar6 - uVar17);
switchD_014d662c_caseD_1:
  if (local_80 == puStack_78) {
    v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
  }
  if (local_88 == '\0') {
    uVar11 = (ulong)*local_80;
    local_80 = local_80 + 1;
  }
  else {
    uVar11 = (ulong)(byte)*local_80;
    local_80 = (ushort *)((long)local_80 + 1);
  }
  uVar14 = param_2;
  if (0 < param_4) {
    bVar2 = false;
    iVar6 = 0;
    lVar7 = param_3 + 0xb;
    uVar14 = param_3 & 0xffffffff00000000 | 7;
    do {
      uVar8 = v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
      if ((uVar8 & 1) == 0) {
        uVar16 = 0;
      }
      else {
        puVar3 = local_80;
        if (local_80 == puStack_78) {
          v8::internal::StringCharacterStream::HasMore((StringCharacterStream *)&local_1a0);
          puVar3 = local_80;
        }
        if (local_88 == '\0') {
          local_80 = puVar3 + 1;
          uVar16 = (ulong)*puVar3;
        }
        else {
          local_80 = (ushort *)((long)puVar3 + 1);
          uVar16 = (ulong)(byte)*puVar3;
        }
      }
      uVar17 = (uint)uVar11;
      uVar15 = (ulong)(uVar17 & 0x7f);
      puVar13 = (uint *)(param_5 + uVar15 * 8);
      if (*puVar13 == uVar17) {
        uVar4 = puVar13[1];
        if (uVar4 == 0) goto LAB_014d6848;
        local_1b0[0] = uVar4 + uVar17;
LAB_014d6818:
        if ((*(byte *)(uVar14 + *(uint *)(param_3 - 1)) >> 3 & 1) == 0) {
          *(short *)(lVar7 + (long)iVar6 * 2) = (short)local_1b0[0];
        }
        else {
          *(char *)(lVar7 + iVar6) = (char)local_1b0[0];
        }
        iVar6 = iVar6 + 1;
LAB_014d6834:
        bVar2 = true;
      }
      else {
        local_1a4[0] = true;
        uVar10 = (uint)uVar16;
        uVar4 = unibrow::ToLowercase::Convert(uVar17,uVar10,local_1b0,local_1a4);
        if (local_1a4[0] == false) {
          if (uVar4 != 0) {
            if (uVar4 == 1) goto LAB_014d6818;
            if (*(int *)(param_2 + 7) != param_4) {
              if (0 < (int)uVar4) {
                uVar11 = (ulong)uVar4;
                puVar12 = (undefined1 *)(lVar7 + iVar6);
                iVar5 = iVar6 << 1;
                puVar13 = local_1b0;
                do {
                  if ((*(byte *)(uVar14 + *(uint *)(param_3 - 1)) >> 3 & 1) == 0) {
                    *(short *)(lVar7 + iVar5) = (short)*puVar13;
                  }
                  else {
                    *puVar12 = (char)*puVar13;
                  }
                  puVar12 = puVar12 + 1;
                  iVar5 = iVar5 + 2;
                  iVar6 = iVar6 + 1;
                  uVar11 = uVar11 - 1;
                  puVar13 = puVar13 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_014d6834;
            }
            if ((uVar8 & 1) == 0) {
              iVar5 = 0;
              goto LAB_014d6a14;
            }
            uVar11 = (ulong)(uVar10 & 0x7f);
            puVar13 = (uint *)(param_5 + uVar11 * 8);
            if (*puVar13 == uVar10) {
              uVar17 = puVar13[1];
              if (uVar17 != 0) {
                local_1b0[0] = uVar17 + uVar10;
              }
LAB_014d6a10:
              iVar5 = 1;
            }
            else {
              local_1a4[0] = true;
              iVar5 = unibrow::ToLowercase::Convert(uVar10,0,local_1b0,local_1a4);
              if (local_1a4[0] == false) {
                if (iVar5 == 0) goto LAB_014d6a10;
              }
              else {
                if (iVar5 != 1) {
                  *(ulong *)(param_5 + uVar11 * 8) = uVar16;
                  goto LAB_014d6a10;
                }
                *(ulong *)(param_5 + uVar11 * 8) = uVar16 | (ulong)(local_1b0[0] - uVar10) << 0x20;
              }
            }
LAB_014d6a14:
            uVar17 = uVar4 + iVar6 + iVar5;
            goto LAB_014d6a44;
          }
        }
        else {
          if (uVar4 == 1) {
            *(ulong *)(param_5 + uVar15 * 8) = uVar11 | (ulong)(local_1b0[0] - uVar17) << 0x20;
            goto LAB_014d6818;
          }
          *(ulong *)(param_5 + uVar15 * 8) = uVar11;
        }
LAB_014d6848:
        if ((*(byte *)(uVar14 + *(uint *)(param_3 - 1)) >> 3 & 1) == 0) {
          *(short *)(lVar7 + (long)iVar6 * 2) = (short)uVar11;
          iVar6 = iVar6 + 1;
        }
        else {
          *(char *)(lVar7 + iVar6) = (char)uVar11;
          iVar6 = iVar6 + 1;
        }
      }
      uVar11 = uVar16;
    } while (iVar6 < param_4);
    uVar14 = param_3;
    if (!bVar2) {
      uVar14 = param_2;
    }
  }
LAB_014d68d4:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}

