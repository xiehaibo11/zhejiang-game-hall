
/* v8::debug::Script::ContextId() const */

ulong __thiscall v8::debug::Script::ContextId(Script *this)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(this + 4);
  piVar1 = (int *)((ulong)uVar3 << 0x20 | 0x95b0);
  iVar4 = *piVar1;
  *piVar1 = iVar4 + 1;
  uVar2 = (ulong)(uint)((int)*(uint *)(*(long *)this + 0x13) >> 1) << 0x20 | 1;
  if ((*(uint *)(*(long *)this + 0x13) & 1) != 0) {
    uVar2 = 0;
  }
  if (uVar3 != 0) {
    *piVar1 = iVar4;
  }
  return uVar2;
}

