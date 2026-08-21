
/* v8::internal::ScopeIterator::TryParseAndRetrieveScopes(v8::internal::ScopeIterator::ReparseStrategy)
    */

void __thiscall
v8::internal::ScopeIterator::TryParseAndRetrieveScopes(ScopeIterator *this,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ParseInfo *pPVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong local_90;
  int local_88;
  int local_84;
  undefined1 local_80;
  int local_7c;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  uVar16 = **(ulong **)(this + 0x20);
  pIVar10 = *(Isolate **)this;
  uVar16 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar11 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
    *puVar11 = uVar16;
  }
  else {
    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar16);
    uVar16 = *puVar11;
  }
  pIVar10 = (Isolate *)(uVar16 & 0xffffffff00000000);
  if (((*(uint *)(uVar16 + 7) & 1) == 0) ||
     (uVar16 = (ulong)pIVar10 | (ulong)*(uint *)(uVar16 + 7),
     *(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x83)) {
    uVar16 = ScopeInfo::Empty(pIVar10);
  }
  pIVar10 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar12 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar12 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar12 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar12 + 1;
    *puVar12 = uVar16;
  }
  else {
    puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar16);
  }
  local_90 = *puVar11;
  uVar16 = local_90 & 0xffffffff00000000 | (ulong)*(uint *)(local_90 + 0xf);
  if (*(short *)((local_90 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x5b) {
    uVar16 = (ulong)*(uint *)(uVar16 + 0xb);
  }
  pIVar10 = *(Isolate **)this;
  if ((int)uVar16 == *(int *)(pIVar10 + 0xa0)) {
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    uVar16 = **(ulong **)(this + 0x20) & 0xffffffff00000000 |
             (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0xf);
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar16;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar16);
    }
    *(undefined8 *)(this + 0x20) = 0;
    *(ulong **)(this + 0x28) = puVar11;
    return;
  }
  if ((*(uint *)(local_90 + 0x1b) & 0x1f) == 0x12) {
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    return;
  }
  uVar16 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_90);
  if (((uVar16 & 1) == 0) || (*(long *)(this + 0x10) == 0)) {
    bVar5 = false;
  }
  else {
    pIVar10 = *(Isolate **)this;
    uVar16 = *puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar13 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar13 + 1;
      *puVar13 = uVar16;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar16);
    }
    uVar14 = FrameInspector::javascript_frame(*(FrameInspector **)(this + 0x10));
    BreakLocation::FromFrame((BreakLocation *)&local_90,puVar13,uVar14);
    bVar5 = local_84 == 4;
  }
  uVar16 = *puVar11 & 0xffffffff00000000;
  uVar18 = uVar16 | *(uint *)(*puVar11 + 0xf);
  if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar18 - 1)) == 0x5b) {
    uVar18 = uVar16 | *(uint *)(uVar18 + 0xb);
  }
  pIVar10 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar13 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar13 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar13 + 1;
    *puVar13 = uVar18;
  }
  else {
    puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar18);
  }
  local_90 = *puVar12;
  cVar6 = ScopeInfo::scope_type((ScopeInfo *)&local_90);
  pPVar15 = operator_new(0xe0);
  if ((param_2 == 1) && (cVar6 == '\x02')) {
    ParseInfo::ParseInfo(pPVar15,*(undefined8 *)this,puVar11);
    *(ParseInfo **)(this + 8) = pPVar15;
  }
  else {
    ParseInfo::ParseInfo(pPVar15,*(undefined8 *)this,puVar13);
    *(ParseInfo **)(this + 8) = pPVar15;
    *(uint *)(pPVar15 + 8) = *(uint *)(pPVar15 + 8) | 2;
  }
  local_90 = *puVar12;
  cVar6 = ScopeInfo::scope_type((ScopeInfo *)&local_90);
  if (cVar6 != '\x01') {
    uVar3 = *(uint *)(*puVar13 + 0x23);
    if (((uVar3 & 1) == 0) ||
       (uVar16 = *puVar13 & 0xffffffff00000000,
       0xe < *(ushort *)((uVar16 | 7) + (ulong)*(uint *)((uVar16 | uVar3) - 1)) - 0x76)) {
      local_90 = *puVar12;
      ScopeInfo::scope_type((ScopeInfo *)&local_90);
      goto LAB_00f014a8;
    }
  }
  *(uint *)(*(long *)(this + 8) + 8) = *(uint *)(*(long *)(this + 8) + 8) | 4;
  uVar16 = **(ulong **)(this + 0x28);
  if (*(short *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0x8f) {
    lVar17 = *(long *)(this + 8);
    local_90 = uVar16;
    uVar16 = Context::scope_info((Context *)&local_90);
    pIVar10 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar13 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar13 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar13 + 1;
      *puVar13 = uVar16;
    }
    else {
      puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar16);
    }
    *(ulong **)(lVar17 + 0x58) = puVar13;
  }
  uVar2 = *(uint *)(*(long *)(this + 8) + 8);
  uVar3 = uVar2 & 0xfffffff7;
  if ((*(uint *)(*puVar11 + 0x1b) & 0x40) != 0) {
    uVar3 = uVar2 | 8;
  }
  *(uint *)(*(long *)(this + 8) + 8) = uVar3;
