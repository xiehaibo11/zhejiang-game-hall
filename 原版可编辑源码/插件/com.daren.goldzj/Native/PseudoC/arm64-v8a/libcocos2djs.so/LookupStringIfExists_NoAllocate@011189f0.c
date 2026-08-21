
/* v8::internal::StringTable::LookupStringIfExists_NoAllocate(v8::internal::Isolate*, unsigned long)
    */

ulong v8::internal::StringTable::LookupStringIfExists_NoAllocate(Isolate *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  ulong local_98;
  undefined **local_90;
  uint local_88;
  int local_84;
  ushort *local_80;
  ulong uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = param_2 & 0xffffffff00000000;
  uVar8 = uVar7 | 7;
  if ((*(ushort *)(uVar8 + *(uint *)(param_2 - 1)) < 0x40) &&
     ((*(ushort *)(uVar8 + *(uint *)(param_2 - 1)) & 7) == 3)) {
    lVar15 = (long)((ulong)*(uint *)(param_2 + 0xf) << 0x20) >> 0x21;
    uVar7 = uVar7 | *(uint *)(param_2 + 0xb);
  }
  else if (((*(ushort *)(uVar8 + *(uint *)(param_2 - 1)) < 0x40) &&
           ((*(ushort *)(uVar8 + *(uint *)(param_2 - 1)) & 7) == 1)) &&
          (((*(ushort *)((uVar7 | *(uint *)(param_2 - 1)) + 7) & 7) != 1 ||
           (*(int *)((uVar7 | *(uint *)(param_2 + 0xf)) + 7) == 0)))) {
    lVar15 = 0;
    uVar7 = uVar7 | *(uint *)(param_2 + 0xb);
  }
  else {
    lVar15 = 0;
    uVar7 = param_2;
  }
  uVar8 = uVar7 & 0xffffffff00000000;
  puVar9 = (uint *)(uVar7 - 1);
  if ((*(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40) &&
     ((*(ushort *)((uVar8 | 7) + (ulong)*puVar9) & 7) == 5)) {
    uVar7 = uVar8 | *(uint *)(uVar7 + 0xb);
    if (*(int *)(param_2 + 7) == *(int *)(uVar7 + 7)) goto LAB_01118ec4;
    puVar9 = (uint *)(uVar7 - 1);
  }
  uVar10 = uVar8 | 7;
  local_98 = param_2;
  if ((*(byte *)(uVar10 + *(uint *)(uVar7 - 1)) >> 3 & 1) == 0) {
    uVar14 = *(ulong *)(param_1 + 0xfd0);
    iVar18 = *(int *)(param_2 + 7);
    uVar12 = *(ulong *)(*(long *)(param_1 + 0x490) + 7);
    uVar17 = (ulong)iVar18;
    if ((*(ushort *)(uVar10 + *puVar9) < 0x40) && ((*(ushort *)(uVar10 + *puVar9) & 7) == 1)) {
      uVar8 = uVar17 * 2;
      if (CARRY8(uVar17,uVar17)) {
        uVar8 = 0xffffffffffffffff;
      }
      puVar4 = operator_new__(uVar8);
      String::WriteToFlat<unsigned_short>(uVar7,puVar4,0,iVar18);
      puVar11 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)(uVar7 + 0xb);
      if ((*(ushort *)((uVar8 | *puVar9) + 7) & 7) == 2) {
        puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))();
      }
      puVar11 = (ushort *)0x0;
      puVar4 = (ushort *)((long)puVar5 + lVar15 * 2);
    }
    local_88 = StringHasher::HashSequentialString<unsigned_short>(puVar4,iVar18,uVar12);
    local_90 = &PTR__StringTableKey_01ca70b0;
    local_70 = 0;
    local_84 = iVar18;
    local_80 = puVar4;
    uStack_78 = uVar17;
    if ((local_88 & 0xc0000002) == 0) {
LAB_01118dac:
      local_70 = 0;
      uVar7 = (ulong)(local_88 >> 2 & 0x1fffffe);
    }
    else if ((local_88 >> 1 & 1) == 0) {
LAB_01118da0:
      local_70 = 0;
      uVar7 = 0xfffffffffffffffc;
    }
    else {
      lVar15 = uVar14 + 7;
      uVar1 = *(uint *)(param_1 + 0xa0);
      uVar13 = *(undefined8 *)(param_1 + 0xa8);
      uVar2 = (*(int *)(uVar14 + 0xf) >> 1) - 1;
      uVar16 = uVar2 & local_88 >> 3;
      uVar6 = *(uint *)(lVar15 + (int)(uVar16 * 4 + 0xc));
      if (uVar6 == uVar1) {
LAB_01118e98:
        uVar7 = 0xfffffffffffffffe;
      }
      else {
        iVar18 = 1;
        if (uVar6 != (uint)uVar13) goto LAB_01118cb8;
        do {
          do {
            uVar16 = uVar16 + iVar18 & uVar2;
            uVar6 = *(uint *)(lVar15 + (int)(uVar16 * 4 + 0xc));
            iVar18 = iVar18 + 1;
            if (uVar6 == uVar1) {
              uVar7 = 0xfffffffffffffffe;
              goto joined_r0x01118db4;
            }
          } while (uVar6 == (uint)uVar13);
LAB_01118cb8:
          uVar7 = uVar14 & 0xffffffff00000000 | (ulong)uVar6;
        } while (((*(uint *)(uVar7 + 3) != local_88) || (*(int *)(uVar7 + 7) != local_84)) ||
                (uVar7 = (*(code *)local_90[3])(&local_90), (uVar7 & 1) == 0));
        uVar7 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(lVar15 + (int)(uVar16 * 4 + 0xc));
        if (FLAG_thin_strings != '\0') {
          String::MakeThin((String *)&local_98,param_1,uVar7);
        }
      }
    }
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0xfd0);
    iVar18 = *(int *)(param_2 + 7);
    uVar14 = *(ulong *)(*(long *)(param_1 + 0x490) + 7);
    uVar12 = (ulong)iVar18;
    if ((*(ushort *)(uVar10 + *puVar9) < 0x40) && ((*(ushort *)(uVar10 + *puVar9) & 7) == 1)) {
      puVar4 = operator_new__(uVar12);
      String::WriteToFlat<unsigned_char>(uVar7,puVar4,0,iVar18);
      puVar11 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)(uVar7 + 0xb);
      if ((*(ushort *)((uVar8 | *puVar9) + 7) & 7) == 2) {
        puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))();
      }
      puVar11 = (ushort *)0x0;
      puVar4 = (ushort *)((long)puVar5 + lVar15);
    }
    local_88 = StringHasher::HashSequentialString<unsigned_char>((uchar *)puVar4,iVar18,uVar14);
    local_90 = &PTR__StringTableKey_01ca7080;
    local_70 = 0;
    local_84 = iVar18;
    local_80 = puVar4;
    uStack_78 = uVar12;
    if ((local_88 & 0xc0000002) == 0) goto LAB_01118dac;
    if ((local_88 >> 1 & 1) == 0) goto LAB_01118da0;
    lVar15 = uVar17 + 7;
    uVar1 = *(uint *)(param_1 + 0xa0);
    uVar13 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = (*(int *)(uVar17 + 0xf) >> 1) - 1;
    uVar16 = uVar2 & local_88 >> 3;
    uVar6 = *(uint *)(lVar15 + (int)(uVar16 * 4 + 0xc));
    if (uVar6 == uVar1) goto LAB_01118e98;
    iVar18 = 1;
    local_90 = &PTR__StringTableKey_01ca7080;
    if (uVar6 != (uint)uVar13) goto LAB_01118e24;
    do {
      do {
        uVar16 = uVar16 + iVar18 & uVar2;
        uVar6 = *(uint *)(lVar15 + (int)(uVar16 * 4 + 0xc));
        iVar18 = iVar18 + 1;
        if (uVar6 == uVar1) goto LAB_01118e98;
      } while (uVar6 == (uint)uVar13);
LAB_01118e24:
      uVar7 = uVar17 & 0xffffffff00000000 | (ulong)uVar6;
    } while (((*(uint *)(uVar7 + 3) != local_88) || (*(int *)(uVar7 + 7) != local_84)) ||
            (uVar7 = (*(code *)local_90[3])(&local_90), (uVar7 & 1) == 0));
    uVar7 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(lVar15 + (int)(uVar16 * 4 + 0xc));
    if (FLAG_thin_strings != '\0') {
      String::MakeThin((String *)&local_98,param_1,uVar7);
    }
  }
joined_r0x01118db4:
  if (puVar11 != (ushort *)0x0) {
    operator_delete__(puVar11);
  }
LAB_01118ec4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

