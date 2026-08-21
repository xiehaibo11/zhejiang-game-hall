
/* v8::internal::compiler::TopLevelLiveRange::Verify() const */

void __thiscall v8::internal::compiler::TopLevelLiveRange::Verify(TopLevelLiveRange *this)

{
  int iVar1;
  int iVar2;
  TopLevelLiveRange *pTVar3;
  long lVar4;
  int *piVar5;
  
  if (this != (TopLevelLiveRange *)0x0) {
    pTVar3 = this;
    do {
      if (*(long *)(this + 0x18) != 0) {
        lVar4 = *(long *)(this + 0x18);
        piVar5 = *(int **)(this + 0x10);
        do {
          iVar2 = *(int *)(lVar4 + 0x18);
          if (iVar2 < **(int **)(this + 0x10)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","Start() <= pos->pos()");
          }
          if (*(int *)(*(long *)(this + 8) + 4) < iVar2) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","pos->pos() <= End()");
          }
          while( true ) {
            iVar1 = piVar5[1];
            if ((iVar1 == iVar2) || (*piVar5 <= iVar2 && (iVar1 != iVar2 && iVar2 <= iVar1))) break;
            piVar5 = *(int **)(piVar5 + 2);
            if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","(interval) != nullptr");
            }
          }
          lVar4 = *(long *)(lVar4 + 0x10);
        } while (lVar4 != 0);
      }
      pTVar3 = *(TopLevelLiveRange **)(pTVar3 + 0x28);
    } while (pTVar3 != (TopLevelLiveRange *)0x0);
  }
  return;
}

