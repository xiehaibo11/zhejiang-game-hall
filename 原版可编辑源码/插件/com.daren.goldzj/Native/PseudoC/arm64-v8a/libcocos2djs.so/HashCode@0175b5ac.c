
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateClosureParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateClosureParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateClosureParameters> >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateClosureParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateClosureParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateClosureParameters>>
::HashCode(Operator1<v8::internal::compiler::CreateClosureParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateClosureParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateClosureParameters>>
           *this)

{
  Operator1<v8::internal::compiler::CreateClosureParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateClosureParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateClosureParameters>>
  OVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(this + 0x10);
  OVar1 = this[0x48];
  uVar4 = *(ulong *)(this + 0x30);
  uVar3 = base::hash_value(*(ulong *)(this + 0x38));
  uVar3 = base::hash_combine(0,uVar3);
  uVar4 = base::hash_value(uVar4);
  uVar4 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_combine(uVar4,(ulong)(byte)OVar1);
  base::hash_combine(uVar4,(ulong)uVar2);
  return;
}

