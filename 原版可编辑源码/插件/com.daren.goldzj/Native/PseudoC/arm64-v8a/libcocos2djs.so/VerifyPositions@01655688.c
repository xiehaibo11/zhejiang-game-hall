
/* v8::internal::compiler::LiveRange::VerifyPositions() const */

void __thiscall v8::internal::compiler::LiveRange::VerifyPositions(LiveRange *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(this + 0x18);
  if (lVar4 != 0) {
    piVar5 = *(int **)(this + 0x10);
    iVar2 = *piVar5;
    do {
      iVar3 = *(int *)(lVar4 + 0x18);
      if (iVar3 < iVar2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","Start() <= pos->pos()");
      }
      if (*(int *)(*(long *)(this + 8) + 4) < iVar3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","pos->pos() <= End()");
      }
      while ((iVar1 = piVar5[1], iVar3 < *piVar5 || (iVar1 == iVar3 || iVar1 < iVar3) &&
             (iVar1 != iVar3))) {
        piVar5 = *(int **)(piVar5 + 2);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(interval) != nullptr");
        }
      }
      lVar4 = *(long *)(lVar4 + 0x10);
    } while (lVar4 != 0);
  }
  return;
}

