
/* v8::internal::compiler::Node::Inputs::const_iterator::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined1  [16] __thiscall
v8::internal::compiler::Node::Inputs::const_iterator::operator++(const_iterator *this,int param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)this;
  *(long *)this = lVar1 + 8;
  auVar2._8_4_ = param_1;
  auVar2._0_8_ = lVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}

