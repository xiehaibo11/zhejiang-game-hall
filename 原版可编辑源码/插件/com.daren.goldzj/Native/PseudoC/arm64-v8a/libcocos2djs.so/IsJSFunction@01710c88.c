
/* v8::internal::compiler::ObjectData::IsJSFunction() const */

bool __thiscall v8::internal::compiler::ObjectData::IsJSFunction(ObjectData *this)

{
  short sVar1;
  ulong uVar2;
  
  if (*(int *)(this + 8) == 0) {
    return false;
  }
  if (*(int *)(this + 8) == 2) {
    uVar2 = **(ulong **)this;
    if ((uVar2 & 1) == 0) {
      return false;
    }
    sVar1 = *(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1));
  }
  else {
    sVar1 = *(short *)(*(long *)(this + 0x10) + 0x18);
  }
  return sVar1 == 0x439;
}

