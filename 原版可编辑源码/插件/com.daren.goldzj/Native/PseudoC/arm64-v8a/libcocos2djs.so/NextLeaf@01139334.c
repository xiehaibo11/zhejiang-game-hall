
/* v8::internal::ConsStringIterator::NextLeaf(bool*) */

ulong __thiscall v8::internal::ConsStringIterator::NextLeaf(ConsStringIterator *this,bool *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(this + 0x108);
  if (uVar3 != 0) {
    uVar4 = *(uint *)(this + 0x10c);
    do {
      if (uVar4 - uVar3 == 0x20) {
        *param_1 = true;
        return 0;
      }
      uVar3 = uVar3 - 1;
      uVar5 = *(ulong *)(this + (ulong)(uVar3 & 0x1f) * 8) & 0xffffffff00000000;
      uVar2 = uVar5 | *(uint *)(*(ulong *)(this + (ulong)(uVar3 & 0x1f) * 8) + 0xf);
      if ((*(ushort *)((uVar5 | *(uint *)(uVar2 - 1)) + 7) & 7) == 1) {
        *(ulong *)(this + (ulong)(uVar3 & 0x1f) * 8) = uVar2;
        uVar2 = uVar5 | *(uint *)(uVar2 + 0xb);
        for (uVar5 = uVar5 | *(uint *)(uVar2 - 1); uVar3 = *(uint *)(this + 0x108),
            (*(ushort *)(uVar5 + 7) & 7) == 1; uVar5 = uVar5 | *(uint *)(uVar2 - 1)) {
          *(uint *)(this + 0x108) = uVar3 + 1;
          *(ulong *)(this + (ulong)(uVar3 & 0x1f) * 8) = uVar2;
          uVar5 = uVar2 & 0xffffffff00000000;
          uVar2 = uVar5 | *(uint *)(uVar2 + 0xb);
        }
        uVar4 = *(uint *)(this + 0x10c);
        if ((int)*(uint *)(this + 0x10c) < (int)uVar3) {
          *(uint *)(this + 0x10c) = uVar3;
          uVar4 = uVar3;
        }
        iVar1 = *(int *)(uVar2 + 7);
      }
      else {
        *(uint *)(this + 0x108) = uVar3;
        iVar1 = *(int *)(uVar2 + 7);
      }
      if (iVar1 != 0) {
        *(int *)(this + 0x110) = *(int *)(this + 0x110) + iVar1;
        return uVar2;
      }
    } while (uVar3 != 0);
  }
  *param_1 = false;
  return 0;
}

