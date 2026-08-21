
/* v8::internal::compiler::Operator1<v8::internal::compiler::RegionObservability,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::RegionObservability>,
   v8::internal::compiler::OpHash<v8::internal::compiler::RegionObservability> >::HashCode() const
    */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::RegionObservability,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RegionObservability>,v8::internal::compiler::OpHash<v8::internal::compiler::RegionObservability>>
::HashCode(Operator1<v8::internal::compiler::RegionObservability,v8::internal::compiler::OpEqualTo<v8::internal::compiler::RegionObservability>,v8::internal::compiler::OpHash<v8::internal::compiler::RegionObservability>>
           *this)

{
  base::hash_combine((ulong)(byte)this[0x2c],(ulong)*(ushort *)(this + 0x10));
  return;
}

