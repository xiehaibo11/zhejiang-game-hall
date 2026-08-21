
/* v8::internal::SafeStackFrameIterator::Advance() */

void __thiscall v8::internal::SafeStackFrameIterator::Advance(SafeStackFrameIterator *this)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  do {
    AdvanceOneFrame(this);
    plVar3 = *(long **)(this + 0x588);
    if (plVar3 == (long *)0x0) {
      return;
    }
    uVar4 = *(ulong *)(this + 0x5c0);
    if ((uVar4 == 0) || ((ulong)plVar3[4] <= uVar4)) {
      uVar5 = 0;
    }
    else {
      do {
        uVar5 = uVar4;
        uVar4 = *(ulong *)(uVar5 + 0x10);
        *(ulong *)(this + 0x5c0) = uVar4;
        if (uVar4 == 0) break;
      } while (uVar4 < (ulong)plVar3[4]);
    }
    uVar1 = (**(code **)(*plVar3 + 8))();
    if ((uVar1 < 0x15) && ((1 << (ulong)(uVar1 & 0x1f) & 0x119010U) != 0)) {
      return;
    }
    iVar2 = (**(code **)(**(long **)(this + 0x588) + 8))();
    if (iVar2 == 5) {
      return;
    }
    if (iVar2 == 8) {
      return;
    }
    iVar2 = (**(code **)(**(long **)(this + 0x588) + 8))();
    if (iVar2 == 6) {
      return;
    }
    iVar2 = (**(code **)(**(long **)(this + 0x588) + 8))();
    if ((iVar2 == 3) || (iVar2 = (**(code **)(**(long **)(this + 0x588) + 8))(), iVar2 == 0x15)) {
      if (uVar5 != 0) {
        plVar3 = (long *)0x0;
        if (*(long *)(uVar5 + 8) != 0) {
          plVar3 = (long *)(uVar5 + 8);
        }
        *(long **)(*(long *)(this + 0x588) + 0x28) = plVar3;
      }
      return;
    }
  } while( true );
}

