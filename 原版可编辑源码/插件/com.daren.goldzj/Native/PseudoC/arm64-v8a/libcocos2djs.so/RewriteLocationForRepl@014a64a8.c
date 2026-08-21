
/* v8::internal::Variable::RewriteLocationForRepl() */

void __thiscall v8::internal::Variable::RewriteLocationForRepl(Variable *this)

{
  if ((*(ushort *)(this + 0x28) & 0xf) != 0) {
    return;
  }
  *(ushort *)(this + 0x28) = *(ushort *)(this + 0x28) & 0xfc7f | 0x300;
  return;
}

