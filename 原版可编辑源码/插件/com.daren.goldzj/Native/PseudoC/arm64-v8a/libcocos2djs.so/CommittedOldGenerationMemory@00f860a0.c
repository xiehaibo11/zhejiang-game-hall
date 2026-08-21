
/* v8::internal::Heap::CommittedOldGenerationMemory() */

long __thiscall v8::internal::Heap::CommittedOldGenerationMemory(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (*(long *)(this + 0xe8) == 0) {
    lVar2 = 0;
  }
  else {
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar5 = 3;
LAB_00f860d4:
      do {
        lVar2 = (**(code **)(*plVar1 + 0x38))();
        lVar4 = lVar2 + lVar4;
        if (4 < uVar5) break;
        switch(uVar5) {
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 2:
          plVar1 = *(long **)(this + 0xf0);
          uVar5 = uVar5 + 1;
          if (plVar1 == (long *)0x0) goto LAB_00f86134;
          goto LAB_00f860d4;
        case 3:
          plVar1 = *(long **)(this + 0xf8);
          break;
        case 4:
          plVar1 = *(long **)(this + 0x100);
        }
        uVar5 = uVar5 + 1;
      } while (plVar1 != (long *)0x0);
    }
LAB_00f86134:
    lVar3 = (**(code **)(**(long **)(this + 0x108) + 0x48))();
    lVar2 = (**(code **)(**(long **)(this + 0x110) + 0x48))(*(long **)(this + 0x110));
    lVar2 = lVar3 + lVar4 + lVar2;
  }
  return lVar2;
}

