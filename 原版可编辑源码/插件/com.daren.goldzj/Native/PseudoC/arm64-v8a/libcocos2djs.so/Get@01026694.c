
/* v8::internal::StubCache::Get(v8::internal::Name, v8::internal::Map) */

long __thiscall v8::internal::StubCache::Get(StubCache *this,long param_2,uint param_3)

{
  StubCache *pSVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  uVar2 = *(int *)(param_2 + 3) + (param_3 ^ param_3 >> 0xd) & 0x1ffc;
  pSVar1 = this + (ulong)uVar2 * 3;
  if ((*(int *)pSVar1 == iVar3) && (*(uint *)(pSVar1 + 8) == param_3)) {
    return *(long *)(this + 0x7800) + (ulong)*(uint *)(pSVar1 + 4);
  }
  uVar2 = (uVar2 - iVar3) + 0x6e5 & 0x7fc;
  if ((*(int *)(this + (ulong)uVar2 * 3 + 0x6000) == iVar3) &&
     (*(uint *)(this + (ulong)uVar2 * 3 + 0x6008) == param_3)) {
    return *(long *)(this + 0x7800) + (ulong)*(uint *)(this + (ulong)uVar2 * 3 + 0x6004);
  }
  return 0;
}

