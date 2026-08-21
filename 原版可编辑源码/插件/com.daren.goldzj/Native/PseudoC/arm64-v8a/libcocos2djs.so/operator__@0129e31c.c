
/* v8::internal::compiler::Node::Uses::const_iterator::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined1  [16] __thiscall
v8::internal::compiler::Node::Uses::const_iterator::operator++(const_iterator *this,int param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = *(undefined8 **)this;
  *(undefined8 *)this = *puVar1;
  auVar2._8_4_ = param_1;
  auVar2._0_8_ = puVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}

