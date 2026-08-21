
void FUN_015aff1c(Isolate *param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  StackFrameIterator aSStack_5d8 [1416];
  long local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  v8::internal::StackFrameIterator::StackFrameIterator(aSStack_5d8,param_1);
  if (local_50 == 0) {
LAB_015aff9c:
    uVar4 = 0;
  }
  else {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5d8);
    if (local_50 == 0) goto LAB_015aff9c;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5d8);
    } while (local_50 != 0);
    if (0x50 < uVar4) {
      pcVar3 = "...";
      uVar2 = 0x50;
      goto LAB_015affb8;
    }
  }
  pcVar3 = "";
  uVar2 = (ulong)uVar4;
LAB_015affb8:
  v8::internal::PrintF("%4d:%*s",(ulong)uVar4,uVar2,pcVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

