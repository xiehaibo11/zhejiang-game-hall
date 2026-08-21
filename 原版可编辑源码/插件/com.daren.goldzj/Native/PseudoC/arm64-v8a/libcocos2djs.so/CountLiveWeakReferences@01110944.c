
/* v8::internal::WeakArrayList::CountLiveWeakReferences() const */

int __thiscall v8::internal::WeakArrayList::CountLiveWeakReferences(WeakArrayList *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)this + 7);
  if (1 < (int)uVar1) {
    iVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    do {
      uVar2 = *(uint *)(*(long *)this + 0xb + (long)iVar4);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + (uint)(uVar2 != 3 && ((uVar2 ^ 0xffffffff) & 3) == 0);
    } while (uVar5 < uVar1 >> 1);
    return iVar3;
  }
  return 0;
}

