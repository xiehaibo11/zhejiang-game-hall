
/* v8::debug::GlobalLexicalScopeNames(v8::Local<v8::Context>, v8::PersistentValueVector<v8::String,
   v8::DefaultPersistentValueVectorTraits>*) */

void v8::debug::GlobalLexicalScopeNames(ulong *param_1,undefined8 *param_2)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong local_68;
  
  local_68 = *param_1;
  pIVar9 = (Isolate *)(local_68 & 0xffffffff00000000);
  uVar4 = internal::Context::global_object((Context *)&local_68);
  puVar11 = (undefined8 *)((ulong)pIVar9 | 0x95b8);
  uVar4 = uVar4 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x273);
  if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar5 = (ulong *)internal::HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar11,uVar4)
    ;
  }
  uVar4 = *puVar5;
  if (1 < *(int *)(uVar4 + 7)) {
    lVar12 = 0;
    pIVar1 = pIVar9 + 0x95a0;
    pIVar2 = pIVar9 + 0x95a8;
    do {
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)((int)lVar12 * 4 + 4) + 7)
      ;
      if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)pIVar2) {
          puVar6 = (ulong *)internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar4;
      }
      else {
        puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    ((CanonicalHandleScope *)*puVar11,uVar4);
        uVar4 = *puVar6;
      }
      local_68 = uVar4;
      uVar4 = internal::Context::scope_info((Context *)&local_68);
      if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)pIVar2) {
          puVar6 = (ulong *)internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar4;
      }
      else {
        puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    ((CanonicalHandleScope *)*puVar11,uVar4);
      }
      uVar4 = *puVar6;
      if ((1 < *(int *)(uVar4 + 3)) && (iVar3 = *(int *)(uVar4 + 0xf), 1 < iVar3)) {
        iVar10 = 0;
        do {
          local_68 = uVar4;
          uVar4 = internal::ScopeInfo::ContextLocalName((ScopeInfo *)&local_68,iVar10);
          uVar7 = internal::ScopeInfo::VariableIsSynthetic();
          if ((uVar7 & 1) == 0) {
            if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
              puVar8 = *(ulong **)pIVar1;
              if (puVar8 == *(ulong **)pIVar2) {
                puVar8 = (ulong *)internal::HandleScope::Extend(pIVar9);
              }
              *(ulong **)pIVar1 = puVar8 + 1;
              *puVar8 = uVar4;
              if (puVar8 != (ulong *)0x0) goto LAB_00ed29d4;
LAB_00ed2a0c:
              local_68 = 0;
            }
            else {
              puVar8 = (ulong *)internal::CanonicalHandleScope::Lookup
                                          ((CanonicalHandleScope *)*puVar11,uVar4);
              if (puVar8 == (ulong *)0x0) goto LAB_00ed2a0c;
LAB_00ed29d4:
              local_68 = V8::GlobalizeReference((Isolate *)*param_2,puVar8);
            }
            if ((ulong *)param_2[2] == (ulong *)param_2[3]) {
              std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
              __push_back_slow_path<unsigned_long_const&>
                        ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)
                         (param_2 + 1),&local_68);
            }
            else {
              *(ulong *)param_2[2] = local_68;
              param_2[2] = param_2[2] + 8;
            }
          }
          if ((iVar3 >> 1) + -1 == iVar10) break;
          uVar4 = *puVar6;
          iVar10 = iVar10 + 1;
        } while( true );
      }
      lVar12 = lVar12 + 1;
      uVar4 = *puVar5;
    } while (lVar12 < *(int *)(uVar4 + 7) >> 1);
  }
  return;
}

