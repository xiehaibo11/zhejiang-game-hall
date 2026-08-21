
/* v8::internal::TranslatedState::GetFrameFromJSFrameIndex(int) */

uint * __thiscall
v8::internal::TranslatedState::GetFrameFromJSFrameIndex(TranslatedState *this,int param_1)

{
  bool bVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  
  puVar3 = *(uint **)this;
  lVar2 = *(long *)(this + 8) - (long)puVar3;
  if (lVar2 != 0) {
    uVar4 = 0;
    do {
      if ((*puVar3 < 6) && ((1 << (ulong)(*puVar3 & 0x1f) & 0x31U) != 0)) {
        bVar1 = param_1 < 1;
        param_1 = param_1 + -1;
        if (bVar1) {
          return puVar3;
        }
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x16;
    } while (uVar4 < (ulong)((lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  return (uint *)0x0;
}

