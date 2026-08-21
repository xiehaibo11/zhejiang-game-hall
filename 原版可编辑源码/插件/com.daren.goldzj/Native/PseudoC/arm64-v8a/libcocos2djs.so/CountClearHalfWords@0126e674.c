
/* v8::internal::TurboAssembler::CountClearHalfWords(unsigned long, unsigned int) */

int v8::internal::TurboAssembler::CountClearHalfWords(ulong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = param_2 >> 4; uVar1 != 0; uVar1 = uVar1 - 1) {
    if ((param_1 & 0xffff) == 0) {
      iVar2 = iVar2 + 1;
    }
    param_1 = param_1 >> 0x10;
  }
  return iVar2;
}

