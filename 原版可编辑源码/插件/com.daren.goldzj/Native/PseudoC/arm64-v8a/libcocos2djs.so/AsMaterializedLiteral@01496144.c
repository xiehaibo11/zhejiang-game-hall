
/* v8::internal::AstNode::AsMaterializedLiteral() */

AstNode * __thiscall v8::internal::AstNode::AsMaterializedLiteral(AstNode *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4) & 0x3f;
  if (((uVar1 != 0x17) && (uVar1 != 0x16)) && (uVar1 != 0x15)) {
    this = (AstNode *)0x0;
  }
  return this;
}

