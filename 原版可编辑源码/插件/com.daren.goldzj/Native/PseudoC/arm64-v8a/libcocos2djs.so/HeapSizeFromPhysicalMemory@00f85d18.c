
/* v8::internal::Heap::HeapSizeFromPhysicalMemory(unsigned long) */

long __thiscall v8::internal::Heap::HeapSizeFromPhysicalMemory(Heap *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)this >> 2;
  if ((ulong)this >> 0x20 != 0) {
    uVar3 = 0x40000000;
  }
  iVar2 = (int)uVar3;
  if (uVar3 < 0x8000001) {
    iVar2 = 0x8000000;
  }
  uVar3 = (ulong)(iVar2 + 0x3ffff) & 0xfffc0000;
  lVar1 = 7;
  if (uVar3 < 0x8000001) {
    lVar1 = 8;
  }
  uVar4 = uVar3 >> lVar1;
  if (0x7fffff < uVar4) {
    uVar4 = 0x800000;
  }
  iVar2 = (int)uVar4;
  if (uVar4 < 0x80001) {
    iVar2 = 0x80000;
  }
  return ((ulong)(iVar2 + 0x3ffff) & 0x1fc0000) * 3 + uVar3;
}

