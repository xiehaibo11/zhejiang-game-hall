
/* v8::internal::compiler::Operator1<v8::internal::compiler::LoadTransformParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadTransformParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::LoadTransformParameters> >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::LoadTransformParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadTransformParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::LoadTransformParameters>>
::HashCode(Operator1<v8::internal::compiler::LoadTransformParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::LoadTransformParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::LoadTransformParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x2c);
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_combine(0,lVar3 >> 0x20);
  uVar2 = base::hash_combine(uVar2,(long)(int)lVar3);
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

