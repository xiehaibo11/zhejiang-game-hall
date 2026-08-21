
/* v8::internal::Heap::OldGenerationCapacity() */

long __thiscall v8::internal::Heap::OldGenerationCapacity(Heap *this)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if (*(long *)(this + 0xe8) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(this + 0xf0);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar3 = 3;
LAB_00f85f84:
      do {
        lVar4 = *(long *)(lVar2 + 0xa8) + lVar4;
        if (4 < uVar3) break;
        switch(uVar3) {
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 2:
          lVar2 = *(long *)(this + 0xf0);
          uVar3 = uVar3 + 1;
          if (lVar2 == 0) goto LAB_00f85fe0;
          goto LAB_00f85f84;
        case 3:
          lVar2 = *(long *)(this + 0xf8);
          break;
        case 4:
          lVar2 = *(long *)(this + 0x100);
        }
        uVar3 = uVar3 + 1;
      } while (lVar2 != 0);
    }
LAB_00f85fe0:
    lVar1 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    lVar2 = (**(code **)(**(long **)(this + 0x110) + 0x50))(*(long **)(this + 0x110));
    lVar2 = lVar1 + lVar4 + lVar2;
  }
  return lVar2;
}

