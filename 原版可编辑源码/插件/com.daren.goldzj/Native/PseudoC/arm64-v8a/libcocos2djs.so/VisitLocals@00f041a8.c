
/* v8::internal::ScopeIterator::VisitLocals(std::__ndk1::function<bool
   (v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::Object>)> const&,
   v8::internal::ScopeIterator::Mode) const */

undefined8 __thiscall
v8::internal::ScopeIterator::VisitLocals(ScopeIterator *this,long param_1,int param_3)

{
  uint uVar1;
  long lVar2;
  CanonicalHandleScope *this_00;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  Isolate *pIVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong *local_70;
  long local_68;
  
  if (((param_3 == 0) && ((*(byte *)(*(long *)(this + 0x50) + 0x82) & 1) != 0)) &&
     (lVar2 = Scope::AsDeclarationScope(), (*(byte *)(lVar2 + 0x84) >> 4 & 1) != 0)) {
    lVar2 = Scope::AsDeclarationScope();
    if ((*(ushort *)(*(long *)(lVar2 + 0xb0) + 0x28) & 0x380) == 0x180) {
      pIVar9 = *(Isolate **)this;
      uVar13 = **(ulong **)(this + 0x28) & 0xffffffff00000000 |
               (ulong)*(uint *)(**(ulong **)(this + 0x28) +
                                (long)(*(int *)(*(long *)(lVar2 + 0xb0) + 0x20) << 2) + 7);
      this_00 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
joined_r0x00f04278:
      if (this_00 == (CanonicalHandleScope *)0x0) {
        local_70 = *(ulong **)(pIVar9 + 0x95a0);
        if (local_70 == *(ulong **)(pIVar9 + 0x95a8)) {
          local_70 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = local_70 + 1;
        *local_70 = uVar13;
      }
      else {
        local_70 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar13);
      }
    }
    else {
      if (*(long *)(this + 0x10) == 0) {
        pIVar9 = *(Isolate **)this;
        this_00 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
        uVar13 = **(ulong **)(this + 0x18) & 0xffffffff00000000 |
                 (ulong)*(uint *)(**(ulong **)(this + 0x18) + 0x13);
        goto joined_r0x00f04278;
      }
      local_70 = *(ulong **)(*(long *)(this + 0x10) + 0x30);
    }
    local_68 = *(long *)this;
    iVar7 = (int)*local_70;
    if (((*local_70 & 1) != 0) &&
       ((iVar7 == *(int *)(local_68 + 400) || (iVar7 == *(int *)(local_68 + 0xa8))))) {
      local_70 = (ulong *)(local_68 + 0xa0);
    }
    local_68 = local_68 + 0xa48;
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_00f04728;
    uVar13 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_68,&local_70);
    if ((uVar13 & 1) == 0) goto LAB_00f042f4;
LAB_00f046f0:
    uVar6 = 1;
  }
  else {
LAB_00f042f4:
    if (*(char *)(*(long *)(this + 0x50) + 0x80) == '\x02') {
      lVar2 = Scope::AsDeclarationScope();
      if (*(long *)(lVar2 + 0xb8) != 0) {
        local_68 = **(long **)(*(long *)(lVar2 + 0xb8) + 8);
        local_70 = *(ulong **)(*(long *)(this + 0x10) + 0x38);
        plVar3 = *(long **)(param_1 + 0x20);
        if (plVar3 == (long *)0x0) {
LAB_00f04728:
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        uVar13 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_68,&local_70);
        if ((uVar13 & 1) != 0) goto LAB_00f046f0;
      }
    }
    plVar14 = *(long **)(*(long *)(this + 0x50) + 0x40);
    for (plVar3 = (long *)(*(long *)(this + 0x50) + 0x38); plVar3 != plVar14;
        plVar3 = (long *)(*plVar3 + 0x18)) {
      uVar12 = 0x95b8;
      lVar2 = *plVar3;
      uVar13 = ScopeInfo::VariableIsSynthetic(*(undefined8 *)**(undefined8 **)(lVar2 + 8));
      if ((uVar13 & 1) != 0) goto switchD_00f043b4_caseD_0;
      if (((*(ushort *)(lVar2 + 0x28) >> 7 ^ 0xffff) & 7) == 0) {
        puVar4 = (ulong *)0x0;
        goto LAB_00f046c4;
      }
      iVar7 = *(int *)(lVar2 + 0x20);
      uVar13 = (ulong)(*(ushort *)(lVar2 + 0x28) >> 7) & 7;
      uVar11 = 0;
      iVar8 = 0x19a74c5;
      switch(uVar13) {
      case 1:
        if (*(FrameInspector **)(this + 0x10) == (FrameInspector *)0x0) {
          uVar13 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
          pIVar9 = *(Isolate **)this;
          uVar13 = uVar13 | *(uint *)((uVar13 | *(uint *)(**(ulong **)(this + 0x18) + 0x23)) +
                                      (long)(iVar7 << 2) + 7);
          if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(pIVar9 + 0x95a0);
            if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(pIVar9);
            }
            *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar13;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar13);
          }
        }
        else {
          puVar4 = (ulong *)FrameInspector::GetParameter(*(FrameInspector **)(this + 0x10),iVar7);
          if (((*puVar4 & 1) != 0) &&
             (lVar10 = *(long *)this, (int)*puVar4 == *(int *)(lVar10 + 400))) goto LAB_00f046c0;
        }
        goto LAB_00f046c4;
      case 2:
        if (*(FrameInspector **)(this + 0x10) == (FrameInspector *)0x0) {
          uVar11 = **(ulong **)(this + 0x18);
          uVar13 = **(ulong **)(this + 0x20);
          uVar12 = (ulong)*(uint *)(uVar11 + 0x23);
          iVar8 = param_3;
          goto switchD_00f043b4_caseD_7;
        }
        puVar4 = (ulong *)FrameInspector::GetExpression(*(FrameInspector **)(this + 0x10),iVar7);
        iVar7 = (int)*puVar4;
        if ((*puVar4 & 1) == 0) goto LAB_00f046c4;
        lVar10 = *(long *)this;
        if (iVar7 != *(int *)(lVar10 + 400)) {
          if (iVar7 == *(int *)(lVar10 + 0xa8)) break;
          goto LAB_00f046c4;
        }
        if ((*(byte *)(*(long *)(this + 0x50) + 0x82) & 1) != 0) {
          lVar10 = Scope::AsDeclarationScope();
          if (*(long *)(lVar10 + 200) == lVar2) break;
          lVar10 = *(long *)this;
        }
