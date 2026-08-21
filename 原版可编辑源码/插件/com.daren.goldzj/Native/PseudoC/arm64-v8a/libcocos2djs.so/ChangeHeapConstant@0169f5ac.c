
/* v8::internal::compiler::DecompressionOptimizer::ChangeHeapConstant(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::ChangeHeapConstant
          (DecompressionOptimizer *this,Node *param_1)

{
  Operator *pOVar1;
  CommonOperatorBuilder *this_00;
  undefined8 local_28;
  
  this_00 = *(CommonOperatorBuilder **)(this + 8);
  local_28 = HeapConstantOf(*(Operator **)param_1);
  pOVar1 = (Operator *)CommonOperatorBuilder::CompressedHeapConstant(this_00,(Handle *)&local_28);
  NodeProperties::ChangeOp(param_1,pOVar1);
  return;
}

