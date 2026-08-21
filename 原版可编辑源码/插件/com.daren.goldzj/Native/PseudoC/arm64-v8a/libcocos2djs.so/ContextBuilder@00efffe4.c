
/* v8::internal::DebugEvaluate::ContextBuilder::ContextBuilder(v8::internal::Isolate*,
   v8::internal::JavaScriptFrame*, int) */

void __thiscall
v8::internal::DebugEvaluate::ContextBuilder::ContextBuilder
          (ContextBuilder *this,Isolate *param_1,JavaScriptFrame *param_2,int param_3)

{
  ScopeIterator *this_00;
  Isolate *pIVar1;
  undefined8 uVar2;
  int iVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 *puVar9;
  
  *(Isolate **)(this + 0x20) = param_1;
  pIVar1 = param_1 + 0x95a0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  FrameInspector::FrameInspector
            ((FrameInspector *)(this + 0x28),(StandardFrame *)param_2,param_3,param_1);
  this_00 = (ScopeIterator *)(this + 0x78);
  ScopeIterator::ScopeIterator(this_00,param_1,(FrameInspector *)(this + 0x28),0);
  uVar6 = **(ulong **)(this + 0x60) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x60) + 0xf);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  *(ulong **)this = puVar4;
  if (*(long *)(this + 0xa0) != 0) {
    do {
      iVar3 = ScopeIterator::Type(this_00);
      if (iVar3 == 6) break;
      uStack_60 = 0;
      local_58 = 0;
      local_68 = 0;
      if ((*(long *)(this + 0x98) != 0) &&
         ((iVar3 == 1 || (uVar6 = ScopeIterator::DeclaresLocals(this_00,0), (uVar6 & 1) != 0)))) {
        uStack_60 = ScopeIterator::ScopeObject(this_00,0);
      }
      uVar6 = ScopeIterator::HasContext(this_00);
      if ((uVar6 & 1) != 0) {
        local_68 = *(ulong *)(this + 0xa0);
      }
      if (*(long *)(this + 0x98) == 0) {
        local_58 = *(ulong *)(this + 0xb0);
      }
      puVar4 = *(ulong **)(this + 0x10);
      if (puVar4 == *(ulong **)(this + 0x18)) {
        std::__ndk1::
        vector<v8::internal::DebugEvaluate::ContextBuilder::ContextChainElement,std::__ndk1::allocator<v8::internal::DebugEvaluate::ContextBuilder::ContextChainElement>>
        ::
        __push_back_slow_path<v8::internal::DebugEvaluate::ContextBuilder::ContextChainElement_const&>
                  ((vector<v8::internal::DebugEvaluate::ContextBuilder::ContextChainElement,std::__ndk1::allocator<v8::internal::DebugEvaluate::ContextBuilder::ContextChainElement>>
                    *)(this + 8),(ContextChainElement *)&local_68);
      }
      else {
        puVar4[2] = local_58;
        puVar4[1] = uStack_60;
        *puVar4 = local_68;
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x18;
      }
      ScopeIterator::Next(this_00);
    } while (*(long *)(this + 0xa0) != 0);
    uVar6 = **(ulong **)this;
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x8f) {
      puVar4 = (ulong *)0x0;
    }
    else {
      local_68 = uVar6;
      uVar6 = Context::scope_info((Context *)&local_68);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      }
    }
    puVar8 = *(undefined8 **)(this + 0x10);
    if (*(undefined8 **)(this + 0x10) != *(undefined8 **)(this + 8)) {
      do {
        puVar9 = puVar8 + -3;
        uVar7 = *puVar9;
        uVar5 = puVar8[-2];
        uVar2 = puVar8[-1];
        puVar4 = (ulong *)ScopeInfo::CreateForWithScope(param_1,puVar4);
        local_68 = *puVar4;
        ScopeInfo::SetIsDebugEvaluateScope((ScopeInfo *)&local_68);
        uVar5 = Factory::NewDebugEvaluateContext
                          ((Factory *)param_1,*(undefined8 *)this,puVar4,uVar5,uVar7,uVar2);
        *(undefined8 *)this = uVar5;
        puVar8 = puVar9;
      } while (puVar9 != *(undefined8 **)(this + 8));
    }
  }
  return;
}

