
/* v8::internal::Heap::OldGenerationSizeOfObjects() */

long __thiscall v8::internal::Heap::OldGenerationSizeOfObjects(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar4 = 3;
LAB_00f8e6b0:
    do {
      lVar2 = (**(code **)(*plVar1 + 0x50))();
      lVar3 = lVar2 + lVar3;
      if (4 < uVar4) break;
      switch(uVar4) {
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 2:
        plVar1 = *(long **)(this + 0xf0);
        uVar4 = uVar4 + 1;
        if (plVar1 == (long *)0x0) goto LAB_00f8e708;
        goto LAB_00f8e6b0;
      case 3:
        plVar1 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar1 = *(long **)(this + 0x100);
      }
      uVar4 = uVar4 + 1;
    } while (plVar1 != (long *)0x0);
  }
LAB_00f8e708:
  lVar2 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  return lVar2 + lVar3;
}

