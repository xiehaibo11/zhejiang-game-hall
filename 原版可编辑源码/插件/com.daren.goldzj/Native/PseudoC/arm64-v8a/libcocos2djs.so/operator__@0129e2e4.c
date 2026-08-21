
/* v8::internal::compiler::Node::UseEdges::iterator::TEMPNAMEPLACEHOLDERVALUE(int) */

undefined8 __thiscall
v8::internal::compiler::Node::UseEdges::iterator::operator++(iterator *this,int param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)this;
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined8 **)this = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  *(undefined8 *)(this + 8) = uVar3;
  return uVar1;
}

