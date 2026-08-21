
/* v8::internal::compiler::Operator1<char const*, v8::internal::compiler::OpEqualTo<char const*>,
   v8::internal::compiler::OpHash<char const*> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<char_const*,v8::internal::compiler::OpEqualTo<char_const*>,v8::internal::compiler::OpHash<char_const*>>
::HashCode(Operator1<char_const*,v8::internal::compiler::OpEqualTo<char_const*>,v8::internal::compiler::OpHash<char_const*>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_value(*(ulong *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

