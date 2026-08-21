
/* v8::internal::Map::TryReplayPropertyTransitions(v8::internal::Isolate*, v8::internal::Map) */

ulong __thiscall
v8::internal::Map::TryReplayPropertyTransitions(Map *this,long param_1,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long local_90 [3];
  ulong local_78;
  int local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar16 = *(ulong *)this;
  uVar11 = (ulong)(*(uint *)(uVar16 + 0xb) >> 10) & 0x3ff;
  uVar14 = (ulong)(*(uint *)(param_3 + 0xb) >> 10) & 0x3ff;
  uVar13 = (uint)uVar14;
  uVar12 = uVar16;
  if ((uint)uVar11 != uVar13) {
    uVar15 = param_3 & 0xffffffff00000000;
    uVar17 = uVar15 | *(uint *)(param_3 + 0x17);
    lVar18 = uVar14 - uVar11;
    lVar19 = uVar11 * 0xc00000000 + 0x1000000000;
    do {
      uVar11 = lVar19 >> 0x20;
      uVar2 = *(uint *)((uVar11 | 3) + uVar17);
      local_90[1] = 0;
      local_78 = (ulong)*(uint *)(uVar16 + 0x23) + param_1;
      iVar8 = 1;
      local_90[0] = param_1;
      local_90[2] = uVar16;
      if (((local_78 & 1) != 0) && ((int)local_78 != 3)) {
        uVar12 = local_78 & 3;
        iVar8 = (int)uVar12;
        if (uVar12 != 3) {
          if (uVar12 != 1) goto LAB_010eb938;
          uVar12 = local_78 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar12 + *(uint *)(local_78 - 1)) == 0x98) {
            iVar8 = 4;
          }
          else {
            iVar8 = (uint)(*(short *)(uVar12 + *(uint *)(local_78 - 1)) != 100) << 1;
          }
        }
      }
      local_70 = iVar8;
      uVar1 = (int)uVar2 >> 1;
      uVar16 = TransitionsAccessor::SearchTransition
                         ((TransitionsAccessor *)local_90,uVar15 | *(uint *)((uVar17 - 1) + uVar11),
                          uVar2 >> 1 & 1,uVar1 >> 3 & 7);
      uVar12 = uVar16;
      if ((int)uVar16 == 0) {
LAB_010eb8f8:
        if (*(long *)(lVar6 + 0x28) == local_68) {
          return 0;
        }
        goto LAB_010eb944;
      }
      uVar14 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0x17);
      uVar3 = *(uint *)(uVar14 + (uVar11 | 3));
      if (((uVar2 >> 3 & 1) == 0) && ((uVar3 >> 3 & 1) != 0)) goto LAB_010eb8f8;
      uVar4 = uVar1 >> 6 & 7;
      uVar5 = uVar3 >> 7 & 7;
      bVar7 = (uVar1 >> 6 & 7) == 0;
      if (uVar5 != 3) {
        bVar7 = uVar4 < uVar5;
      }
      if ((uVar5 != uVar4) && (!bVar7)) goto LAB_010eb8f8;
      if ((uVar3 >> 2 & 1) == 0) {
        if ((uVar3 >> 1 & 1) != 0) {
LAB_010eb938:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar2 = *(uint *)(uVar14 + uVar11 + 7);
        uVar12 = (ulong)uVar2;
        if (uVar2 == 3) {
          uVar9 = FieldType::None();
        }
        else {
          if ((~uVar2 & 3) == 0) {
            uVar12 = uVar12 & 0xfffffffffffffffd;
          }
          uVar9 = FieldType::cast(uVar16 & 0xffffffff00000000 | uVar12);
        }
        uVar12 = FieldType::None();
        if ((uVar5 != 3) || ((int)uVar9 != (int)uVar12)) {
          uVar2 = *(uint *)(uVar11 + 7 + uVar17);
          uVar12 = (ulong)uVar2;
          if (uVar2 == 3) {
            lVar10 = FieldType::None();
          }
          else {
            if ((~uVar2 & 3) == 0) {
              uVar12 = uVar12 & 0xfffffffffffffffd;
            }
            lVar10 = FieldType::cast(uVar15 | uVar12);
          }
          local_90[0] = lVar10;
          uVar12 = FieldType::None();
          if (((uVar4 != 3) || ((int)lVar10 != (int)uVar12)) &&
             (uVar12 = FieldType::NowIs((FieldType *)local_90,uVar9), (uVar12 & 1) != 0))
          goto LAB_010eb744;
        }
        goto LAB_010eb8f8;
      }
      if (((uVar2 >> 2 & 1) == 0) ||
         (*(int *)(uVar11 + 7 + uVar17) != *(int *)(uVar14 + uVar11 + 7))) goto LAB_010eb8f8;
LAB_010eb744:
      lVar18 = lVar18 + -1;
      lVar19 = lVar19 + 0xc00000000;
      uVar12 = uVar16;
    } while (lVar18 != 0);
  }
  if ((*(uint *)(uVar12 + 0xb) >> 10 & 0x3ff) != uVar13) {
    uVar12 = 0;
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar12;
  }
LAB_010eb944:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

