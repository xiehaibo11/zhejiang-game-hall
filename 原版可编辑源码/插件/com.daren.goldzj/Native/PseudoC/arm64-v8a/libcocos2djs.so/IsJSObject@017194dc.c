
/* v8::internal::compiler::ObjectRef::IsJSObject() const */

bool __thiscall v8::internal::compiler::ObjectRef::IsJSObject(ObjectRef *this)

{
  ushort uVar1;
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
    uVar1 = *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    uVar1 = *(ushort *)(puVar2[2] + 0x18);
  }
  return 0xa9 < uVar1;
}

