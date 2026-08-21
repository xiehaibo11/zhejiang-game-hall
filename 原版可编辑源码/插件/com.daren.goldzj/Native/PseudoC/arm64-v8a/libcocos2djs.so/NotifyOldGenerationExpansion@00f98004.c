
/* v8::internal::Heap::NotifyOldGenerationExpansion() */

void __thiscall v8::internal::Heap::NotifyOldGenerationExpansion(Heap *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  lVar4 = *(long *)(this + 0x98);
  if ((lVar4 != 0) && (*(int *)(this + 0x1b0) == 0)) {
    uVar5 = 0;
    if (*(long *)(this + 0xe8) != 0) {
      lVar4 = *(long *)(this + 0xf0);
      if (lVar4 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        uVar6 = 3;
LAB_00f98048:
        do {
          lVar7 = *(long *)(lVar4 + 0xa8) + lVar7;
          if (4 < uVar6) break;
          switch(uVar6) {
          default:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          case 2:
            lVar4 = *(long *)(this + 0xf0);
            uVar6 = uVar6 + 1;
            if (lVar4 == 0) goto LAB_00f9809c;
            goto LAB_00f98048;
          case 3:
            lVar4 = *(long *)(this + 0xf8);
            break;
          case 4:
            lVar4 = *(long *)(this + 0x100);
          }
          uVar6 = uVar6 + 1;
        } while (lVar4 != 0);
      }
LAB_00f9809c:
      lVar1 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
      lVar2 = (**(code **)(**(long **)(this + 0x110) + 0x50))(*(long **)(this + 0x110));
      lVar4 = *(long *)(this + 0x98);
      uVar5 = lVar1 + lVar7 + lVar2;
    }
    if ((lVar4 + 0x100000U <= uVar5) && (FLAG_memory_reducer_for_small_heaps != '\0')) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar3 + 0x78))();
      MemoryReducer::NotifyPossibleGarbage(*(Event **)(this + 0x848));
    }
  }
  return;
}

