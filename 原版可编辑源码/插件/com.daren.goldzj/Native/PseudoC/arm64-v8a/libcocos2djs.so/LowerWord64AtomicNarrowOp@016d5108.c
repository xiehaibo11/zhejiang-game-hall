
/* v8::internal::compiler::Int64Lowering::LowerWord64AtomicNarrowOp(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*) */

void __thiscall
v8::internal::compiler::Int64Lowering::LowerWord64AtomicNarrowOp
          (Int64Lowering *this,Node *param_1,Operator *param_2)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Graph *this_00;
  Node *local_18;
  
  DefaultLowering(this,param_1,true);
  NodeProperties::ChangeOp(param_1,param_2);
  this_00 = *(Graph **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int32Constant(*(CommonOperatorBuilder **)(this + 0x18),0);
  local_18 = (Node *)0x0;
  uVar2 = Graph::NewNode(this_00,pOVar1,0,&local_18,false);
  *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       param_1;
  *(undefined8 *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8)
       = uVar2;
  return;
}

