
/* v8::internal::JsonStringifier::SerializeDouble(double) */

undefined8 __thiscall
v8::internal::JsonStringifier::SerializeDouble(JsonStringifier *this,double param_1)

{
  IncrementalStringBuilder *this_00;
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  internal aiStack_9c [100];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((NAN(param_1)) || (ABS(param_1) == INFINITY)) {
    iVar4 = *(int *)(this + 0x1c);
    this_00 = (IncrementalStringBuilder *)(this + 8);
    lVar5 = **(long **)(this + 0x28);
    *(int *)(this + 0x1c) = iVar4 + 1;
    if (*(int *)(this + 0x10) == 0) {
      *(undefined1 *)(lVar5 + iVar4 + 0xb) = 0x6e;
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend(this_00);
        iVar4 = *(int *)(this + 0x1c);
      }
      lVar5 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar4 + 1;
      *(undefined1 *)(lVar5 + iVar4 + 0xb) = 0x75;
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend(this_00);
        iVar4 = *(int *)(this + 0x1c);
      }
      lVar5 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar4 + 1;
      *(undefined1 *)(lVar5 + iVar4 + 0xb) = 0x6c;
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend(this_00);
        iVar4 = *(int *)(this + 0x1c);
      }
      lVar5 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar4 + 1;
      *(undefined1 *)(lVar5 + iVar4 + 0xb) = 0x6c;
    }
    else {
      *(undefined2 *)(lVar5 + (long)iVar4 * 2 + 0xb) = 0x6e;
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend(this_00);
        iVar4 = *(int *)(this + 0x1c);
      }
      lVar5 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar4 + 1;
      *(undefined2 *)(lVar5 + (long)iVar4 * 2 + 0xb) = 0x75;
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend(this_00);
        iVar4 = *(int *)(this + 0x1c);
      }
      lVar5 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar4 + 1;
      *(undefined2 *)(lVar5 + (long)iVar4 * 2 + 0xb) = 0x6c;
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 == *(int *)(this + 0x18)) {
        IncrementalStringBuilder::Extend(this_00);
        iVar4 = *(int *)(this + 0x1c);
      }
      lVar5 = **(long **)(this + 0x28);
      *(int *)(this + 0x1c) = iVar4 + 1;
      *(undefined2 *)(lVar5 + (long)iVar4 * 2 + 0xb) = 0x6c;
    }
    if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
      IncrementalStringBuilder::Extend(this_00);
    }
  }
  else {
    pbVar2 = (byte *)DoubleToCString(aiStack_9c,100);
    uVar3 = (ushort)*pbVar2;
    if (*(int *)(this + 0x10) == 0) {
      while (uVar3 != 0) {
        pbVar2 = pbVar2 + 1;
        iVar4 = *(int *)(this + 0x1c);
        lVar5 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar4 + 1;
        *(char *)(lVar5 + iVar4 + 0xb) = (char)uVar3;
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        }
        uVar3 = (ushort)*pbVar2;
      }
    }
    else if (uVar3 != 0) {
      do {
        pbVar2 = pbVar2 + 1;
        iVar4 = *(int *)(this + 0x1c);
        lVar5 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar4 + 1;
        *(ushort *)(lVar5 + (long)iVar4 * 2 + 0xb) = uVar3;
        if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
          IncrementalStringBuilder::Extend((IncrementalStringBuilder *)(this + 8));
        }
        uVar3 = (ushort)*pbVar2;
      } while (*pbVar2 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