LAB_00f046c0:
        puVar4 = (ulong *)(lVar10 + 0xa0);
        goto LAB_00f046c4;
      case 3:
        if (param_3 != 0) {
          pIVar9 = *(Isolate **)this;
          uVar13 = **(ulong **)(this + 0x28) & 0xffffffff00000000 |
                   (ulong)*(uint *)(**(ulong **)(this + 0x28) + (long)(iVar7 << 2) + 7);
          if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) != (CanonicalHandleScope *)0x0) {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar13);
            uVar13 = *puVar4;
            iVar7 = (int)uVar13;
            goto joined_r0x00f045d0;
          }
          puVar4 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar13;
          iVar7 = (int)*puVar4;
          if ((*puVar4 & 1) == 0) goto LAB_00f046c4;
LAB_00f045d4:
          if (iVar7 != *(int *)(*(long *)this + 0xa8)) goto LAB_00f046c4;
        }
        break;
      case 4:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 5:
        if (param_3 != 0) {
          local_68 = **(long **)(this + 0x28);
          uVar13 = Context::module((Context *)&local_68);
          pIVar9 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(pIVar9 + 0x95a0);
            if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(pIVar9);
            }
            *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar13;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar13);
          }
          puVar4 = (ulong *)SourceTextModule::LoadVariable
                                      (*(undefined8 *)this,puVar4,*(undefined4 *)(lVar2 + 0x20));
          uVar13 = *puVar4;
          iVar7 = (int)uVar13;
joined_r0x00f045d0:
          if ((uVar13 & 1) != 0) goto LAB_00f045d4;
          goto LAB_00f046c4;
        }
        break;
      case 7:
switchD_00f043b4_caseD_7:
        param_3 = iVar8;
        pIVar9 = (Isolate *)(uVar13 & 0xffffffff00000000);
        uVar1 = *(uint *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar13 + 0xb)) + 7);
        if (((uVar1 & 1) == 0) ||
           (uVar13 = (ulong)pIVar9 | (ulong)uVar1,
           *(short *)(((ulong)pIVar9 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x83)) {
          uVar13 = ScopeInfo::Empty(pIVar9);
        }
        if (*(int *)(uVar13 + 3) < 2) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(uVar13 + 0xb) >> 1;
        }
        pIVar9 = *(Isolate **)this;
        uVar13 = uVar11 & 0xffffffff00000000 |
                 (ulong)*(uint *)((uVar11 & 0xffffffff00000000 | uVar12) +
                                  (long)((iVar8 + iVar7) * 4) + 7);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar13;
          uVar13 = *puVar4;
          iVar7 = (int)uVar13;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar13);
          uVar13 = *puVar4;
          iVar7 = (int)uVar13;
        }
        if (((uVar13 & 1) != 0) && (lVar10 = *(long *)this, iVar7 == *(int *)(lVar10 + 0xa8)))
        goto LAB_00f046c0;
LAB_00f046c4:
        local_68 = **(long **)(lVar2 + 8);
        plVar5 = *(long **)(param_1 + 0x20);
        local_70 = puVar4;
        if (plVar5 == (long *)0x0) goto LAB_00f04728;
        uVar13 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_68,&local_70);
        if ((uVar13 & 1) != 0) goto LAB_00f046f0;
      }
switchD_00f043b4_caseD_0:
    }
    uVar6 = 0;
  }
  return uVar6;
}

