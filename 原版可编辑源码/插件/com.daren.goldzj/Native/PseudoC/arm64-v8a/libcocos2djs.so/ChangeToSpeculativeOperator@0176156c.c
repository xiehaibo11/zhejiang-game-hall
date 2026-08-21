
/* v8::internal::compiler::JSBinopReduction::ChangeToSpeculativeOperator(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Type) */

undefined8 __thiscall
v8::internal::compiler::JSBinopReduction::ChangeToSpeculativeOperator
          (JSBinopReduction *this,Operator *param_1,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  Node *pNVar5;
  
  uVar4 = *(undefined8 *)(this + 8);
  (**(code **)(**(long **)(*(long *)this + 8) + 0x20))
            (*(long **)(*(long *)this + 8),uVar4,uVar4,uVar4,0);
  uVar3 = OperatorProperties::HasFrameStateInput((Operator *)**(undefined8 **)(this + 8));
  if ((uVar3 & 1) != 0) {
    pNVar5 = *(Node **)(this + 8);
    iVar2 = NodeProperties::PastContextIndex(pNVar5);
    Node::RemoveInput(pNVar5,iVar2);
  }
  pNVar5 = *(Node **)(this + 8);
  iVar2 = NodeProperties::PastValueIndex(pNVar5);
  Node::RemoveInput(pNVar5,iVar2);
  NodeProperties::ChangeOp(*(Node **)(this + 8),param_1);
  lVar1 = *(long *)(this + 8);
  uVar4 = Type::Intersect(*(undefined8 *)(lVar1 + 8),param_3,
                          *(undefined8 *)**(undefined8 **)(*(long *)this + 0x10));
  *(undefined8 *)(lVar1 + 8) = uVar4;
  return *(undefined8 *)(this + 8);
}

