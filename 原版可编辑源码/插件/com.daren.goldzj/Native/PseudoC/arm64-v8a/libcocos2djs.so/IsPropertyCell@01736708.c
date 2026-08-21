
/* v8::internal::compiler::GlobalAccessFeedback::IsPropertyCell() const */

bool __thiscall
v8::internal::compiler::GlobalAccessFeedback::IsPropertyCell(GlobalAccessFeedback *this)

{
  short sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (this[8] != (GlobalAccessFeedback)0x0) {
    puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)(this + 0x10));
    if (*(int *)(puVar2 + 1) != 0) {
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
      return sVar1 == 0xa5;
    }
  }
  return false;
}

