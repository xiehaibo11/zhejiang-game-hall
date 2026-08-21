
/* v8::internal::compiler::RepresentationSelector::LowerToCheckedInt32Mul(v8::internal::compiler::Node*,
   v8::internal::compiler::Truncation, v8::internal::compiler::Type, v8::internal::compiler::Type)
    */

void __thiscall
v8::internal::compiler::RepresentationSelector::LowerToCheckedInt32Mul
          (RepresentationSelector *this,Node *param_1,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  Operator *pOVar2;
  bool bVar3;
  double dVar4;
  long local_18;
  
  if ((param_3 >> 0x20 == 0) ||
     (((local_18 = param_4, param_4 == 0xc5f ||
       ((uVar1 = Type::SlowIs((Type *)&local_18,0xc5f), local_18 != 1 && ((uVar1 & 1) != 0)))) &&
      (dVar4 = (double)Type::Min((Type *)&local_18), 0.0 < dVar4)))) {
    bVar3 = true;
  }
  else {
    local_18 = param_5;
    if (param_5 != 0xc5f) {
      uVar1 = Type::SlowIs((Type *)&local_18,0xc5f);
      bVar3 = false;
      if ((local_18 == 1) || ((uVar1 & 1) == 0)) goto LAB_012e5830;
    }
    dVar4 = (double)Type::Min((Type *)&local_18);
    bVar3 = 0.0 < dVar4;
  }
LAB_012e5830:
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::CheckedInt32Mul
                     (*(SimplifiedOperatorBuilder **)(*(long *)this + 0x178),bVar3);
  NodeProperties::ChangeOp(param_1,pOVar2);
  return;
}

