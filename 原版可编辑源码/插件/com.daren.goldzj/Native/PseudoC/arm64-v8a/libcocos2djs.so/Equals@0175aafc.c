
/* v8::internal::compiler::Operator1<v8::internal::compiler::LoadGlobalParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadGlobalParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::LoadGlobalParameters>
   >::Equals(v8::internal::compiler::Operator const*) const */

bool __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::LoadGlobalParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadGlobalParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::LoadGlobalParameters>>
::Equals(Operator1<v8::internal::compiler::LoadGlobalParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadGlobalParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::LoadGlobalParameters>>
         *this,Operator *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (((*(short *)(this + 0x10) == *(short *)(param_1 + 0x10)) &&
      (*(long *)(this + 0x30) == *(long *)(param_1 + 0x30))) &&
     (uVar2 = compiler::operator==
                        ((FeedbackSource *)(this + 0x38),(FeedbackSource *)(param_1 + 0x38)),
     (uVar2 & 1) != 0)) {
    bVar1 = *(int *)(this + 0x48) == *(int *)(param_1 + 0x48);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

