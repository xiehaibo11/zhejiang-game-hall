
/* v8::internal::AstNode::AsIterationStatement() */

AstNode * __thiscall v8::internal::AstNode::AsIterationStatement(AstNode *this)

{
  switch(*(uint *)(this + 4) & 0x3f) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    return this;
  default:
    return (AstNode *)0x0;
  }
}

