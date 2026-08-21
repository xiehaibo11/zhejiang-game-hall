
/* v8::internal::compiler::Operator1<v8::internal::compiler::FrameStateInfo,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::FrameStateInfo>,
   v8::internal::compiler::OpHash<v8::internal::compiler::FrameStateInfo>
   >::Equals(v8::internal::compiler::Operator const*) const */

undefined8 __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::FrameStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FrameStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::FrameStateInfo>>
::Equals(Operator1<v8::internal::compiler::FrameStateInfo,v8::internal::compiler::OpEqualTo<v8::internal::compiler::FrameStateInfo>,v8::internal::compiler::OpHash<v8::internal::compiler::FrameStateInfo>>
         *this,Operator *param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) {
    uVar1 = compiler::operator==((FrameStateInfo *)(this + 0x30),(FrameStateInfo *)(param_1 + 0x30))
    ;
    return uVar1;
  }
  return 0;
}

