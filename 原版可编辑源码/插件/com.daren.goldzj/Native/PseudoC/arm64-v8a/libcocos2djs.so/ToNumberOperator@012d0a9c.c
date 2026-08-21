
/* v8::internal::compiler::SimplifiedLowering::ToNumberOperator() */

void __thiscall
v8::internal::compiler::SimplifiedLowering::ToNumberOperator(SimplifiedLowering *this)

{
  CallDescriptor *pCVar1;
  undefined8 uVar2;
  undefined **local_48;
  int *piStack_40;
  Builtins aBStack_38 [16];
  int *local_28;
  
  if (*(long *)(this + 0x38) == 0) {
    Builtins::CallableFor(aBStack_38,*(undefined8 *)(*(long *)this + 0x168),0x65);
    local_48 = &PTR__CallInterfaceDescriptor_01ca0fc8;
    piStack_40 = local_28;
    pCVar1 = (CallDescriptor *)
             Linkage::GetStubCallDescriptor
                       (*(undefined8 *)**(undefined8 **)this,&local_48,local_28[2] - *local_28,1,0,0
                       );
    uVar2 = CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)this + 8),pCVar1);
    *(undefined8 *)(this + 0x38) = uVar2;
  }
  return;
}

