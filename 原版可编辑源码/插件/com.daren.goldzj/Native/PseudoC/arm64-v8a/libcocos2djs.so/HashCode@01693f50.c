
/* v8::internal::compiler::Operator1<v8::internal::compiler::CallDescriptor const*,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CallDescriptor const*>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CallDescriptor const*> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CallDescriptor_const*,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CallDescriptor_const*>,v8::internal::compiler::OpHash<v8::internal::compiler::CallDescriptor_const*>>
::HashCode(Operator1<v8::internal::compiler::CallDescriptor_const*,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CallDescriptor_const*>,v8::internal::compiler::OpHash<v8::internal::compiler::CallDescriptor_const*>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(ulong *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

