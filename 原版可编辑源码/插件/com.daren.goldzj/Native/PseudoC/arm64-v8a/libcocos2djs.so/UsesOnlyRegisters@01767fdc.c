
/* v8::internal::compiler::CallDescriptor::UsesOnlyRegisters() const */

undefined8 __thiscall
v8::internal::compiler::CallDescriptor::UsesOnlyRegisters(CallDescriptor *this)

{
  ulong *puVar1;
  ulong uVar2;
  CallDescriptor *pCVar3;
  
  puVar1 = *(ulong **)(this + 0x10);
  if (puVar1[1] != 0xffffffffffffffff) {
    uVar2 = 0xffffffffffffffff;
    do {
      pCVar3 = this + 8;
      if (uVar2 != 0xffffffffffffffff) {
        pCVar3 = (CallDescriptor *)(puVar1[2] + (uVar2 + *puVar1) * 8);
      }
      if (((byte)*pCVar3 & 1) != 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < puVar1[1]);
  }
  if (*puVar1 != 0) {
    uVar2 = 0;
    do {
      if ((*(ulong *)(puVar1[2] + uVar2 * 8) & 1) != 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *puVar1);
  }
  return 1;
}

