
/* v8::internal::BasicBlockProfiler::ResetCounts() */

void __thiscall v8::internal::BasicBlockProfiler::ResetCounts(BasicBlockProfiler *this)

{
  BasicBlockProfiler *pBVar1;
  ulong *puVar2;
  ulong uVar3;
  
  for (pBVar1 = *(BasicBlockProfiler **)(this + 8); this != pBVar1;
      pBVar1 = *(BasicBlockProfiler **)(pBVar1 + 8)) {
    puVar2 = *(ulong **)(pBVar1 + 0x10);
    if (*puVar2 != 0) {
      uVar3 = 0;
      do {
        *(undefined4 *)(puVar2[4] + uVar3 * 4) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *puVar2);
    }
  }
  return;
}

