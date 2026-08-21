
/* v8::internal::compiler::HandlerRangeMatcher::HandlerOffsetForCurrentPosition(std::__ndk1::function<void
   (int)> const&) */

void __thiscall
v8::internal::compiler::HandlerRangeMatcher::HandlerOffsetForCurrentPosition
          (HandlerRangeMatcher *this,function *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  HandlerRangeMatcher *pHVar8;
  long lVar9;
  HandlerRangeMatcher *pHVar10;
  ulong uVar11;
  undefined8 uVar12;
  HandlerRangeMatcher *pHVar13;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar4 = interpreter::BytecodeArrayIterator::done(*(BytecodeArrayIterator **)this);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!bytecode_iterator_.done()");
  }
  iVar3 = *(int *)(*(long *)this + 8);
  lVar9 = *(long *)(this + 0x50);
  while (lVar9 != 0) {
    lVar6 = lVar9 + -1;
    uVar4 = *(long *)(this + 0x48) + lVar6;
    if (iVar3 <= *(int *)(*(long *)(*(long *)(this + 0x30) + (uVar4 / 0x155) * 8) +
                          (uVar4 % 0x155) * 0xc + 4)) break;
    lVar1 = lVar9 + *(long *)(this + 0x48);
    *(long *)(this + 0x50) = lVar6;
    lVar9 = *(long *)(this + 0x38) - *(long *)(this + 0x30);
    lVar2 = 0;
    if (lVar9 != 0) {
      lVar2 = (lVar9 >> 3) * 0x155 + -1;
    }
    lVar9 = lVar6;
    if (0x2a9 < (lVar2 - lVar1) + 1U) {
      operator_delete(*(void **)(*(long *)(this + 0x38) + -8));
      lVar9 = *(long *)(this + 0x50);
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + -8;
    }
  }
  if (*(HandlerRangeMatcher **)(this + 0x20) != this + 0x10) {
    pHVar8 = *(HandlerRangeMatcher **)(this + 0x20);
    do {
      if (iVar3 < *(int *)(pHVar8 + 0x1c)) break;
      if (iVar3 <= *(int *)(pHVar8 + 0x20)) {
        lVar9 = *(long *)(this + 0x30);
        lVar6 = *(long *)(this + 0x38);
        uVar4 = 0;
        if (lVar6 - lVar9 != 0) {
          uVar4 = (lVar6 - lVar9 >> 3) * 0x155 - 1;
        }
        uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
        if (uVar4 == uVar11) {
          std::__ndk1::
          deque<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
                      *)(this + 0x28));
          lVar9 = *(long *)(this + 0x30);
          lVar6 = *(long *)(this + 0x38);
          uVar11 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
        }
        if (lVar6 == lVar9) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          puVar7 = (undefined8 *)(*(long *)(lVar9 + (uVar11 / 0x155) * 8) + (uVar11 % 0x155) * 0xc);
        }
        uVar12 = *(undefined8 *)(pHVar8 + 0x1c);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(pHVar8 + 0x24);
        *puVar7 = uVar12;
        pHVar8 = *(HandlerRangeMatcher **)(this + 0x20);
        *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
        if (*(int *)(pHVar8 + 0x1c) == iVar3) {
          local_44 = *(undefined4 *)(pHVar8 + 0x24);
          plVar5 = *(long **)(param_1 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_012c1ca4;
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_44);
          pHVar8 = *(HandlerRangeMatcher **)(this + 0x20);
        }
      }
      pHVar10 = *(HandlerRangeMatcher **)(pHVar8 + 8);
      if (*(HandlerRangeMatcher **)(pHVar8 + 8) == (HandlerRangeMatcher *)0x0) {
        pHVar10 = pHVar8 + 0x10;
        pHVar13 = *(HandlerRangeMatcher **)pHVar10;
        if (*(HandlerRangeMatcher **)pHVar13 != pHVar8) {
          do {
            lVar9 = *(long *)pHVar10;
            pHVar10 = (HandlerRangeMatcher *)(lVar9 + 0x10);
            pHVar13 = *(HandlerRangeMatcher **)pHVar10;
          } while (*(long *)pHVar13 != lVar9);
        }
      }
      else {
        do {
          pHVar13 = pHVar10;
          pHVar10 = *(HandlerRangeMatcher **)pHVar13;
        } while (*(HandlerRangeMatcher **)pHVar13 != (HandlerRangeMatcher *)0x0);
      }
      *(HandlerRangeMatcher **)(this + 0x20) = pHVar13;
      pHVar8 = pHVar13;
    } while (pHVar13 != this + 0x10);
    lVar9 = *(long *)(this + 0x50);
  }
  if (lVar9 != 0) {
    uVar4 = (lVar9 + *(long *)(this + 0x48)) - 1;
    lVar9 = *(long *)(*(long *)(this + 0x30) + (uVar4 / 0x155) * 8);
    uVar4 = uVar4 % 0x155;
    if (*(int *)(lVar9 + uVar4 * 0xc) < iVar3) {
      local_48 = *(undefined4 *)(lVar9 + uVar4 * 0xc + 8);
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) {
LAB_012c1ca4:
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_48);
    }
  }
  return;
}

