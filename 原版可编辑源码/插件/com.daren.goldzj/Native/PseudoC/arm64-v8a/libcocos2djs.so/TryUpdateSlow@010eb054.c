
/* v8::internal::Map::TryUpdateSlow(v8::internal::Isolate*, v8::internal::Map) */

void v8::internal::Map::TryUpdateSlow(ulong param_1,ulong param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  char local_c0 [4];
  undefined4 local_bc;
  ulong local_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong local_80;
  int local_78;
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar11 = param_1 | 7;
  uVar7 = param_2;
LAB_010eb0a0:
  do {
    uVar6 = uVar7;
    uVar7 = *(uint *)(uVar6 + 0x13) + param_1;
    if (((uVar7 & 1) == 0) || (*(short *)(uVar11 + *(uint *)(uVar7 - 1)) != 0xa2)) {
      uVar7 = *(ulong *)(param_1 + 0xa0);
      uVar9 = uVar7;
      if ((uVar7 & 1) == 0) goto LAB_010eb0a0;
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0xa0);
    }
  } while ((int)uVar7 != (int)uVar9);
  local_a8 = uVar6;
  local_a0 = param_2;
  if ((*(uint *)(uVar6 + 0xb) >> 0x18 & 1) != 0) {
    uVar11 = uVar6 & 0xffffffff00000000;
    uVar7 = uVar11 | *(uint *)(uVar6 + 0x13);
    if ((*(uint *)(uVar6 + 0x13) & 1) != 0) {
      do {
        if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar7 + 0x13);
        uVar7 = uVar11 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1b);
    if (7 < (*(byte *)(param_2 + 10) ^ *(byte *)(uVar7 + 10))) {
      uVar7 = 0;
    }
    goto LAB_010eb360;
  }
  uVar7 = EquivalentToForTransition((Map *)&local_a0,uVar6);
  if ((uVar7 & 1) != 0) {
    bVar2 = *(byte *)(uVar6 + 10);
    bVar3 = *(byte *)(param_2 + 10);
    if ((*(uint *)(uVar6 + 0xb) >> 0x1b & 1) == (*(uint *)(param_2 + 0xb) & 0x8000000) >> 0x1b) {
      uVar8 = 0;
      cVar10 = '\0';
    }
    else {
      local_c0[0] = '\0';
      local_bc = 0;
      local_b0 = 0;
      uVar7 = *(uint *)(param_2 + 0x13) + param_1;
      if (((uVar7 & 1) == 0) || (*(short *)(uVar11 + *(uint *)(uVar7 - 1)) != 0xa2)) {
        uVar7 = *(ulong *)(param_1 + 0xa0);
      }
      uStack_68 = 0;
      local_58 = *(uint *)(uVar7 + 0x23) + param_1;
      local_b8 = param_2;
      local_60 = uVar7;
      if (((local_58 & 1) == 0) || ((int)local_58 == 3)) {
        local_50 = 1;
      }
      else if ((local_58 & 3) == 1) {
        uVar6 = local_58 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar6 + *(uint *)(local_58 - 1)) == 0x98) {
          local_50 = 4;
        }
        else if (*(short *)(uVar6 + *(uint *)(local_58 - 1)) == 100) {
          local_50 = 0;
        }
        else {
          local_50 = 2;
        }
      }
      else {
        local_70 = param_1;
        if ((local_58 & 3) != 3) goto LAB_010eb424;
        local_50 = 3;
      }
      local_70 = param_1;
      uVar6 = TransitionsAccessor::HasIntegrityLevelTransitionTo
                        ((TransitionsAccessor *)&local_70,param_2,&local_b0,(ulong)local_c0 | 4);
      uVar8 = local_b0;
      while (local_b0 = uVar8, (uVar6 & 1) != 0) {
        if ((*(uint *)(uVar7 + 0xb) >> 0x1b & 1) != 0) {
          if (((*(uint *)(uVar7 + 0xb) ^ *(uint *)(param_2 + 0xb)) & 0xffc00) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "map.NumberOfOwnDescriptors() == source_map.NumberOfOwnDescriptors()");
          }
          param_2 = uVar7;
          cVar10 = '\x01';
          goto LAB_010eb2dc;
        }
        uVar9 = *(uint *)(uVar7 + 0x13) + param_1;
        if (((uVar9 & 1) == 0) || (*(short *)(uVar11 + *(uint *)(uVar9 - 1)) != 0xa2)) {
          uVar9 = *(ulong *)(param_1 + 0xa0);
        }
        uStack_90 = 0;
        local_80 = *(uint *)(uVar9 + 0x23) + param_1;
        iVar5 = 1;
        local_98 = param_1;
        local_88 = uVar9;
        if (((local_80 & 1) != 0) && ((int)local_80 != 3)) {
          uVar6 = local_80 & 3;
          iVar5 = (int)uVar6;
          if (uVar6 != 3) {
            if (uVar6 != 1) goto LAB_010eb424;
            uVar6 = local_80 & 0xffffffff00000000 | 7;
            if (*(short *)(uVar6 + *(uint *)(local_80 - 1)) == 0x98) {
              iVar5 = 4;
            }
            else {
              iVar5 = (uint)(*(short *)(uVar6 + *(uint *)(local_80 - 1)) != 100) << 1;
            }
          }
        }
        local_78 = iVar5;
        uVar6 = TransitionsAccessor::HasIntegrityLevelTransitionTo
                          ((TransitionsAccessor *)&local_98,uVar7,0,0);
        uVar7 = uVar9;
        uVar8 = local_b0;
      }
      param_2 = local_b8;
      cVar10 = local_c0[0];
      if (local_c0[0] == '\0') goto LAB_010eb35c;
LAB_010eb2dc:
      bVar3 = *(byte *)(param_2 + 10);
    }
    if (((bVar2 >> 3 == bVar3 >> 3) ||
        (local_a8 = LookupElementsTransitionMap((Map *)&local_a8,param_1), (int)local_a8 != 0)) &&
       (uVar7 = TryReplayPropertyTransitions((Map *)&local_a8,param_1,param_2), (int)uVar7 != 0)) {
      if (cVar10 != '\0') {
        uStack_68 = 0;
        local_58 = *(uint *)(uVar7 + 0x23) + param_1;
        local_60 = uVar7;
        if (((local_58 & 1) == 0) || ((int)local_58 == 3)) {
          local_50 = 1;
        }
        else if ((local_58 & 3) == 1) {
          uVar7 = local_58 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar7 + *(uint *)(local_58 - 1)) == 0x98) {
            local_50 = 4;
          }
          else if (*(short *)(uVar7 + *(uint *)(local_58 - 1)) == 100) {
            local_50 = 0;
          }
          else {
            local_50 = 2;
          }
        }
        else {
          local_70 = param_1;
          if ((local_58 & 3) != 3) {
LAB_010eb424:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          local_50 = 3;
        }
        local_70 = param_1;
        uVar7 = TransitionsAccessor::SearchSpecial((TransitionsAccessor *)&local_70,uVar8);
      }
      goto LAB_010eb360;
    }
  }
LAB_010eb35c:
  uVar7 = 0;
LAB_010eb360:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

