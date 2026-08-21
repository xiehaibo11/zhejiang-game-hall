
/* v8::internal::MapUpdater::FindSplitMap(v8::internal::Handle<v8::internal::DescriptorArray>) */

void __thiscall v8::internal::MapUpdater::FindSplitMap(MapUpdater *this,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_90 [3];
  ulong local_78;
  int local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar11 = **(ulong **)(this + 0x18);
  uVar9 = (ulong)(*(uint *)(uVar11 + 0xb) >> 10) & 0x3ff;
  if (uVar9 != (long)*(int *)(this + 0x30)) {
    lVar13 = uVar9 * 0xc00000000 + 0x1000000000;
    lVar14 = (long)*(int *)(this + 0x30) - uVar9;
    while( true ) {
      uVar9 = *param_2;
      uVar12 = lVar13 >> 0x20;
      uVar2 = *(uint *)(uVar9 + (uVar12 | 3));
      local_90[0] = *(long *)this;
      local_90[1] = 0;
      local_78 = (ulong)*(uint *)(uVar11 + 0x23) + local_90[0];
      iVar5 = 1;
      local_90[2] = uVar11;
      if (((local_78 & 1) != 0) && ((int)local_78 != 3)) {
        uVar10 = local_78 & 3;
        iVar5 = (int)uVar10;
        if (uVar10 != 3) {
          if (uVar10 != 1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar10 = local_78 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar10 + *(uint *)(local_78 - 1)) == 0x98) {
            iVar5 = 4;
          }
          else {
            iVar5 = (uint)(*(short *)(uVar10 + *(uint *)(local_78 - 1)) != 100) << 1;
          }
        }
      }
      local_70 = iVar5;
      uVar9 = TransitionsAccessor::SearchTransition
                        ((TransitionsAccessor *)local_90,
                         uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + uVar9 + -1),
                         uVar2 >> 1 & 1,(uint)((int)uVar2 >> 1) >> 3 & 7);
      if ((int)uVar9 == 0) break;
      uVar10 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x17);
      uVar3 = *(uint *)(uVar10 + (uVar12 | 3));
      uVar1 = (int)(uVar3 ^ uVar2) >> 1;
      if ((((uVar1 >> 2 & 1) != 0) ||
          (uVar2 = (uint)((int)uVar2 >> 1) >> 1 & 1, uVar2 != ((uint)((int)uVar3 >> 1) >> 1 & 1)))
         || ((uVar1 & 0x1c0) != 0)) break;
      if (uVar2 == 0) {
        uVar6 = Map::UnwrapFieldType
                          (uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + uVar12 + 7));
        local_90[0] = Map::UnwrapFieldType
                                (*param_2 & 0xffffffff00000000 |
                                 (ulong)*(uint *)(*param_2 + uVar12 + 7));
        uVar12 = FieldType::NowIs((FieldType *)local_90,uVar6);
        if ((uVar12 & 1) == 0) break;
      }
      else if (*(int *)(*param_2 + uVar12 + 7) != *(int *)(uVar10 + uVar12 + 7)) break;
      lVar14 = lVar14 + -1;
      lVar13 = lVar13 + 0xc00000000;
      uVar11 = uVar9;
      if (lVar14 == 0) break;
    }
  }
  pIVar8 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar11;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar11);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

