
/* v8::internal::compiler::Operator1<v8::internal::compiler::CheckIfParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckIfParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CheckIfParameters> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CheckIfParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckIfParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckIfParameters>>
::HashCode(Operator1<v8::internal::compiler::CheckIfParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckIfParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckIfParameters>>
           *this)

{
  Operator1<v8::internal::compiler::CheckIfParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckIfParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckIfParameters>>
  OVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(this + 0x10);
  uVar4 = *(ulong *)(this + 0x38);
  OVar1 = this[0x30];
  uVar3 = base::hash_combine(0,(long)*(int *)(this + 0x40));
  uVar4 = base::hash_value(uVar4);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = internal::hash_value(OVar1);
  uVar3 = base::hash_combine(uVar3,uVar4);
  base::hash_combine(uVar3,(ulong)uVar2);
  return;
}

