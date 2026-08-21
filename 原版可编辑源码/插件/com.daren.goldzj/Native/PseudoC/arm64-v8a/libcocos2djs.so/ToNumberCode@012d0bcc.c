
/* v8::internal::compiler::SimplifiedLowering::ToNumberCode() */

void __thiscall v8::internal::compiler::SimplifiedLowering::ToNumberCode(SimplifiedLowering *this)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (*(long *)(this + 0x20) == 0) {
    Builtins::CallableFor((Builtins *)local_38,*(undefined8 *)(*(long *)this + 0x168),0x65);
    uVar1 = JSGraph::HeapConstant(*(JSGraph **)this,local_38[0]);
    *(undefined8 *)(this + 0x20) = uVar1;
  }
  return;
}

