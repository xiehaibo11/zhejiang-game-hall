
/* v8::internal::interpreter::BytecodeArrayIterator::done() const */

bool __thiscall v8::internal::interpreter::BytecodeArrayIterator::done(BytecodeArrayIterator *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = (**(code **)**(undefined8 **)this)(*(undefined8 **)this);
  return iVar2 <= iVar1;
}

