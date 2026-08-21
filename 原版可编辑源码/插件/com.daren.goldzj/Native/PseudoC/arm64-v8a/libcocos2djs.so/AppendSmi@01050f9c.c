
/* v8::internal::CircularStructureMessageBuilder::AppendSmi(v8::internal::Smi) */

void __thiscall
v8::internal::CircularStructureMessageBuilder::AppendSmi
          (CircularStructureMessageBuilder *this,int param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  ushort uVar4;
  long lVar5;
  undefined1 auStack_9c [100];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)IntToCString((internal *)(param_2 >> 1),auStack_9c,100);
  uVar4 = (ushort)*pbVar3;
  if (*(int *)(this + 8) == 0) {
    while (uVar4 != 0) {
      pbVar3 = pbVar3 + 1;
      iVar1 = *(int *)(this + 0x14);
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar1 + 1;
      *(char *)(lVar5 + iVar1 + 0xb) = (char)uVar4;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar4 = (ushort)*pbVar3;
    }
  }
  else if (uVar4 != 0) {
    do {
      pbVar3 = pbVar3 + 1;
      iVar1 = *(int *)(this + 0x14);
      lVar5 = **(long **)(this + 0x20);
      *(int *)(this + 0x14) = iVar1 + 1;
      *(ushort *)(lVar5 + (long)iVar1 * 2 + 0xb) = uVar4;
      if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
        IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
      }
      uVar4 = (ushort)*pbVar3;
    } while (*pbVar3 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

