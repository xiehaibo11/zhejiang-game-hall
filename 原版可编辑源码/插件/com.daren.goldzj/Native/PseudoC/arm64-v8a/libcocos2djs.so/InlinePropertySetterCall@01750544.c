
/* v8::internal::compiler::JSNativeContextSpecialization::InlinePropertySetterCall(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**,
   v8::internal::ZoneVector<v8::internal::compiler::Node*>*,
   v8::internal::compiler::PropertyAccessInfo const&) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::InlinePropertySetterCall
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,Node *param_3,
          Node *param_4,Node **param_5,Node **param_6,ZoneVector *param_7,
          PropertyAccessInfo *param_8)

{
  JSGraph *this_00;
  undefined8 *puVar1;
  long lVar2;
  Node *pNVar3;
  long lVar4;
  ulong uVar5;
  Operator *pOVar6;
  undefined8 uVar7;
  ZoneVector *pZVar8;
  long lVar9;
  Zone *this_01;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  Graph *pGVar14;
  undefined4 local_c8 [2];
  ObjectRef aOStack_c0 [16];
  Node *local_b0;
  Node *pNStack_a8;
  Node *local_a0;
  Node *pNStack_98;
  Node *local_90;
  Node *pNStack_88;
  Node *local_80;
  undefined1 local_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pZVar8 = param_7;
  ObjectRef::ObjectRef(aOStack_c0,*(undefined8 *)(this + 0x18),*(undefined8 *)(param_8 + 0x48),1);
  pNVar3 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),aOStack_c0);
  lVar4 = FrameStateInfoOf(*(Operator **)param_4);
  uVar5 = ObjectRef::IsJSFunction(aOStack_c0);
  if ((uVar5 & 1) == 0) {
    pNVar3 = param_1;
    if (*(long *)(param_8 + 0x58) != 0) {
      this_00 = *(JSGraph **)(this + 0x10);
      ObjectRef::ObjectRef
                ((ObjectRef *)&local_b0,*(undefined8 *)(this + 0x18),*(long *)(param_8 + 0x58),1);
      pNVar3 = (Node *)JSGraph::Constant(this_00,(ObjectRef *)&local_b0);
    }
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_b0,*(undefined8 *)(this + 0x18),lVar4,0);
    uVar5 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)&local_b0);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    local_78 = ObjectRef::AsFunctionTemplateInfo(aOStack_c0);
    InlineApiCall(this,param_1,pNVar3,param_4,param_2,param_5,param_6,
                  (SharedFunctionInfoRef *)pZVar8,local_78);
  }
  else {
    pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
    local_c8[0] = 0x7fc00000;
    local_78._0_8_ = 0;
    local_78._8_4_ = 0xffffffff;
    pOVar6 = (Operator *)
             JSOperatorBuilder::Call
                       ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],3,local_c8,
                        local_78,1,1,1);
    pNStack_88 = *param_5;
    local_80 = *param_6;
    local_b0 = pNVar3;
    pNStack_a8 = param_1;
    local_a0 = param_2;
    pNStack_98 = param_3;
    local_90 = param_4;
    pNVar3 = (Node *)Graph::NewNode(pGVar14,pOVar6,7,&local_b0,false);
    *param_6 = pNVar3;
    *param_5 = pNVar3;
  }
  if (param_7 != (ZoneVector *)0x0) {
    pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfException
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    pNStack_a8 = *param_5;
    local_b0 = *param_6;
    uVar7 = Graph::NewNode(pGVar14,pOVar6,2,&local_b0,false);
    pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::IfSuccess
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
    local_b0 = *param_6;
    pNVar3 = (Node *)Graph::NewNode(pGVar14,pOVar6,1,&local_b0,false);
    puVar10 = *(undefined8 **)(param_7 + 8);
    if (puVar10 == *(undefined8 **)(param_7 + 0x10)) {
      lVar4 = (long)puVar10 - *(long *)param_7 >> 3;
      uVar5 = lVar4 + 1;
      if (uVar5 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar9 = (long)*(undefined8 **)(param_7 + 0x10) - *(long *)param_7;
      uVar12 = lVar9 >> 2;
      if (uVar5 <= uVar12) {
        uVar5 = uVar12;
      }
      if (0x7fffffe < (ulong)(lVar9 >> 3)) {
        uVar5 = 0xfffffff;
      }
      if (uVar5 == 0) {
        lVar9 = 0;
      }
      else {
        this_01 = *(Zone **)(param_7 + 0x18);
        uVar12 = uVar5 * 8;
        lVar9 = *(long *)(this_01 + 0x10);
        if (uVar12 < (ulong)(*(long *)(this_01 + 0x18) - lVar9) ||
            uVar12 - (*(long *)(this_01 + 0x18) - lVar9) == 0) {
          *(ulong *)(this_01 + 0x10) = lVar9 + uVar12;
        }
        else {
          lVar9 = Zone::NewExpand(this_01,uVar12);
        }
      }
      puVar10 = (undefined8 *)(lVar9 + lVar4 * 8);
      puVar11 = puVar10 + 1;
      *puVar10 = uVar7;
      puVar1 = *(undefined8 **)param_7;
      puVar13 = *(undefined8 **)(param_7 + 8);
      while (puVar13 != puVar1) {
        puVar13 = puVar13 + -1;
        puVar10 = puVar10 + -1;
        *puVar10 = *puVar13;
      }
      *(undefined8 **)param_7 = puVar10;
      *(undefined8 **)(param_7 + 8) = puVar11;
      *(ulong *)(param_7 + 0x10) = lVar9 + uVar5 * 8;
    }
    else {
      *puVar10 = uVar7;
      *(long *)(param_7 + 8) = *(long *)(param_7 + 8) + 8;
    }
    *param_6 = pNVar3;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

