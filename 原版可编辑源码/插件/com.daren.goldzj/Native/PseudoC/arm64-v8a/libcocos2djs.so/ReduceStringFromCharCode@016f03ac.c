
/* v8::internal::compiler::JSCallReducer::ReduceStringFromCharCode(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducer::ReduceStringFromCharCode(JSCallReducer *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Operator *pOVar5;
  Graph *pGVar6;
  Node *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar1 = CallParametersOf(*(Operator **)param_1);
  if (((*(byte *)(lVar1 + 3) >> 4 & 1) == 0) && (*(int *)(*(long *)param_1 + 0x14) == 3)) {
    uVar2 = NodeProperties::GetEffectInput(param_1,0);
    uVar3 = NodeProperties::GetControlInput(param_1,0);
    pNVar4 = (Node *)NodeProperties::GetValueInput(param_1,2);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::SpeculativeToNumber
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],4,
                        lVar1 + 8);
    local_68 = pNVar4;
    uStack_60 = uVar2;
    local_58 = uVar3;
    pNVar4 = (Node *)Graph::NewNode(pGVar6,pOVar5,3,&local_68,false);
    pGVar6 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StringFromSingleCharCode
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_68 = pNVar4;
    uVar2 = Graph::NewNode(pGVar6,pOVar5,1,&local_68,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar2,pNVar4,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

