
/* v8::internal::compiler::PropertyAccessBuilder::BuildCheckValue(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node*,
   v8::internal::Handle<v8::internal::HeapObject>) */

Node * __thiscall
v8::internal::compiler::PropertyAccessBuilder::BuildCheckValue
          (PropertyAccessBuilder *this,Node *param_1,undefined8 *param_2,undefined8 param_3,
          long param_5)

{
  long lVar1;
  Node *pNVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Graph *pGVar6;
  Node *local_80;
  Node *pNStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(short *)(*(long *)param_1 + 0x10) != 0x1e) ||
     (pNVar2 = param_1, *(long *)(*(long *)param_1 + 0x30) != param_5)) {
    pNVar2 = (Node *)JSGraph::HeapConstant(*(JSGraph **)this,param_5);
    pGVar6 = (Graph *)**(undefined8 **)this;
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f]);
    local_80 = param_1;
    pNStack_78 = pNVar2;
    pNVar4 = (Node *)Graph::NewNode(pGVar6,pOVar3,2,&local_80,false);
    pGVar6 = (Graph *)**(undefined8 **)this;
    local_68 = 0;
    local_60 = 0xffffffff;
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckIf
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f],0x28,&local_68);
    pNStack_78 = (Node *)*param_2;
    local_80 = pNVar4;
    local_70 = param_3;
    uVar5 = Graph::NewNode(pGVar6,pOVar3,3,&local_80,false);
    *param_2 = uVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

