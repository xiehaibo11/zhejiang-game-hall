
/* v8::internal::compiler::Operator1<v8::internal::compiler::StackCheckKind,
   v8::internal::compiler::OpEqualTo<v8::internal::compiler::StackCheckKind>,
   v8::internal::compiler::OpHash<v8::internal::compiler::StackCheckKind> >::HashCode() const */

void __thiscall
v8::internal::compiler::
Operator1<v8::internal::compiler::StackCheckKind,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StackCheckKind>,v8::internal::compiler::OpHash<v8::internal::compiler::StackCheckKind>>
::HashCode(Operator1<v8::internal::compiler::StackCheckKind,v8::internal::compiler::OpEqualTo<v8::internal::compiler::StackCheckKind>,v8::internal::compiler::OpHash<v8::internal::compiler::StackCheckKind>>
           *this)

{
  base::hash_combine((long)*(int *)(this + 0x2c),(ulong)*(ushort *)(this + 0x10));
  return;
}

