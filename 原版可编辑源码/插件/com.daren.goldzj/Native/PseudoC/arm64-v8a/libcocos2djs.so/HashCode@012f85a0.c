
/* v8::internal::compiler::Operator1<v8::internal::compiler::AllocateParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::AllocateParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>>
::HashCode(Operator1<v8::internal::compiler::AllocateParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::AllocateParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::AllocateParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar3 = *(ulong *)(this + 0x30);
  uVar2 = base::hash_value((uint)(byte)this[0x38]);
  uVar2 = base::hash_combine(0,uVar2);
  uVar2 = base::hash_combine(uVar2,uVar3);
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

