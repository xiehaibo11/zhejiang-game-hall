
/* v8::internal::compiler::JSNativeContextSpecialization::InlinePropertyGetterCall(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**, v8::internal::ZoneVector<v8::internal::compiler::Node*>*,
   v8::internal::compiler::PropertyAccessInfo const&) */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::InlinePropertyGetterCall
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,Node *param_3,
          Node **param_4,Node **param_5,ZoneVector *param_6,PropertyAccessInfo *param_7)

{
  JSGraph *this_00;
  undefined8 *puVar1;
  long lVar2;
  Node *pNVar3;
  long lVar4;
  ulong uVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  Node *pNVar8;
  PropertyAccessInfo *pPVar9;
  long lVar10;
  Zone *this_01;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  Graph *pGVar15;
  undefined4 local_c0 [2];
  ObjectRef aOStack_b8 [16];
  Node *local_a8;
  Node *pNStack_a0;
  Node *local_98;
  Node *pNStack_90;
  Node *local_88;
  Node *pNStack_80;
  undefined1 local_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pPVar9 = param_7;
  ObjectRef::ObjectRef(aOStack_b8,*(undefined8 *)(this + 0x18),*(undefined8 *)(param_7 + 0x48),1);
  pNVar3 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),aOStack_b8);
  lVar4 = FrameStateInfoOf(*(Operator **)param_3);
  uVar5 = ObjectRef::IsJSFunction(aOStack_b8);
  if ((uVar5 & 1) == 0) {
    pNVar3 = param_1;
    if (*(long *)(param_7 + 0x58) != 0) {
      this_00 = *(JSGraph **)(this + 0x10);
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_a8,*(undefined8 *)(this + 0x18),*(long *)(param_7 + 0x58),1);
      pNVar3 = (Node *)JSGraph::Constant(this_00,(ObjectRef *)&local_a8);
    }
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_a8,*(undefined8 *)(this + 0x18),lVar4,0);
    uVar5 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)&local_a8);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    local_78 = ObjectRef::AsFunctionTemplateInfo(aOStack_b8);
    pNVar3 = (Node *)InlineApiCall(this,param_1,pNVar3,param_3,(Node *)0x0,param_4,param_5,
                                   (SharedFunctionInfoRef *)pPVar9,local_78);
  }
  else {
    pGVar15 = (Graph *)**(undefined8 **)(this + 0x10);
    local_c0[0] = 0x7fc00000;
    local_78._0_8_ = 0;
    local_78._8_4_ = 0xffffffff;
    pOVar6 = (Operator *)
             JSOperatorBuilder::Call
                       ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],2,local_c0,
                        local_78,1,1,1);
    local_88 = *param_4;
    pNStack_80 = *param_5;
    local_a8 = pNVar3;
    pNStack_a0 = param_1;
    local_98 = param_2;
    pNStack_90 = param_3;
    pNVar3 = (Node *)Graph::NewNode(pGVar15,pOVar6,6,&local_a8,false);
    *param_5 = pNVar3;
    *param_4 = pNVar3;
  }
  if (param_6 != (ZoneVector *)0x0) {
    pGVar15 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfException
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    pNStack_a0 = *param_4;
    local_a8 = *param_5;
    uVar7 = Graph::NewNode(pGVar15,pOVar6,2,&local_a8,false);
    pGVar15 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfSuccess
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_a8 = *param_5;
    pNVar8 = (Node *)Graph::NewNode(pGVar15,pOVar6,1,&local_a8,false);
    puVar11 = *(undefined8 **)(param_6 + 8);
    if (puVar11 == *(undefined8 **)(param_6 + 0x10)) {
      lVar4 = (long)puVar11 - *(long *)param_6 >> 3;
      uVar5 = lVar4 + 1;
      if (uVar5 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = (long)*(undefined8 **)(param_6 + 0x10) - *(long *)param_6;
      uVar13 = lVar10 >> 2;
      if (uVar5 <= uVar13) {
        uVar5 = uVar13;
      }
      if (0x7fffffe < (ulong)(lVar10 >> 3)) {
        uVar5 = 0xfffffff;
      }
      if (uVar5 == 0) {
        lVar10 = 0;
      }
      else {
        this_01 = *(Zone **)(param_6 + 0x18);
        uVar13 = uVar5 * 8;
        lVar10 = *(long *)(this_01 + 0x10);
        if (uVar13 < (ulong)(*(long *)(this_01 + 0x18) - lVar10) ||
            uVar13 - (*(long *)(this_01 + 0x18) - lVar10) == 0) {
          *(ulong *)(this_01 + 0x10) = lVar10 + uVar13;
        }
        else {
          lVar10 = Zone::NewExpand(this_01,uVar13);
        }
      }
      puVar11 = (undefined8 *)(lVar10 + lVar4 * 8);
      puVar12 = puVar11 + 1;
      *puVar11 = uVar7;
      puVar1 = *(undefined8 **)param_6;
      puVar14 = *(undefined8 **)(param_6 + 8);
      while (puVar14 != puVar1) {
        puVar14 = puVar14 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar14;
      }
      *(undefined8 **)param_6 = puVar11;
      *(undefined8 **)(param_6 + 8) = puVar12;
      *(ulong *)(param_6 + 0x10) = lVar10 + uVar5 * 8;
    }
    else {
      *puVar11 = uVar7;
      *(long *)(param_6 + 8) = *(long *)(param_6 + 8) + 8;
    }
    *param_5 = pNVar8;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar3;
}

