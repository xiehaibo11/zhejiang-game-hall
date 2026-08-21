
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadPropertyWithEnumeratedKey(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSLoadPropertyWithEnumeratedKey
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  char cVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  AccessBuilder *pAVar10;
  Operator *pOVar11;
  Operator *pOVar12;
  undefined8 uVar13;
  Graph *pGVar14;
  Graph *this_00;
  SimplifiedOperatorBuilder *pSVar15;
  Node *local_b8;
  Node *pNStack_b0;
  Node *local_a8;
  Node *pNStack_a0;
  Node *local_80;
  Node *local_78;
  Node *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,1);
  pNVar5 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  pNVar6 = (Node *)NodeProperties::GetControlInput(param_1,0);
  cVar2 = ForInModeOf(*(Operator **)pNVar4);
  if (cVar2 == '\0') {
    pNVar7 = (Node *)NodeProperties::GetValueInput(pNVar4,0);
    pNVar8 = (Node *)NodeProperties::GetValueInput(pNVar4,2);
    uVar9 = NodeProperties::GetValueInput(pNVar4,3);
    if (*(short *)(*(long *)pNVar7 + 0x10) == 0x2cb) {
      pNVar7 = (Node *)NodeProperties::GetValueInput(pNVar7,0);
    }
    if (pNVar7 == pNVar3) {
      pAVar10 = (AccessBuilder *)NodeProperties::NoObservableSideEffectBetween(pNVar5,pNVar4);
      if (((ulong)pAVar10 & 1) == 0) {
        pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
        pSVar15 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
        AccessBuilder::ForMap(pAVar10);
        pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar15,(FieldAccess *)&local_b8)
        ;
        local_80 = pNVar3;
        local_78 = pNVar5;
        local_70 = pNVar6;
        pNVar5 = (Node *)Graph::NewNode(pGVar14,pOVar11,3,&local_80,false);
        pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar11 = (Operator *)
                  SimplifiedOperatorBuilder::ReferenceEqual
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_b8 = pNVar5;
        pNStack_b0 = pNVar8;
        pNVar4 = (Node *)Graph::NewNode(pGVar14,pOVar11,2,&local_b8,false);
        pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
        local_80 = (Node *)0x0;
        local_78 = (Node *)CONCAT44(local_78._4_4_,0xffffffff);
        pOVar11 = (Operator *)
                  SimplifiedOperatorBuilder::CheckIf
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x26
                             ,&local_80);
        local_b8 = pNVar4;
        pNStack_b0 = pNVar5;
        local_a8 = pNVar6;
        pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,3,&local_b8,false);
        pNVar5 = (Node *)pAVar10;
      }
      pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar15 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForMapDescriptors(pAVar10);
      pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar15,(FieldAccess *)&local_b8);
      local_80 = pNVar8;
      local_78 = pNVar5;
      local_70 = pNVar6;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,3,&local_80,false);
      pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar15 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForDescriptorArrayEnumCache(pAVar10);
      pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar15,(FieldAccess *)&local_b8);
      local_80 = (Node *)pAVar10;
      local_78 = (Node *)pAVar10;
      local_70 = pNVar6;
      pAVar10 = (AccessBuilder *)Graph::NewNode(pGVar14,pOVar11,3,&local_80,false);
      pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar15 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForEnumCacheIndices(pAVar10);
      pOVar11 = (Operator *)SimplifiedOperatorBuilder::LoadField(pSVar15,(FieldAccess *)&local_b8);
      local_80 = (Node *)pAVar10;
      local_78 = (Node *)pAVar10;
      local_70 = pNVar6;
      pNVar5 = (Node *)Graph::NewNode(pGVar14,pOVar11,3,&local_80,false);
      pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar11 = (Operator *)
                SimplifiedOperatorBuilder::BooleanNot
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      this_00 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar12 = (Operator *)
                SimplifiedOperatorBuilder::ReferenceEqual
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      pNStack_b0 = (Node *)JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x10));
      local_b8 = pNVar5;
      local_b8 = (Node *)Graph::NewNode(this_00,pOVar12,2,&local_b8,false);
      pNVar4 = (Node *)Graph::NewNode(pGVar14,pOVar11,1,&local_b8,false);
      pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
      local_80 = (Node *)0x0;
      local_78 = (Node *)CONCAT44(local_78._4_4_,0xffffffff);
      pOVar11 = (Operator *)
                SimplifiedOperatorBuilder::CheckIf
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],0x24,
                           &local_80);
      local_b8 = pNVar4;
      pNStack_b0 = pNVar5;
      local_a8 = pNVar6;
      uVar13 = Graph::NewNode(pGVar14,pOVar11,3,&local_b8,false);
      pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
      pSVar15 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
      AccessBuilder::ForFixedArrayElement((AccessBuilder *)&local_80,0,1);
      pOVar11 = (Operator *)
                SimplifiedOperatorBuilder::LoadElement(pSVar15,(ElementAccess *)&local_80);
      local_b8 = pNVar5;
      pNStack_b0 = (Node *)uVar9;
      local_a8 = (Node *)uVar13;
      pNStack_a0 = pNVar6;
      pNVar5 = (Node *)Graph::NewNode(pGVar14,pOVar11,4,&local_b8,false);
      pGVar14 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar11 = (Operator *)
                SimplifiedOperatorBuilder::LoadFieldByIndex
                          ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
      local_b8 = pNVar3;
      pNStack_b0 = pNVar5;
      local_a8 = pNVar5;
      pNStack_a0 = pNVar6;
      uVar9 = Graph::NewNode(pGVar14,pOVar11,4,&local_b8,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar9,uVar9,pNVar6);
      goto LAB_0174fb80;
    }
  }
  uVar9 = 0;
LAB_0174fb80:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

