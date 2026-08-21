
/* v8::internal::Heap::NumberOfNativeContexts() */

long __thiscall v8::internal::Heap::NumberOfNativeContexts(Heap *this)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 0x5e8);
  lVar2 = 0;
  if ((uVar3 & 1) != 0) goto LAB_00f9ac78;
  do {
    do {
      puVar1 = (uint *)(uVar3 + 0x41f);
      lVar2 = lVar2 + 1;
      uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) == 0);
LAB_00f9ac78:
  } while ((int)uVar3 != *(int *)(this + -0x87b0));
  return lVar2;
}

