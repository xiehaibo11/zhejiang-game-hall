
/* v8::internal::compiler::RefsMap::Lookup(unsigned long const&) const */

long __thiscall v8::internal::compiler::RefsMap::Lookup(RefsMap *this,ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *param_1;
  lVar1 = *(long *)this;
  uVar3 = (ulong)(*(int *)(this + 8) - 1U & (uint)uVar2);
  lVar4 = lVar1 + uVar3 * 0x18;
  if ((*(char *)(lVar4 + 0x14) != '\0') && (uVar2 != *(ulong *)(lVar1 + uVar3 * 0x18))) {
    do {
      uVar3 = (ulong)((int)uVar3 + 1U & *(int *)(this + 8) - 1U);
      if (*(char *)(lVar1 + uVar3 * 0x18 + 0x14) == '\0') break;
    } while (uVar2 != *(ulong *)(lVar1 + uVar3 * 0x18));
    lVar4 = lVar1 + uVar3 * 0x18;
  }
  lVar1 = 0;
  if (*(char *)(lVar4 + 0x14) != '\0') {
    lVar1 = lVar4;
  }
  return lVar1;
}

