
/* v8::internal::Heap::FlushNumberStringCache() */

void __thiscall v8::internal::Heap::FlushNumberStringCache(Heap *this)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + -31000);
  uVar2 = *(uint *)(uVar4 + 3);
  if ((1 < (int)uVar2) &&
     (*(undefined4 *)(uVar4 + 7) = *(undefined4 *)((uVar4 & 0xffffffff00000000) + 0xa0), 3 < uVar2))
  {
    iVar3 = 4;
    uVar4 = 1;
    do {
      uVar4 = uVar4 + 1;
      lVar1 = (long)iVar3;
      iVar3 = iVar3 + 4;
      *(undefined4 *)(*(ulong *)(this + -31000) + lVar1 + 7) =
           *(undefined4 *)((*(ulong *)(this + -31000) & 0xffffffff00000000) + 0xa0);
    } while (uVar4 < uVar2 >> 1);
  }
  return;
}

