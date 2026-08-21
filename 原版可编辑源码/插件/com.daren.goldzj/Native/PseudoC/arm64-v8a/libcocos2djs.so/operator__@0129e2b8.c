
/* v8::internal::compiler::Node::InputEdges::iterator::TEMPNAMEPLACEHOLDERVALUE(int) */

long __thiscall
v8::internal::compiler::Node::InputEdges::iterator::operator++(iterator *this,int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(long *)this = lVar1 + -0x18;
  *(long *)(this + 8) = *(long *)(this + 8) + 8;
  return lVar1;
}

