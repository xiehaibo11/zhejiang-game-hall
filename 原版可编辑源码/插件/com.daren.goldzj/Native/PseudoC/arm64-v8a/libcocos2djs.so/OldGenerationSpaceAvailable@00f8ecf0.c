
/* v8::internal::Heap::OldGenerationSpaceAvailable() */

long __thiscall v8::internal::Heap::OldGenerationSpaceAvailable(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  plVar1 = *(long **)(this + 0xf0);
  uVar4 = *(ulong *)(this + 0x5d0);
  lVar6 = 0;
  if (plVar1 != (long *)0x0) {
    iVar7 = 3;
LAB_00f8ed34:
    do {
      lVar2 = (**(code **)(*plVar1 + 0x50))();
      lVar6 = lVar2 + lVar6;
      switch(iVar7) {
      case 0:
      case 1:
        goto switchD_00f8ed5c_caseD_0;
      case 2:
        plVar1 = *(long **)(this + 0xf0);
        iVar7 = iVar7 + 1;
        if (plVar1 == (long *)0x0) goto switchD_00f8ed5c_default;
        goto LAB_00f8ed34;
      case 3:
        plVar1 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar1 = *(long **)(this + 0x100);
        break;
      default:
        goto switchD_00f8ed5c_default;
      }
      iVar7 = iVar7 + 1;
    } while (plVar1 != (long *)0x0);
  }
switchD_00f8ed5c_default:
  lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  lVar2 = 0;
  lVar5 = *(long *)(this + -0x8830) - *(long *)(this + -0x8820);
  if (lVar5 == 0 || *(long *)(this + -0x8830) < *(long *)(this + -0x8820)) {
    lVar5 = 0;
  }
  if ((ulong)(lVar3 + lVar6 + lVar5) < uVar4) {
    plVar1 = *(long **)(this + 0xf0);
    lVar5 = *(long *)(this + 0x5d0);
    lVar6 = 0;
    if (plVar1 != (long *)0x0) {
      iVar7 = 3;
LAB_00f8ede4:
      do {
        lVar2 = (**(code **)(*plVar1 + 0x50))();
        lVar6 = lVar2 + lVar6;
        switch(iVar7) {
        case 0:
        case 1:
          goto switchD_00f8ed5c_caseD_0;
        case 2:
          plVar1 = *(long **)(this + 0xf0);
          iVar7 = iVar7 + 1;
          if (plVar1 == (long *)0x0) goto switchD_00f8ee0c_default;
          goto LAB_00f8ede4;
        case 3:
          plVar1 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar1 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f8ee0c_default;
        }
        iVar7 = iVar7 + 1;
      } while (plVar1 != (long *)0x0);
    }
switchD_00f8ee0c_default:
    lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    lVar2 = *(long *)(this + -0x8820) - *(long *)(this + -0x8830);
    if (*(long *)(this + -0x8830) <= *(long *)(this + -0x8820)) {
      lVar2 = 0;
    }
    lVar2 = ((lVar5 - lVar6) - lVar3) + lVar2;
  }
  return lVar2;
switchD_00f8ed5c_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

