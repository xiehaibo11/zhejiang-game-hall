
/* v8::internal::ScopeIterator::VisitLocalScope(std::__ndk1::function<bool
   (v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>)> const&,
   v8::internal::ScopeIterator::Mode) const */

void __thiscall
v8::internal::ScopeIterator::VisitLocalScope(ScopeIterator *this,long param_1,int param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  FrameInspector *this_00;
  ulong *puVar4;
  JavaScriptFrame *pJVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  Isolate *pIVar11;
  undefined8 local_c8;
  undefined8 local_bc;
  long local_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  if (*(long *)(this + 0x20) == 0) {
    local_c8 = (ulong *)**(long **)(this + 0x28);
    uVar2 = Context::scope_info((Context *)&local_c8);
    pIVar11 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar11 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar11 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar11);
      }
      *(ulong **)(pIVar11 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar2;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar2);
    }
    uVar2 = VisitContextLocals(this,param_1,puVar4,*(undefined8 *)(this + 0x28));
    if (param_3 != 1) {
      return;
    }
    if ((uVar2 & 1) != 0) {
      return;
    }
LAB_00f02dbc:
    if ((*(long *)(this + 0x20) == 0) || (0 < *(int *)(*(long *)(this + 0x50) + 0x7c))) {
      local_68 = **(long **)(this + 0x28);
      local_c8 = (ulong *)Context::scope_info((Context *)&local_68);
      uVar2 = ScopeInfo::SloppyEvalCanExtendVars((ScopeInfo *)&local_c8);
      if ((uVar2 & 1) != 0) {
        local_c8 = (ulong *)**(undefined8 **)(this + 0x28);
        iVar1 = Context::extension_object((Context *)&local_c8);
        if (iVar1 != 0) {
          local_c8 = (ulong *)**(long **)(this + 0x28);
          uVar2 = Context::extension_object((Context *)&local_c8);
          pIVar11 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(pIVar11 + 0x95a0);
            if (puVar4 == *(ulong **)(pIVar11 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(pIVar11);
            }
            *(ulong **)(pIVar11 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar2;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar2);
          }
          puVar6 = (ulong *)KeyAccumulator::GetKeys(puVar4,0,0x12,1,0,0);
          if (puVar6 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar2 = *puVar6;
          if (1 < *(int *)(uVar2 + 3)) {
            iVar1 = 0;
            lVar10 = 0;
            do {
              pIVar11 = *(Isolate **)this;
              uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + (long)iVar1 + 7);
              if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar7 = *(ulong **)(pIVar11 + 0x95a0);
                if (puVar7 == *(ulong **)(pIVar11 + 0x95a8)) {
                  puVar7 = (ulong *)HandleScope::Extend(pIVar11);
                }
                *(ulong **)(pIVar11 + 0x95a0) = puVar7 + 1;
                *puVar7 = uVar2;
              }
              else {
                puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar2);
                uVar2 = *puVar7;
              }
              local_b0 = (ulong)*(uint *)((long)puVar4 + 4) << 0x20;
              if (*(short *)(((ulong)*(uint *)((long)puVar4 + 4) << 0x20 | 7) +
                            (ulong)*(uint *)(uVar2 - 1)) == 0x40) {
                uVar9 = (*(int *)(uVar2 + 7) << 1 ^ 0xffffffffU) & 2;
              }
              else {
                uVar9 = 2;
              }
              local_bc = 0xc000000000;
              puVar8 = puVar7;
              local_c8._0_4_ = uVar9;
              if ((*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
                  0xffe0) == 0x20) {
                puVar8 = (ulong *)StringTable::LookupString(local_b0,puVar7);
              }
              uStack_a0 = 0;
              uStack_90 = 0;
              local_80 = 0xffffffffffffffff;
              uStack_78 = 0xffffffffffffffff;
              local_a8 = puVar8;
              local_98 = puVar4;
              local_88 = puVar4;
              LookupIterator::Start<false>((LookupIterator *)&local_c8);
              if (local_c8._4_4_ == 4) {
                local_68 = local_b0 + 0xa0;
              }
              else {
                local_68 = JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
              }
              plVar3 = *(long **)(param_1 + 0x20);
              local_c8 = puVar7;
              if (plVar3 == (long *)0x0) goto LAB_00f0303c;
              uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8,&local_68);
              if ((uVar2 & 1) != 0) {
                return;
              }
              uVar2 = *puVar6;
              lVar10 = lVar10 + 1;
              iVar1 = iVar1 + 4;
            } while (lVar10 < *(int *)(uVar2 + 3) >> 1);
          }
        }
      }
    }
    return;
  }
  uVar2 = VisitLocals(this,param_1,param_3);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_3 == 1) goto LAB_00f02dbc;
  if (param_3 != 0) {
    return;
  }
  iVar1 = Type(this);
  if (iVar1 != 1) {
    return;
  }
  if ((((byte)(*(Scope **)(this + 0x40))[0x84] >> 4 & 1) == 0) &&
     (uVar2 = Scope::HasThisReference(*(Scope **)(this + 0x40)), (uVar2 & 1) == 0)) {
    local_c8 = (ulong *)(*(long *)this + 0xa48);
    local_68 = *(long *)this + 0xa0;
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_00f0303c;
    uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8,&local_68);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  this_00 = *(FrameInspector **)(this + 0x10);
  if (this_00 == (FrameInspector *)0x0) {
    return;
  }
  lVar10 = *(long *)(this + 0x40);
  if ((*(char *)(lVar10 + 0x80) == '\x02') && (*(byte *)(lVar10 + 0x85) - 9 < 2)) {
    return;
  }
  if (*(long *)(lVar10 + 200) != 0) {
    puVar4 = (ulong *)FrameInspector::GetExpression
                                (this_00,*(int *)(*(long *)(lVar10 + 200) + 0x20));
    if ((*puVar4 & 1) == 0) {
      return;
    }
    if ((int)*puVar4 != *(int *)(*(long *)this + 400)) {
      return;
    }
    this_00 = *(FrameInspector **)(this + 0x10);
  }
  pJVar5 = (JavaScriptFrame *)FrameInspector::javascript_frame(this_00);
  local_68 = Accessors::FunctionGetArguments(pJVar5,*(int *)(*(long *)(this + 0x10) + 8));
  local_c8 = (ulong *)(*(long *)this + 0x4c8);
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8,&local_68);
    return;
  }
LAB_00f0303c:
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

