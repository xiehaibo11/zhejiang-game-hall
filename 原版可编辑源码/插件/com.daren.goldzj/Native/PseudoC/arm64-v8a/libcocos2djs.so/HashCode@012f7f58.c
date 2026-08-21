
/* v8::internal::compiler::Operator1<v8::internal::ZoneHandleSet<v8::internal::Map>,
   v8::internal::compiler::OpEqualTo<v8::internal::ZoneHandleSet<v8::internal::Map> >,
   v8::internal::compiler::OpHash<v8::internal::ZoneHandleSet<v8::internal::Map> > >::HashCode()
   const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::ZoneHandleSet<v8::internal::Map>,v8::internal::compiler::OpEqualTo<v8::internal::ZoneHandleSet<v8::internal::Map>>,v8::internal::compiler::OpHash<v8::internal::ZoneHandleSet<v8::internal::Map>>>
::HashCode(Operator1<v8::internal::ZoneHandleSet<v8::internal::Map>,v8::internal::compiler::OpEqualTo<v8::internal::ZoneHandleSet<v8::internal::Map>>,v8::internal::compiler::OpHash<v8::internal::ZoneHandleSet<v8::internal::Map>>>
           *this)

{
  base::hash_combine(*(ulong *)(this + 0x30),(ulong)*(ushort *)(this + 0x10));
  return;
}

