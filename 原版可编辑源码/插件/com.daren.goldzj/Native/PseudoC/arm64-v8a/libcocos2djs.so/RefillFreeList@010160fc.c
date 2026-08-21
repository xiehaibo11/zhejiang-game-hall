
/* v8::internal::PagedSpace::RefillFreeList() */

void __thiscall v8::internal::PagedSpace::RefillFreeList(PagedSpace *this)

{
  Mutex *this_00;
  Page *pPVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  Mutex *pMVar5;
  PagedSpace *this_01;
  ulong uVar6;
  long lVar7;
  
  if ((*(uint *)(this + 0x48) < 5) && (*(uint *)(this + 0x48) != 1)) {
    uVar6 = 0;
    this_00 = (Mutex *)(this + 0xc0);
    lVar7 = *(long *)(*(long *)(this + 0x40) + 0x800);
    do {
      pPVar1 = (Page *)Sweeper::GetSweptPageSafe(*(Sweeper **)(lVar7 + 0x26f8),this);
      if (pPVar1 == (Page *)0x0) {
        return;
      }
      if ((((byte)pPVar1[9] >> 4 & 1) != 0) &&
         (0 < *(int *)(*(long *)(*(long *)(pPVar1 + 0x58) + 0x60) + 8))) {
        lVar2 = 0;
        do {
          lVar4 = *(long *)(this + 0x60);
          piVar3 = *(int **)(*(long *)(pPVar1 + 0xf0) + lVar2 * 8);
          if ((((*(long *)(piVar3 + 4) != 0) || (*(long *)(piVar3 + 6) != 0)) ||
              (*(int **)(*(long *)(lVar4 + 0x20) + (long)*piVar3 * 8) == piVar3)) &&
             (piVar3[2] != 0)) {
            *(ulong *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) - (ulong)(uint)piVar3[1];
          }
          piVar3[3] = 0;
          piVar3[4] = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3[7] = 0;
          piVar3[5] = 0;
          piVar3[6] = 0;
          lVar2 = lVar2 + 1;
        } while (lVar2 < *(int *)(*(long *)(*(long *)(pPVar1 + 0x58) + 0x60) + 8));
      }
      if ((*(int *)(this + 0x9c) == 2) ||
         (Page::MergeOldToNewRememberedSets(), *(int *)(this + 0x9c) - 2U < 3)) {
        this_01 = *(PagedSpace **)(pPVar1 + 0x58);
        base::Mutex::Lock((Mutex *)(this_01 + 0xc0));
        if (*(long *)(pPVar1 + 0xa8) != 0) goto LAB_0101637c;
        lVar2 = *(ulong *)(pPVar1 + 0x68) - *(ulong *)(pPVar1 + 0xc0);
        if (*(ulong *)(pPVar1 + 0xc0) <= *(ulong *)(pPVar1 + 0x68) && lVar2 != 0) {
          *(long *)(this_01 + 0xb8) = *(long *)(this_01 + 0xb8) - lVar2;
          lVar4 = *(long *)(*(long *)(this_01 + 0x40) + 0x890);
          if (lVar4 != 0) {
            *(long *)(*(long *)(this_01 + 0x40) + 0x890) = lVar4 - lVar2;
          }
        }
        *(undefined8 *)(pPVar1 + 0x68) = 0;
        RemovePage(this_01,pPVar1);
        lVar2 = AddPage(this,pPVar1);
        pMVar5 = (Mutex *)(this_01 + 0xc0);
      }
      else {
        base::Mutex::Lock(this_00);
        if (*(long *)(pPVar1 + 0xa8) != 0) {
LAB_0101637c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","page->SweepingDone()");
        }
        lVar2 = *(ulong *)(pPVar1 + 0x68) - *(ulong *)(pPVar1 + 0xc0);
        if (*(ulong *)(pPVar1 + 0xc0) <= *(ulong *)(pPVar1 + 0x68) && lVar2 != 0) {
          *(long *)(this + 0xb8) = *(long *)(this + 0xb8) - lVar2;
          lVar4 = *(long *)(*(long *)(this + 0x40) + 0x890);
          if (lVar4 != 0) {
            *(long *)(*(long *)(this + 0x40) + 0x890) = lVar4 - lVar2;
          }
        }
        *(undefined8 *)(pPVar1 + 0x68) = 0;
        pMVar5 = this_00;
        if (*(int *)(*(long *)(*(long *)(pPVar1 + 0x58) + 0x60) + 8) < 1) {
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          lVar4 = 0;
          do {
            lVar2 = lVar2 + (ulong)*(uint *)(*(long *)(*(long *)(pPVar1 + 0xf0) + lVar4 * 8) + 4);
            (**(code **)(**(long **)(this + 0x60) + 0x38))();
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)(*(long *)(*(long *)(pPVar1 + 0x58) + 0x60) + 8));
        }
      }
      base::Mutex::Unlock(pMVar5);
      uVar6 = lVar2 + uVar6 + *(long *)(pPVar1 + 0xd8);
    } while ((uVar6 < 0x7d001) || (2 < *(int *)(this + 0x9c) - 2U));
  }
  return;
}

