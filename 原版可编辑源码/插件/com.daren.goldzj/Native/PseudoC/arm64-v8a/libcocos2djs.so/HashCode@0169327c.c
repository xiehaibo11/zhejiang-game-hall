
/* v8::internal::compiler::Operator1<v8::internal::compiler::DeoptimizeParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
::HashCode(Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
           *this)

{
  Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
  OVar1;
  Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
  OVar2;
  Operator1<v8::internal::compiler::DeoptimizeParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::DeoptimizeParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::DeoptimizeParameters>>
  OVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *(ushort *)(this + 0x10);
  OVar1 = this[0x30];
  uVar6 = *(ulong *)(this + 0x38);
  OVar2 = this[0x48];
  OVar3 = this[0x31];
  uVar5 = base::hash_combine(0,(long)*(int *)(this + 0x40));
  uVar6 = base::hash_value(uVar6);
  uVar5 = base::hash_combine(uVar5,uVar6);
  uVar6 = base::hash_combine(0,(ulong)(byte)OVar2);
  uVar5 = base::hash_value(uVar5);
  uVar5 = base::hash_combine(uVar6,uVar5);
  uVar6 = internal::hash_value(OVar3);
  uVar5 = base::hash_combine(uVar5,uVar6);
  uVar5 = base::hash_combine(uVar5,(ulong)(byte)OVar1);
  base::hash_combine(uVar5,(ulong)uVar4);
  return;
}

