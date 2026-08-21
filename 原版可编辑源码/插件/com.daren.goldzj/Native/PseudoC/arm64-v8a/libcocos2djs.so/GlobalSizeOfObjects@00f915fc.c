
/* v8::internal::Heap::GlobalSizeOfObjects() */

long __thiscall v8::internal::Heap::GlobalSizeOfObjects(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    iVar5 = 3;
LAB_00f91638:
    do {
      lVar2 = (**(code **)(*plVar1 + 0x50))();
      lVar4 = lVar2 + lVar4;
      switch(iVar5) {
      case 0:
      case 1:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 2:
        plVar1 = *(long **)(this + 0xf0);
        iVar5 = iVar5 + 1;
        if (plVar1 == (long *)0x0) goto switchD_00f91660_default;
        goto LAB_00f91638;
      case 3:
        plVar1 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar1 = *(long **)(this + 0x100);
        break;
      default:
        goto switchD_00f91660_default;
      }
      iVar5 = iVar5 + 1;
    } while (plVar1 != (long *)0x0);
  }
switchD_00f91660_default:
  lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  lVar2 = 0;
  if (*(long *)(this + 0x870) != 0) {
    lVar2 = *(long *)(*(long *)(this + 0x870) + 0x20);
  }
  return lVar3 + lVar4 + lVar2;
}

