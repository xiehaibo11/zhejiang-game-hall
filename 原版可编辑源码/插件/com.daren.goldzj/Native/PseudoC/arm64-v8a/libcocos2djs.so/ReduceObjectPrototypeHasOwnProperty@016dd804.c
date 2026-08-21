
/* v8::internal::compiler::JSCallReducer::ReduceObjectPrototypeHasOwnProperty(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceObjectPrototypeHasOwnProperty
          (JSCallReducer *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint *puVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Node *pNVar9;
  undefined8 uVar10;
  AccessBuilder *this_00;
  Operator *pOVar11;
  Graph *pGVar12;
  SimplifiedOperatorBuilder *this_01;
  Node *local_b8;
  Node *pNStack_b0;
  undefined8 local_a8;
  Node *local_80;
  Node *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar4 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar1 = *puVar4;
  pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,1);
  if ((uVar1 & 0x7ffffff) < 3) {
    pNVar6 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  }
  else {
    pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,2);
  }
  pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  uVar8 = NodeProperties::GetControlInput(param_1,0);
  if ((*(short *)(*(Operator **)pNVar6 + 0x10) == 0x309) &&
     (cVar3 = ForInModeOf(*(Operator **)pNVar6), cVar3 != '\x02')) {
    pNVar9 = (Node *)NodeProperties::GetValueInput(pNVar6,0);
    uVar10 = NodeProperties::GetValueInput(pNVar6,2);
    if (*(short *)(*(long *)pNVar9 + 0x10) == 0x2cb) {
      pNVar9 = (Node *)NodeProperties::GetValueInput(pNVar9,0);
    }
    if (pNVar9 == pNVar5) {
      this_00 = (AccessBuilder *)NodeProperties::NoObservableSideEffectBetween(pNVar7,pNVar6);
      if (((ulong)this_00 & 1) == 0) {
        pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
        this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        AccessBuilder::ForMap(this_00);
        pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)&local_b8)
        ;
        local_80 = pNVar5;
        local_78 = pNVar7;
        local_70 = uVar8;
        pNVar5 = (Node *)Graph::NewNode(pGVar12,pOVar11,3,&local_80,false);
        pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar11 = (Operator *)
                  SimplifiedOperatorBuilder::ReferenceEqual
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar5;
        pNStack_b0 = (Node *)uVar10;
        pNVar6 = (Node *)Graph::NewNode(pGVar12,pOVar11,2,&local_b8,false);
        pGVar12 = (Graph *)**(undefined8 **)(this + 0x10);
        local_80 = (Node *)0x0;
        local_78 = (Node *)CONCAT44(local_78._4_4_,0xffffffff);
        pOVar11 = (Operator *)
                  SimplifiedOperatorBuilder::CheckIf
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x26
                             ,&local_80);
        local_b8 = pNVar6;
        pNStack_b0 = pNVar5;
        local_a8 = uVar8;
        pNVar7 = (Node *)Graph::NewNode(pGVar12,pOVar11,3,&local_b8,false);
      }
      uVar10 = JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar10,pNVar7,uVar8);
      goto LAB_016dd910;
    }
  }
  uVar10 = 0;
LAB_016dd910:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

