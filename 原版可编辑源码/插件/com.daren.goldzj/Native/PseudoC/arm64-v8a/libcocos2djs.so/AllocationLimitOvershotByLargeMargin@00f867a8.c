
/* v8::internal::Heap::AllocationLimitOvershotByLargeMargin() */

bool __thiscall v8::internal::Heap::AllocationLimitOvershotByLargeMargin(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  plVar1 = *(long **)(this + 0xf0);
  uVar7 = *(ulong *)(this + 0x5d0);
  lVar9 = 0;
  if (plVar1 != (long *)0x0) {
    iVar10 = 3;
LAB_00f867ec:
    do {
      lVar2 = (**(code **)(*plVar1 + 0x50))();
      lVar9 = lVar2 + lVar9;
      switch(iVar10) {
      case 0:
      case 1:
        goto switchD_00f86814_caseD_0;
      case 2:
        plVar1 = *(long **)(this + 0xf0);
        iVar10 = iVar10 + 1;
        if (plVar1 == (long *)0x0) goto switchD_00f86814_default;
        goto LAB_00f867ec;
      case 3:
        plVar1 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar1 = *(long **)(this + 0x100);
        break;
      default:
        goto switchD_00f86814_default;
      }
      iVar10 = iVar10 + 1;
    } while (plVar1 != (long *)0x0);
  }
switchD_00f86814_default:
  lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  lVar2 = *(long *)(this + -0x8830) - *(long *)(this + -0x8820);
  if (lVar2 == 0 || *(long *)(this + -0x8830) < *(long *)(this + -0x8820)) {
    lVar2 = 0;
  }
  uVar8 = 0;
  if (uVar7 < (ulong)(lVar3 + lVar9 + lVar2)) {
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      iVar10 = 3;
LAB_00f86898:
      do {
        lVar2 = (**(code **)(*plVar1 + 0x50))();
        lVar9 = lVar2 + lVar9;
        switch(iVar10) {
        case 0:
        case 1:
          goto switchD_00f86814_caseD_0;
        case 2:
          plVar1 = *(long **)(this + 0xf0);
          iVar10 = iVar10 + 1;
          if (plVar1 == (long *)0x0) goto switchD_00f868c0_default;
          goto LAB_00f86898;
        case 3:
          plVar1 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar1 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f868c0_default;
        }
        iVar10 = iVar10 + 1;
      } while (plVar1 != (long *)0x0);
    }
switchD_00f868c0_default:
    lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    lVar2 = *(long *)(this + -0x8830) - *(long *)(this + -0x8820);
    if (lVar2 == 0 || *(long *)(this + -0x8830) < *(long *)(this + -0x8820)) {
      lVar2 = 0;
    }
    uVar8 = ((lVar3 + lVar9) - *(long *)(this + 0x5d0)) + lVar2;
  }
  plVar1 = *(long **)(this + 0xf0);
  uVar7 = *(ulong *)(this + 0x5d8);
  lVar9 = 0;
  if (plVar1 != (long *)0x0) {
    iVar10 = 3;
LAB_00f8694c:
    do {
      lVar2 = (**(code **)(*plVar1 + 0x50))();
      lVar9 = lVar2 + lVar9;
      switch(iVar10) {
      case 0:
      case 1:
        goto switchD_00f86814_caseD_0;
      case 2:
        plVar1 = *(long **)(this + 0xf0);
        iVar10 = iVar10 + 1;
        if (plVar1 == (long *)0x0) goto switchD_00f86974_default;
        goto LAB_00f8694c;
      case 3:
        plVar1 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar1 = *(long **)(this + 0x100);
        break;
      default:
        goto switchD_00f86974_default;
      }
      iVar10 = iVar10 + 1;
    } while (plVar1 != (long *)0x0);
  }
switchD_00f86974_default:
  lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  lVar2 = 0;
  if (*(long *)(this + 0x870) != 0) {
    lVar2 = *(long *)(*(long *)(this + 0x870) + 0x20);
  }
  if (uVar7 < (ulong)(lVar3 + lVar9 + lVar2)) {
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      iVar10 = 3;
LAB_00f869fc:
      do {
        lVar2 = (**(code **)(*plVar1 + 0x50))();
        lVar9 = lVar2 + lVar9;
        switch(iVar10) {
        case 0:
        case 1:
          goto switchD_00f86814_caseD_0;
        case 2:
          plVar1 = *(long **)(this + 0xf0);
          iVar10 = iVar10 + 1;
          if (plVar1 == (long *)0x0) goto switchD_00f86a24_default;
          goto LAB_00f869fc;
        case 3:
          plVar1 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar1 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f86a24_default;
        }
        iVar10 = iVar10 + 1;
      } while (plVar1 != (long *)0x0);
    }
switchD_00f86a24_default:
    lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    lVar2 = 0;
    if (*(long *)(this + 0x870) != 0) {
      lVar2 = *(long *)(*(long *)(this + 0x870) + 0x20);
    }
    uVar7 = (lVar3 + lVar9 + lVar2) - *(long *)(this + 0x5d8);
    if (uVar7 == 0 && uVar8 == 0) {
      return false;
    }
  }
  else {
    uVar7 = 0;
    if (uVar8 == 0) {
      return false;
    }
  }
  uVar4 = *(ulong *)(this + 0x5d0) >> 1;
  uVar5 = *(long *)(this + 0x58) - *(ulong *)(this + 0x5d0) >> 1;
  if (uVar4 < 0x2000001) {
    uVar4 = 0x2000000;
  }
  uVar6 = *(ulong *)(this + 0x5d8) >> 1;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  uVar5 = *(long *)(this + 0x68) - *(ulong *)(this + 0x5d8) >> 1;
  if (uVar6 < 0x2000001) {
    uVar6 = 0x2000000;
  }
  if (uVar5 <= uVar6) {
    uVar6 = uVar5;
  }
  return uVar4 <= uVar8 || uVar6 <= uVar7;
switchD_00f86814_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

