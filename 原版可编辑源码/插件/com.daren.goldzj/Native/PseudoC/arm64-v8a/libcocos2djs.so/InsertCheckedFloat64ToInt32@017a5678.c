
/* v8::internal::compiler::RepresentationChanger::InsertCheckedFloat64ToInt32(v8::internal::compiler::Node*,
   v8::internal::compiler::CheckForMinusZeroMode, v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationChanger::InsertCheckedFloat64ToInt32
          (RepresentationChanger *this,Node *param_1,undefined4 param_3,undefined8 param_4,
          Node *param_5)

{
  Operator *pOVar1;
  
  pOVar1 = (Operator *)
           SimplifiedOperatorBuilder::CheckedFloat64ToInt32
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),param_3,param_4);
  InsertConversion(this,param_1,pOVar1,param_5);
  return;
}

