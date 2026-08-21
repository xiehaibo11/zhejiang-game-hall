
/* v8::internal::ScopeIterator::SetLocalVariableValue(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::ScopeIterator::SetLocalVariableValue
          (ScopeIterator *this,ulong *param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  JavaScriptFrame *pJVar5;
  long *plVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_48;
  
  plVar13 = *(long **)(*(long *)(this + 0x50) + 0x40);
  plVar6 = (long *)(*(long *)(this + 0x50) + 0x38);
  do {
    if (plVar6 == plVar13) {
switchD_00f03728_caseD_0:
      return 0;
    }
    lVar12 = *plVar6;
    puVar8 = (ulong *)**(long **)(lVar12 + 8);
    if (puVar8 == param_2) {
LAB_00f036f8:
      uVar3 = *(ushort *)(lVar12 + 0x28);
      if (((uVar3 >> 7 ^ 0xffff) & 7) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      iVar1 = *(int *)(lVar12 + 0x20);
      switch(uVar3 >> 7 & 7) {
      default:
        goto switchD_00f03728_caseD_0;
      case 1:
      case 7:
        if ((uVar3 & 0x70) == 0x20) {
          return 0;
        }
        if (*(FrameInspector **)(this + 0x10) != (FrameInspector *)0x0) {
          pJVar5 = (JavaScriptFrame *)
                   FrameInspector::javascript_frame(*(FrameInspector **)(this + 0x10));
          iVar4 = (**(code **)(*(long *)pJVar5 + 8))();
          if (iVar4 == 4) {
            return 0;
          }
          JavaScriptFrame::SetParameterValue(pJVar5,iVar1,*param_3);
          return 1;
        }
        pIVar7 = *(Isolate **)this;
        uVar9 = **(ulong **)(this + 0x18) & 0xffffffff00000000 |
                (ulong)*(uint *)(**(ulong **)(this + 0x18) + 0x23);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar9;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar9);
          uVar9 = *puVar8;
        }
        break;
      case 2:
        if (*(FrameInspector **)(this + 0x10) != (FrameInspector *)0x0) {
          plVar6 = (long *)FrameInspector::javascript_frame(*(FrameInspector **)(this + 0x10));
          iVar4 = (**(code **)(*plVar6 + 8))();
          if (iVar4 == 4) {
            return 0;
          }
          uVar9 = *param_3;
          puVar8 = (ulong *)(**(code **)(*plVar6 + 0x90))(plVar6,iVar1);
          *puVar8 = uVar9;
          return 1;
        }
        pIVar7 = (Isolate *)(**(ulong **)(this + 0x20) & 0xffffffff00000000);
        uVar2 = *(uint *)(((ulong)pIVar7 | (ulong)*(uint *)(**(ulong **)(this + 0x20) + 0xb)) + 7);
        if (((uVar2 & 1) == 0) ||
           (uVar9 = (ulong)pIVar7 | (ulong)uVar2,
           *(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x83)) {
          uVar9 = ScopeInfo::Empty(pIVar7);
        }
        if (*(int *)(uVar9 + 3) < 2) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(uVar9 + 0xb) >> 1;
        }
        pIVar7 = *(Isolate **)this;
        uVar9 = **(ulong **)(this + 0x18) & 0xffffffff00000000 |
                (ulong)*(uint *)(**(ulong **)(this + 0x18) + 0x23);
        if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar9;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar9);
          uVar9 = *puVar8;
        }
        uVar11 = *param_3;
        lVar12 = uVar9 + (long)((iVar4 + iVar1) * 4);
        *(int *)(lVar12 + 7) = (int)uVar11;
        if ((uVar11 & 1) == 0) {
          return 1;
        }
        uVar10 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        lVar12 = lVar12 + 7;
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar12,uVar11);
          uVar10 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar10 & 0x18) == 0) {
          return 1;
        }
        if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
          return 1;
        }
        goto LAB_00f039ec;
      case 3:
        uVar9 = **(ulong **)(this + 0x28);
        break;
      case 5:
        if (0 < iVar1) {
          local_48 = **(undefined8 **)(this + 0x28);
          uVar9 = Context::module((Context *)&local_48);
          pIVar7 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(pIVar7 + 0x95a0);
            if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar7);
            }
            *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar9;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar9);
          }
          SourceTextModule::StoreVariable(puVar8,*(undefined4 *)(lVar12 + 0x20),param_3);
          return 1;
        }
        goto switchD_00f03728_caseD_0;
      }
      uVar11 = *param_3;
      lVar12 = uVar9 + (long)(iVar1 << 2);
      *(int *)(lVar12 + 7) = (int)uVar11;
      if ((uVar11 & 1) != 0) {
        uVar10 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        lVar12 = lVar12 + 7;
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar12,uVar11);
          uVar10 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
LAB_00f039ec:
          Heap_GenerationalBarrierSlow(uVar9,lVar12,uVar11);
        }
      }
      return 1;
    }
    uVar9 = *puVar8;
    if (((param_2 != (ulong *)0x0) && (puVar8 != (ulong *)0x0)) && (uVar9 == *param_2))
    goto LAB_00f036f8;
    if ((0x1f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1))) ||
       (0x1f < *(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)))) {
      uVar9 = String::SlowEquals(*(undefined8 *)this,puVar8,param_2);
      if ((uVar9 & 1) != 0) goto LAB_00f036f8;
      lVar12 = *plVar6;
    }
    plVar6 = (long *)(lVar12 + 0x18);
  } while( true );
}

