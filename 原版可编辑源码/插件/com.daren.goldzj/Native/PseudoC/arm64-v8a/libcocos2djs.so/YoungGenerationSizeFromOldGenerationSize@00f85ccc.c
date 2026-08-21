
/* v8::internal::Heap::YoungGenerationSizeFromOldGenerationSize(unsigned long) */

int v8::internal::Heap::YoungGenerationSizeFromOldGenerationSize(ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = 7;
  if (param_1 < 0x8000001) {
    lVar1 = 8;
  }
  uVar3 = param_1 >> lVar1;
  if (0x7fffff < uVar3) {
    uVar3 = 0x800000;
  }
  iVar2 = (int)uVar3;
  if (uVar3 < 0x80001) {
    iVar2 = 0x80000;
  }
  return (iVar2 + 0x3ffffU & 0x1fc0000) * 3;
}

