
/* v8::internal::CircularStructureMessageBuilder::AppendKey(v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::CircularStructureMessageBuilder::AppendKey
          (CircularStructureMessageBuilder *this,ulong *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    iVar3 = *(int *)(this + 0x14);
    lVar5 = **(long **)(this + 0x20);
    *(int *)(this + 0x14) = iVar3 + 1;
    if (*(int *)(this + 8) == 0) {
      *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x69;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x6e;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined1 *)(lVar5 + iVar3 + 0xb) = 100;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x65;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x78;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x20;
    }
    else {
      *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x69;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x6e;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 100;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x65;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x78;
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        iVar3 = *(int *)(this + 0x14);
      }
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x20;
    }
    if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
      IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
    }
    AppendSmi(this,*param_2);
    return;
  }
  if (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40) {
    if (*(int *)(uVar4 + 7) == 0) {
      if (*(int *)(this + 8) == 0) {
        cVar1 = '<';
        lVar5 = 1;
        do {
          iVar3 = *(int *)(this + 0x14);
          lVar6 = **(long **)(this + 0x20);
          *(int *)(this + 0x14) = iVar3 + 1;
          *(char *)(lVar6 + iVar3 + 0xb) = cVar1;
          if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
          }
          cVar1 = "<anonymous>"[lVar5];
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0xc);
      }
      else {
        uVar2 = 0x3c;
        lVar5 = 1;
        do {
          iVar3 = *(int *)(this + 0x14);
          lVar6 = **(long **)(this + 0x20);
          *(int *)(this + 0x14) = iVar3 + 1;
          *(ushort *)(lVar6 + (long)iVar3 * 2 + 0xb) = uVar2;
          if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
          }
          uVar2 = (ushort)(byte)"<anonymous>"[lVar5];
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0xc);
      }
    }
    else {
      if (*(int *)(this + 8) == 0) {
        cVar1 = 'p';
        lVar5 = 1;
        do {
          iVar3 = *(int *)(this + 0x14);
          lVar6 = **(long **)(this + 0x20);
          *(int *)(this + 0x14) = iVar3 + 1;
          *(char *)(lVar6 + iVar3 + 0xb) = cVar1;
          if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
          }
          cVar1 = "property \'"[lVar5];
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0xb);
      }
      else {
        uVar2 = 0x70;
        lVar5 = 1;
        do {
          iVar3 = *(int *)(this + 0x14);
          lVar6 = **(long **)(this + 0x20);
          *(int *)(this + 0x14) = iVar3 + 1;
          *(ushort *)(lVar6 + (long)iVar3 * 2 + 0xb) = uVar2;
          if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
            IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
          }
          uVar2 = (ushort)(byte)"property \'"[lVar5];
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0xb);
      }
      IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)this,param_2);
      iVar3 = *(int *)(this + 0x14);
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar3 + 1;
      if (*(int *)(this + 8) == 0) {
        *(undefined1 *)(lVar5 + iVar3 + 0xb) = 0x27;
      }
      else {
        *(undefined2 *)(lVar5 + (long)iVar3 * 2 + 0xb) = 0x27;
      }
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","key->IsString()");
}

