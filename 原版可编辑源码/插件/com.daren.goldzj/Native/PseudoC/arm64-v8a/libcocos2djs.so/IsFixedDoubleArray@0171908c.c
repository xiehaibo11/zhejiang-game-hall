
/* v8::internal::compiler::ObjectRef::IsFixedDoubleArray() const */

bool __thiscall v8::internal::compiler::ObjectRef::IsFixedDoubleArray(ObjectRef *this)

{
  short sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = (undefined8 *)data(this);
  if (*(int *)(puVar2 + 1) == 0) {
    return false;
  }
  if (*(int *)(puVar2 + 1) == 2) {
    uVar3 = *(ulong *)*puVar2;
    if ((uVar3 & 1) == 0) {
      return false;
    }
    sVar1 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    sVar1 = *(short *)(puVar2[2] + 0x18);
  }
  return sVar1 == 0x87;
}

