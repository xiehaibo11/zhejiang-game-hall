
/* v8::internal::Heap::GlobalMemoryAvailable() */

long __thiscall v8::internal::Heap::GlobalMemoryAvailable(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  if ((FLAG_global_gc_scheduling == '\0') || (*(long *)(this + 0x870) == 0)) {
    uVar5 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
    lVar4 = MemoryChunkLayout::AllocatableMemoryInDataPage();
    lVar4 = (uVar5 >> 0x12) * lVar4 + 1;
  }
  else {
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      iVar6 = 3;
LAB_00f96f40:
      do {
        lVar2 = (**(code **)(*plVar1 + 0x50))();
        lVar4 = lVar2 + lVar4;
        switch(iVar6) {
        case 0:
        case 1:
          goto switchD_00f96f68_caseD_0;
        case 2:
          plVar1 = *(long **)(this + 0xf0);
          iVar6 = iVar6 + 1;
          if (plVar1 == (long *)0x0) goto switchD_00f96f68_default;
          goto LAB_00f96f40;
        case 3:
          plVar1 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar1 = *(long **)(this + 0x100);
          break;
        default:
          goto switchD_00f96f68_default;
        }
        iVar6 = iVar6 + 1;
      } while (plVar1 != (long *)0x0);
    }
switchD_00f96f68_default:
    lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    lVar2 = 0;
    if (*(long *)(this + 0x870) != 0) {
      lVar2 = *(long *)(*(long *)(this + 0x870) + 0x20);
    }
    uVar5 = *(ulong *)(this + 0x5d8);
    if ((ulong)(lVar3 + lVar4 + lVar2) < uVar5) {
      plVar1 = *(long **)(this + 0xf0);
      if (plVar1 == (long *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        iVar6 = 3;
LAB_00f96ff0:
        do {
          lVar4 = (**(code **)(*plVar1 + 0x50))();
          lVar2 = lVar4 + lVar2;
          switch(iVar6) {
          case 0:
          case 1:
            goto switchD_00f96f68_caseD_0;
          case 2:
            plVar1 = *(long **)(this + 0xf0);
            iVar6 = iVar6 + 1;
            if (plVar1 == (long *)0x0) goto switchD_00f97018_default;
            goto LAB_00f96ff0;
          case 3:
            plVar1 = *(long **)(this + 0xf8);
            break;
          case 4:
            plVar1 = *(long **)(this + 0x100);
            break;
          default:
            goto switchD_00f97018_default;
          }
          iVar6 = iVar6 + 1;
        } while (plVar1 != (long *)0x0);
      }
switchD_00f97018_default:
      lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
      lVar4 = 0;
      if (*(long *)(this + 0x870) != 0) {
        lVar4 = -*(long *)(*(long *)(this + 0x870) + 0x20);
      }
      lVar4 = ((uVar5 - lVar2) - lVar3) + lVar4;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
switchD_00f96f68_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

