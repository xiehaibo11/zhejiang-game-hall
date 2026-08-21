
/* v8::internal::CircularStructureMessageBuilder::AppendEllipsis() */

void __thiscall
v8::internal::CircularStructureMessageBuilder::AppendEllipsis(CircularStructureMessageBuilder *this)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 10;
    lVar5 = 1;
    do {
      iVar3 = *(int *)(this + 0x14);
      lVar4 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined1 *)(lVar4 + iVar3 + 0xb) = uVar1;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar1 = (&UNK_019cc9d4)[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0xc);
  }
  else {
    uVar2 = 10;
    lVar5 = 1;
    do {
      iVar3 = *(int *)(this + 0x14);
      lVar4 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(ushort *)(lVar4 + (long)iVar3 * 2 + 0xb) = uVar2;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar2 = (ushort)(byte)(&UNK_019cc9d4)[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0xc);
  }
  iVar3 = *(int *)(this + 0x14);
  lVar5 = **(long **)(this + 0x20);
  *(int *)(this + 0x14) = iVar3 + 1;
  if (*(int *)(this + 8) == 0) {
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x2e;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x2e;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x2e;
  }
  else {
    *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x2e;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x2e;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x2e;
  }
  if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
    IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
    return;
  }
  return;
}

