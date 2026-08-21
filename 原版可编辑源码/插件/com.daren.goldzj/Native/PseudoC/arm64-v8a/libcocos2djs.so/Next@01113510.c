
/* v8::internal::Script::Iterator::Next() */

ulong __thiscall v8::internal::Script::Iterator::Next(Iterator *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(ulong *)(this + 8);
  if ((int)uVar2 != 0) {
    iVar6 = *(int *)this;
    lVar3 = (long)iVar6;
    iVar5 = iVar6 << 2;
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(uVar2 + 7) >> 1 <= lVar3) {
        *(undefined8 *)(this + 8) = 0;
        return 0;
      }
      *(int *)this = iVar6;
      uVar1 = *(uint *)(uVar2 + 0xb + (long)iVar5);
      lVar3 = lVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar1 == 3);
    uVar4 = (ulong)uVar1 & 0xfffffffffffffffd;
    if ((int)uVar4 != 0) {
      return uVar2 & 0xffffffff00000000 | uVar4;
    }
  }
  return 0;
}

