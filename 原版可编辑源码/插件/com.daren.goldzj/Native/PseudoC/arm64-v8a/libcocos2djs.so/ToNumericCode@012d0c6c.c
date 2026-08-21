
/* v8::internal::compiler::SimplifiedLowering::ToNumericCode() */

void __thiscall v8::internal::compiler::SimplifiedLowering::ToNumericCode(SimplifiedLowering *this)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (*(long *)(this + 0x30) == 0) {
    Builtins::CallableFor((Builtins *)local_38,*(undefined8 *)(*(long *)this + 0x168),0x67);
    uVar1 = JSGraph::HeapConstant(*(JSGraph **)this,local_38[0]);
    *(undefined8 *)(this + 0x30) = uVar1;
  }
  return;
}

