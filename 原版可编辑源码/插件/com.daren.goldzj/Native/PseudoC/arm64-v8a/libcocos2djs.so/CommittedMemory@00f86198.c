
/* v8::internal::Heap::CommittedMemory() */

long __thiscall v8::internal::Heap::CommittedMemory(Heap *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar4 = 0;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    lVar1 = (**(code **)(**(long **)(this + 0xe8) + 0x38))();
    lVar2 = (**(code **)(**(long **)(this + 0x118) + 0x48))(*(long **)(this + 0x118));
    lVar4 = 0;
    if (*(long *)(this + 0xe8) != 0) {
      plVar3 = *(long **)(this + 0xf0);
      if (plVar3 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        uVar7 = 3;
LAB_00f86200:
        do {
          lVar4 = (**(code **)(*plVar3 + 0x38))();
          lVar6 = lVar4 + lVar6;
          if (4 < uVar7) break;
          switch(uVar7) {
          default:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          case 2:
            plVar3 = *(long **)(this + 0xf0);
            uVar7 = uVar7 + 1;
            if (plVar3 == (long *)0x0) goto LAB_00f86258;
            goto LAB_00f86200;
          case 3:
            plVar3 = *(long **)(this + 0xf8);
            break;
          case 4:
            plVar3 = *(long **)(this + 0x100);
          }
          uVar7 = uVar7 + 1;
        } while (plVar3 != (long *)0x0);
      }
LAB_00f86258:
      lVar5 = (**(code **)(**(long **)(this + 0x108) + 0x48))();
      lVar4 = (**(code **)(**(long **)(this + 0x110) + 0x48))(*(long **)(this + 0x110));
      lVar4 = lVar5 + lVar6 + lVar4;
    }
    lVar4 = lVar2 + lVar1 + lVar4;
  }
  return lVar4;
}

