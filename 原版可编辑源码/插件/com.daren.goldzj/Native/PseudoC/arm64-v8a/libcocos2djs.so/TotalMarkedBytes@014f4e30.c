
/* v8::internal::ConcurrentMarking::TotalMarkedBytes() */

long __thiscall v8::internal::ConcurrentMarking::TotalMarkedBytes(ConcurrentMarking *this)

{
  long lVar1;
  ulong uVar2;
  ConcurrentMarking *pCVar3;
  
  if ((int)*(uint *)(this + 0x4d8) < 1) {
    lVar1 = 0;
  }
  else {
    uVar2 = 0;
    lVar1 = 0;
    pCVar3 = this + 0xd8;
    do {
      uVar2 = uVar2 + 1;
      lVar1 = *(long *)pCVar3 + lVar1;
      pCVar3 = pCVar3 + 0x80;
    } while (uVar2 < *(uint *)(this + 0x4d8));
  }
  return *(long *)(this + 0x428) + lVar1;
}

