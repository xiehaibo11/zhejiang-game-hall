
/* v8::internal::ReadOnlySerializer::SerializeObject(v8::internal::HeapObject) */

void __thiscall
v8::internal::ReadOnlySerializer::SerializeObject(ReadOnlySerializer *this,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **local_60;
  ReadOnlySerializer *pRStack_58;
  ulong local_50;
  ReadOnlySerializer *pRStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = ReadOnlyHeap::Contains(param_2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","ReadOnlyHeap::Contains(obj)");
  }
  uVar3 = param_2 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar3 + *(uint *)(param_2 - 1)) < 0x40) &&
     (0x1f < *(ushort *)(uVar3 + *(uint *)(param_2 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","obj.IsString() implies obj.IsInternalizedString()");
  }
  uVar3 = Serializer::SerializeHotObject((Serializer *)this,param_2);
  if ((uVar3 & 1) == 0) {
    lVar4 = **(long **)(this + 0x90);
    uVar1 = (int)(*(long **)(this + 0x90))[1] - 1;
    uVar3 = (ulong)(uVar1 & (uint)param_2);
    lVar5 = lVar4 + uVar3 * 0x18;
    if ((*(char *)(lVar5 + 0x10) != '\0') && (*(ulong *)(lVar4 + uVar3 * 0x18) != param_2)) {
      do {
        uVar3 = (ulong)((int)uVar3 + 1U & uVar1);
        if (*(char *)(lVar4 + uVar3 * 0x18 + 0x10) == '\0') break;
      } while (*(ulong *)(lVar4 + uVar3 * 0x18) != param_2);
      lVar5 = lVar4 + uVar3 * 0x18;
    }
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      uVar1 = *(uint *)(lVar5 + 8);
      if (0x1f1 < (uVar1 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (((*(ulong *)(this + (((ulong)uVar1 & 0xffff) >> 3 & 0x1ff8) + 0x1d0) >>
            ((ulong)uVar1 & 0x3f) & 1) != 0) &&
         (uVar3 = Serializer::SerializeRoot((Serializer *)this,param_2), (uVar3 & 1) != 0))
      goto LAB_011db580;
    }
    uVar3 = Serializer::SerializeBackReference((Serializer *)this,param_2);
    if ((uVar3 & 1) == 0) {
      RootsSerializer::CheckRehashability((RootsSerializer *)this,param_2);
      pRStack_48 = this + 0x50;
      local_60 = &PTR__ObjectVisitor_01cbba18;
      local_40 = 0;
      pRStack_58 = this;
      local_50 = param_2;
      Serializer::ObjectSerializer::Serialize((ObjectSerializer *)&local_60);
    }
  }
LAB_011db580:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

