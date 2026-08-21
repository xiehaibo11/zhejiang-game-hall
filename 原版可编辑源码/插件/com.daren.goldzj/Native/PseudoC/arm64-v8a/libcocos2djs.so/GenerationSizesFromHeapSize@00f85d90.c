
/* v8::internal::Heap::GenerationSizesFromHeapSize(unsigned long, unsigned long*, unsigned long*) */

void v8::internal::Heap::GenerationSizesFromHeapSize(ulong param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_2 = 0;
  *param_3 = 0;
  if (1 < param_1) {
    uVar2 = 0;
    uVar5 = param_1;
    do {
      uVar4 = uVar2 + (uVar5 - uVar2 >> 1);
      lVar1 = 7;
      if (uVar4 < 0x8000001) {
        lVar1 = 8;
      }
      uVar6 = uVar4 >> lVar1;
      if (0x7fffff < uVar6) {
        uVar6 = 0x800000;
      }
      iVar3 = (int)uVar6;
      if (uVar6 < 0x80001) {
        iVar3 = 0x80000;
      }
      uVar6 = ((ulong)(iVar3 + 0x3ffff) & 0x1fc0000) * 3;
      if (uVar6 + uVar4 <= param_1) {
        *param_2 = uVar6;
        *param_3 = uVar4;
        uVar2 = uVar4;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar2 + 1 < uVar4);
  }
  return;
}

