
/* v8::internal::Debug::IsExceptionBlackboxed(bool) */

uint __thiscall v8::internal::Debug::IsExceptionBlackboxed(Debug *this,bool param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  StackTraceFrameIterator aSStack_5d8 [1416];
  JavaScriptFrame *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  StackTraceFrameIterator::StackTraceFrameIterator(aSStack_5d8,*(Isolate **)(this + 0x88));
  do {
    if (local_50 == (JavaScriptFrame *)0x0) {
LAB_00f0c1d4:
      uVar3 = 1;
LAB_00f0c1c4:
      if (param_1) {
        uVar3 = AllFramesOnStackAreBlackboxed(this);
      }
LAB_00f0c1dc:
      if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar3 & 1;
    }
    iVar2 = (**(code **)(*(long *)local_50 + 8))();
    if ((iVar2 != 8) && (iVar2 != 5)) {
      if (local_50 != (JavaScriptFrame *)0x0) {
        uVar3 = IsFrameBlackboxed(this,local_50);
        if ((uVar3 & 1) == 0) goto LAB_00f0c1dc;
        goto LAB_00f0c1c4;
      }
      goto LAB_00f0c1d4;
    }
    StackTraceFrameIterator::Advance(aSStack_5d8);
  } while( true );
}

