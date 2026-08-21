
/* v8::internal::HeapObjectsMap::FindEntry(unsigned long) */

undefined4 __thiscall v8::internal::HeapObjectsMap::FindEntry(HeapObjectsMap *this,ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = ~(uint)param_1 + (uint)param_1 * 0x8000;
  uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
  uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
  uVar3 = (ulong)(*(int *)(this + 0x10) - 1U & (uVar1 & 0x3fffffff ^ uVar1 >> 0x10));
  puVar2 = (ulong *)(*(long *)(this + 8) + uVar3 * 0x18);
  uVar4 = *puVar2;
  while( true ) {
    if (uVar4 == 0) {
      return 0;
    }
    if (uVar4 == param_1) break;
    uVar3 = (ulong)((int)uVar3 + 1U & *(int *)(this + 0x10) - 1U);
    puVar2 = (ulong *)(*(long *)(this + 8) + uVar3 * 0x18);
    uVar4 = *puVar2;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (puVar2 == (ulong *)0x0) {
    return 0;
  }
  uVar3 = (ulong)(int)puVar2[1];
  uVar4 = (*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) * -0x5555555555555555;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    return *(undefined4 *)(*(long *)(this + 0x20) + uVar3 * 0x18);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

