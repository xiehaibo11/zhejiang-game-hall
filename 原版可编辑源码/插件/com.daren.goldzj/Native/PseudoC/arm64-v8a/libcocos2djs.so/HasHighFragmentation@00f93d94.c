
/* v8::internal::Heap::HasHighFragmentation() */

bool __thiscall v8::internal::Heap::HasHighFragmentation(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = 3;
LAB_00f93dd4:
    do {
      lVar2 = (**(code **)(*plVar1 + 0x50))();
      lVar6 = lVar2 + lVar6;
      switch(iVar5) {
      case 0:
      case 1:
        goto switchD_00f93dfc_caseD_0;
      case 2:
        plVar1 = *(long **)(this + 0xf0);
        iVar5 = iVar5 + 1;
        if (plVar1 == (long *)0x0) goto switchD_00f93dfc_default;
        goto LAB_00f93dd4;
      case 3:
        plVar1 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar1 = *(long **)(this + 0x100);
        break;
      default:
        goto switchD_00f93dfc_default;
      }
      iVar5 = iVar5 + 1;
    } while (plVar1 != (long *)0x0);
  }
switchD_00f93dfc_default:
  lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  lVar2 = 0;
  if (*(long *)(this + 0xe8) != 0) {
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      uVar8 = 3;
LAB_00f93e58:
      do {
        lVar2 = (**(code **)(*plVar1 + 0x38))();
        lVar7 = lVar2 + lVar7;
        if (4 < uVar8) break;
        switch(uVar8) {
        default:
          goto switchD_00f93dfc_caseD_0;
        case 2:
          plVar1 = *(long **)(this + 0xf0);
          uVar8 = uVar8 + 1;
          if (plVar1 == (long *)0x0) goto LAB_00f93eb0;
          goto LAB_00f93e58;
        case 3:
          plVar1 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar1 = *(long **)(this + 0x100);
        }
        uVar8 = uVar8 + 1;
      } while (plVar1 != (long *)0x0);
    }
LAB_00f93eb0:
    lVar4 = (**(code **)(**(long **)(this + 0x108) + 0x48))();
    lVar2 = (**(code **)(**(long **)(this + 0x110) + 0x48))(*(long **)(this + 0x110));
    lVar2 = lVar4 + lVar7 + lVar2;
  }
  return lVar3 + lVar6 + 0x1000000U < (ulong)(lVar2 - (lVar3 + lVar6));
switchD_00f93dfc_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

