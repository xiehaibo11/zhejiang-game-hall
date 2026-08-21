
/* v8::internal::compiler::Operator1<v8::internal::compiler::CreateCollectionIteratorParameters,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateCollectionIteratorParameters>,
   v8::internal::compiler::OpHash<v8::internal::compiler::CreateCollectionIteratorParameters>
   >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::CreateCollectionIteratorParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateCollectionIteratorParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateCollectionIteratorParameters>>
::HashCode(Operator1<v8::internal::compiler::CreateCollectionIteratorParameters,v8::internal::compiler::OpEqualTo<v8::internal::compiler::CreateCollectionIteratorParameters>,v8::internal::compiler::OpHash<v8::internal::compiler::CreateCollectionIteratorParameters>>
           *this)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(this + 0x10);
  uVar2 = base::hash_combine((long)*(int *)(this + 0x2c),(long)*(int *)(this + 0x30));
  base::hash_combine(uVar2,(ulong)uVar1);
  return;
}

