
/* v8::internal::interpreter::BytecodeArrayAccessor::OffsetInBounds() const */

bool __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::OffsetInBounds(BytecodeArrayAccessor *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 0) {
    bVar2 = false;
  }
  else {
    iVar3 = (**(code **)**(undefined8 **)this)();
    bVar2 = iVar1 < iVar3;
  }
  return bVar2;
}

