
/* v8::internal::CircularStructureMessageBuilder::AppendStartLine(v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::CircularStructureMessageBuilder::AppendStartLine
          (CircularStructureMessageBuilder *this,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(this + 8) == 0) {
    iVar3 = *(int *)(this + 0x14);
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 10;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x20;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x20;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x20;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x20;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x2d;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x2d;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x3e;
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      iVar3 = *(int *)(this + 0x14);
    }
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x20;
    if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
    }
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
      uVar2 = (ushort)(byte)(&UNK_019cc9a5)[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 10);
  }
  if (*(int *)(this + 8) == 0) {
    cVar1 = 's';
    lVar5 = 1;
    do {
      iVar3 = *(int *)(this + 0x14);
      lVar4 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(char *)(lVar4 + iVar3 + 0xb) = cVar1;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      cVar1 = "starting at object with constructor "[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x25);
  }
  else {
    uVar2 = 0x73;
    lVar5 = 1;
    do {
      iVar3 = *(int *)(this + 0x14);
      lVar4 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(ushort *)(lVar4 + (long)iVar3 * 2 + 0xb) = uVar2;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar2 = (ushort)(byte)"starting at object with constructor "[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x25);
  }
  AppendConstructorName(this,param_2);
  return;
}

