
/* v8::internal::compiler::JSCreateLowering::ReduceJSCreateArray(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCreateLowering::ReduceJSCreateArray(JSCreateLowering *this,Node *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  void *__dest;
  Node *pNVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  void *local_120;
  void *local_118;
  void *pvStack_110;
  ulong local_108;
  long *local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e0;
  long *local_d8;
  long *plStack_d0;
  undefined1 local_c8 [16];
  JSFunctionRef local_b8 [16];
  ObjectRef local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char local_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  
  puVar12 = (ulong *)CreateArrayParametersOf(*(Operator **)param_1);
  iVar18 = (int)*puVar12;
  local_90 = '\0';
  local_88 = local_88 & 0xffffffffffffff00;
  pNVar16 = (Node *)puVar12[1];
  if (pNVar16 != (Node *)0x0) {
    ObjectRef::ObjectRef(&local_a8,*(undefined8 *)(this + 0x20),pNVar16,0);
    uVar13 = ObjectRef::IsAllocationSite(&local_a8);
    if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsAllocationSite()");
    }
    local_88 = CONCAT71(uStack_a7,local_a8);
    uStack_80 = uStack_a0;
    if (local_90 == '\0') {
      local_90 = '\x01';
    }
  }
  NodeProperties::GetJSCreateMap(*(NodeProperties **)(this + 0x20),(JSHeapBroker *)param_1,pNVar16);
  if (local_a8 == (ObjectRef)0x0) {
    return 0;
  }
  plVar14 = (long *)NodeProperties::GetValueInput(param_1,1);
  if (*(short *)(*plVar14 + 0x10) == 0x1e) {
    uVar17 = *(undefined8 *)(*plVar14 + 0x30);
  }
  else {
    uVar17 = 0;
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_100,*(undefined8 *)(this + 0x20),uVar17,0);
  uVar13 = ObjectRef::IsHeapObject((ObjectRef *)&local_100);
  if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  local_b8 = (JSFunctionRef  [16])ObjectRef::AsJSFunction((ObjectRef *)&local_100);
  local_68 = CompilationDependencies::DependOnInitialMapInstanceSizePrediction
                       (*(CompilationDependencies **)(this + 0x10),local_b8);
  uVar7 = MapRef::elements_kind((MapRef *)&uStack_a0);
  if (local_90 == '\0') {
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_100,*(undefined8 *)(this + 0x20),
               *(long *)(*(long *)(this + 0x18) + 0x168) + 0xea0,0);
    uVar13 = ObjectRef::IsPropertyCell((ObjectRef *)&local_100);
    if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPropertyCell()");
    }
    local_c8 = PropertyCellRef::value((PropertyCellRef *)&local_100);
    iVar9 = ObjectRef::AsSmi((ObjectRef *)local_c8);
    bVar5 = iVar9 == 1;
    uVar8 = 0;
  }
  else {
    uVar7 = AllocationSiteRef::GetElementsKind((AllocationSiteRef *)&local_88);
    bVar5 = AllocationSiteRef::CanInlineCall((AllocationSiteRef *)&local_88);
    uVar8 = CompilationDependencies::DependOnPretenureMode
                      (*(CompilationDependencies **)(this + 0x10),(AllocationSiteRef *)&local_88);
    CompilationDependencies::DependOnElementsKind
              (*(CompilationDependencies **)(this + 0x10),(AllocationSiteRef *)&local_88);
  }
  if (iVar18 == 1) {
    lVar15 = NodeProperties::GetValueInput(param_1,2);
    local_100 = *(long **)(lVar15 + 8);
    uVar13 = Type::Maybe((Type *)&local_100,0x1c5f);
    if ((uVar13 & 1) != 0) {
      uVar10 = BitsetType::SignedSmall();
      if (local_100 != (long *)(ulong)(uVar10 | 1)) {
        uVar13 = Type::SlowIs((Type *)&local_100);
        if ((uVar13 & 1) == 0) goto LAB_016fbda8;
      }
      dVar20 = (double)Type::Min((Type *)&local_100);
      if (0.0 <= dVar20) {
        dVar20 = (double)Type::Max((Type *)&local_100);
        if (dVar20 <= 16.0) {
          dVar20 = (double)Type::Min((Type *)&local_100);
          dVar21 = (double)Type::Max((Type *)&local_100);
          if (dVar20 == dVar21) {
            dVar20 = (double)Type::Max((Type *)&local_100);
            iVar18 = (int)dVar20;
            goto LAB_016fbafc;
          }
        }
      }
LAB_016fbda8:
      uVar10 = BitsetType::UnsignedSmall();
      bVar6 = Type::Maybe((Type *)&local_100,uVar10 | 1);
      if ((bVar5 & bVar6 & 1) == 0) {
        return 0;
      }
      uVar17 = ReduceNewArray(this,param_1,lVar15,uStack_a0,uStack_98,uVar7,uVar8,&local_68);
      return uVar17;
    }
    uVar10 = 2;
    if ((uVar7 & (uVar7 & 0xff) < 6) != 0) {
      uVar10 = 3;
    }
    uVar13 = IsMoreGeneralElementsKindTransition(uVar7,uVar10);
    if ((uVar13 & 1) == 0) {
      uVar10 = uVar7;
    }
    plVar14 = operator_new(8);
    *plVar14 = lVar15;
    local_d8 = plVar14 + 1;
    plStack_d0 = plVar14 + 1;
    local_e0 = plVar14;
    uVar17 = ReduceNewArray(this,param_1,&local_e0,uStack_a0,uStack_98,uVar10,uVar8,&local_68);
    local_d8 = plVar14;
    goto LAB_016fbeec;
  }
  if (iVar18 == 0) {
    lVar15 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x18));
    iVar18 = 4;
LAB_016fbafc:
    uVar17 = ReduceNewArray(this,param_1,lVar15,iVar18,uStack_a0,uStack_98,uVar7,uVar8,&local_68);
    return uVar17;
  }
  if (0x3ffc < iVar18) {
    return 0;
  }
  plStack_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_100 = (long *)0x0;
  uVar13 = *puVar12;
  if (uVar13 != 0) {
    if (uVar13 >> 0x3d != 0) goto LAB_016fbf6c;
    plStack_f8 = operator_new(uVar13 * 8);
    local_f0 = plStack_f8 + uVar13;
  }
  local_100 = plStack_f8;
  uVar10 = uVar7;
  if (iVar18 < 1) {
LAB_016fbe44:
    plVar14 = local_100;
    local_118 = (void *)0x0;
    pvStack_110 = (void *)0x0;
    local_120 = (void *)0x0;
    uVar13 = (long)plStack_f8 - (long)local_100;
    if (uVar13 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if ((ulong)((long)uVar13 >> 3) >> 0x3d != 0) {
LAB_016fbf6c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar13);
      pvStack_110 = (void *)((long)__dest + ((long)uVar13 >> 3) * 8);
      local_120 = __dest;
      local_118 = __dest;
      if (0 < (long)uVar13) {
        memcpy(__dest,plVar14,uVar13);
        local_118 = (void *)((long)__dest + uVar13);
      }
    }
    uVar17 = ReduceNewArray(this,param_1,&local_120,uStack_a0,uStack_98,uVar10,uVar8,&local_68);
    plVar14 = local_100;
    if (__dest != (void *)0x0) {
      local_118 = __dest;
      operator_delete(__dest);
      plVar14 = local_100;
    }
  }
  else {
    iVar9 = 0;
    uVar19 = 0;
    bVar2 = true;
    bVar1 = true;
    auVar4 = local_c8;
    do {
      local_c8 = auVar4;
      pNVar16 = (Node *)NodeProperties::GetValueInput(param_1,iVar9 + 2);
      local_108 = *(ulong *)(pNVar16 + 8);
      local_c8._0_8_ = pNVar16;
      uVar11 = BitsetType::SignedSmall();
      if (local_108 != (uVar11 | 1)) {
        uVar13 = Type::SlowIs((Type *)&local_108);
        if ((uVar13 & 1) == 0) {
          bVar1 = false;
        }
      }
      if (local_108 != 0x1c5f) {
        uVar13 = Type::SlowIs((Type *)&local_108,0x1c5f);
        if ((uVar13 & 1) == 0) {
          bVar2 = false;
        }
      }
      uVar11 = Type::Maybe((Type *)&local_108,0x1c5f);
      if (plStack_f8 == local_f0) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
        ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                  ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                    *)&local_100,(Node **)local_c8);
      }
      else {
        *plStack_f8 = local_c8._0_8_;
        plStack_f8 = plStack_f8 + 1;
      }
      auVar4._8_8_ = local_c8._8_8_;
      auVar4._0_8_ = local_c8._0_8_;
      auVar3._8_8_ = local_c8._8_8_;
      auVar3._0_8_ = local_c8._0_8_;
      iVar9 = iVar9 + 1;
      uVar19 = uVar19 | uVar11 ^ 1;
    } while (iVar18 != iVar9);
    local_c8 = auVar4;
    if (bVar1) goto LAB_016fbe44;
    if (bVar2) {
      uVar10 = 4;
LAB_016fbe28:
      if ((uVar7 & (uVar7 & 0xff) < 6) != 0) {
        uVar10 = uVar10 + 1;
      }
      uVar13 = IsMoreGeneralElementsKindTransition(uVar7,uVar10);
      if ((uVar13 & 1) == 0) {
        uVar10 = uVar7;
      }
      goto LAB_016fbe44;
    }
    if ((uVar19 & 1) != 0) {
      uVar10 = 2;
      goto LAB_016fbe28;
    }
    local_c8 = auVar3;
    if ((bVar5 & 1) != 0) goto LAB_016fbe44;
    uVar17 = 0;
    plVar14 = local_100;
    local_c8 = auVar4;
  }
  local_100 = plVar14;
  plStack_f8 = plVar14;
  if (plVar14 == (long *)0x0) {
    return uVar17;
  }
LAB_016fbeec:
  operator_delete(plVar14);
  return uVar17;
}

