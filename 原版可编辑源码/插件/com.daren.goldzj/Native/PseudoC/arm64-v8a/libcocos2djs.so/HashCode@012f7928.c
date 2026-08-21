
/* v8::internal::compiler::Operator1<v8::internal::compiler::CheckBoundsParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckBoundsParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CheckBoundsParameters> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CheckBoundsParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckBoundsParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckBoundsParameters>>
::HashCode(Operator1<v8::internal::compiler::CheckBoundsParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CheckBoundsParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CheckBoundsParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar3 = *(ulong *)(this + 0x30);
  uVar2 = base::hash_combine(0,(long)*(int *)(this + 0x38));
  uVar3 = base::hash_value(uVar3);
  uVar2 = base::hash_combine(uVar2,uVar3);
  uVar3 = base::hash_value(*(uint *)(this + 0x40));
  uVar3 = base::hash_combine(0,uVar3);
  uVar2 = base::hash_value(uVar2);
  uVar2 = base::hash_combine(uVar3,uVar2);
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