LAB_00f014a8:
  uVar16 = parsing::ParseAny(*(undefined8 *)(this + 8),puVar11,*(undefined8 *)this,0);
  if (((uVar16 & 1) == 0) ||
     (uVar16 = Rewriter::Rewrite(*(ParseInfo **)(this + 8)), (uVar16 & 1) == 0)) {
    lVar17 = *(long *)this;
    if (((*(ulong *)(lVar17 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(lVar17 + 0x2bd8) == (int)*(undefined8 *)(lVar17 + 0xa8))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","isolate_->has_pending_exception()");
    }
    *(undefined8 *)(lVar17 + 0x2bd8) = *(undefined8 *)(lVar17 + 0xa8);
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    AstValueFactory::Internalize
              (*(AstValueFactory **)(*(long *)(this + 8) + 0x70),*(Isolate **)this);
    puVar11 = *(ulong **)(this + 0x20);
    uVar16 = *(ulong *)(*(long *)(*(long *)(this + 8) + 0xa8) + 0x28);
    iVar7 = GetSourcePosition(this);
    local_68 = *puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 + 0xb);
    local_90 = uVar16;
    iVar8 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_68);
    local_68 = *puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 + 0xb);
    local_88 = iVar8;
    iVar9 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_68);
    local_78 = 0;
    local_70 = 0;
    local_80 = (*(uint *)((*puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 + 0xb)) + 0x1b)
               & 0x1e) == 4;
    local_84 = iVar9;
    local_7c = iVar7;
    if ((bool)local_80) {
      FUN_00f0472c(&local_90,uVar16);
      uVar18 = local_78;
      uVar19 = local_70;
    }
    else {
      uVar18 = local_78;
      uVar20 = uVar16;
      if ((*(int *)(uVar16 + 0x70) == iVar8) && (*(int *)(uVar16 + 0x74) == iVar9)) {
        local_78 = Scope::AsDeclarationScope();
        uVar18 = local_78;
      }
      while (uVar19 = uVar20, uVar20 = *(ulong *)(uVar19 + 0x10), uVar20 != 0) {
        while( true ) {
          iVar1 = *(int *)(uVar20 + 0x74);
          if ((*(int *)(uVar20 + 0x70) == iVar8) && (iVar1 == iVar9)) break;
          bVar4 = iVar7 <= iVar1;
          if (uVar18 != 0) {
            bVar4 = iVar7 < iVar1;
          }
          if ((*(int *)(uVar20 + 0x70) < iVar7) && (bVar4)) goto LAB_00f015ec;
          uVar20 = *(ulong *)(uVar20 + 0x18);
          if (uVar20 == 0) goto LAB_00f01654;
        }
        uVar18 = Scope::AsDeclarationScope();
        local_78 = uVar18;
LAB_00f015ec:
        if (uVar19 == uVar20) break;
      }
    }
LAB_00f01654:
    local_70 = uVar19;
    *(ulong *)(this + 0x48) = local_70;
    *(ulong *)(this + 0x50) = local_70;
    local_68 = *puVar12;
    cVar6 = ScopeInfo::scope_type((ScopeInfo *)&local_68);
    if (cVar6 != '\x02') {
      uVar18 = uVar16;
    }
    *(ulong *)(this + 0x40) = uVar18;
    uVar16 = DeclarationScope::Analyze(*(ParseInfo **)(this + 8));
    if ((uVar16 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","DeclarationScope::Analyze(info_)");
    }
    if (bVar5) {
      lVar17 = *(long *)(this + 0x40);
      *(long *)(this + 0x48) = lVar17;
      *(long *)(this + 0x50) = lVar17;
      if (0 < *(int *)(lVar17 + 0x7c)) {
        local_68 = **(ulong **)(this + 0x28);
        uVar16 = Context::closure_context((Context *)&local_68);
        pIVar10 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar16;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar16);
        }
        *(ulong **)(this + 0x28) = puVar11;
      }
    }
    UnwrapEvaluationContext(this);
  }
  return;
}

