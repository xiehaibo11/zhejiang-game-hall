
/* v8::internal::CircularStructureMessageBuilder::AppendNormalLine(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::CircularStructureMessageBuilder::AppendNormalLine
          (CircularStructureMessageBuilder *this,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 10;
    lVar6 = 1;
    do {
      iVar1 = *(int *)(this + 0x14);
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar1 + 1;
      *(undefined1 *)(lVar5 + iVar1 + 0xb) = uVar2;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar2 = (&UNK_019cc9d4)[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xc);
  }
  else {
    uVar4 = 10;
    lVar6 = 1;
    do {
      iVar1 = *(int *)(this + 0x14);
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar1 + 1;
      *(ushort *)(lVar5 + (long)iVar1 * 2 + 0xb) = uVar4;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar4 = (ushort)(byte)(&UNK_019cc9d4)[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xc);
  }
  AppendKey(this,param_2);
  if (*(int *)(this + 8) == 0) {
    cVar3 = ' ';
    lVar6 = 1;
    do {
      iVar1 = *(int *)(this + 0x14);
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar1 + 1;
      *(char *)(lVar5 + iVar1 + 0xb) = cVar3;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      cVar3 = " -> object with constructor "[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x1d);
  }
  else {
    uVar4 = 0x20;
    lVar6 = 1;
    do {
      iVar1 = *(int *)(this + 0x14);
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar1 + 1;
      *(ushort *)(lVar5 + (long)iVar1 * 2 + 0xb) = uVar4;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar4 = (ushort)(byte)" -> object with constructor "[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x1d);
  }
  AppendConstructorName(this,param_3);
  return;
}

