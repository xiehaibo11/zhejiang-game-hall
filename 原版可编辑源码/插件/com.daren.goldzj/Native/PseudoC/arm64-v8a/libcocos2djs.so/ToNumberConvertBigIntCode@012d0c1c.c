
/* v8::internal::compiler::SimplifiedLowering::ToNumberConvertBigIntCode() */

void __thiscall
v8::internal::compiler::SimplifiedLowering::ToNumberConvertBigIntCode(SimplifiedLowering *this)

{
  undefined8 uVar1;
  undefined8 local_38 [3];
  
  if (*(long *)(this + 0x28) == 0) {
    Builtins::CallableFor((Builtins *)local_38,*(undefined8 *)(*(long *)this + 0x168),0x66);
    uVar1 = JSGraph::HeapConstant(*(JSGraph **)this,local_38[0]);
    *(undefined8 *)(this + 0x28) = uVar1;
  }
  return;
}

