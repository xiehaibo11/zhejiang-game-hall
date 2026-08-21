
/* v8::internal::Heap::CanExpandOldGeneration(unsigned long) */

bool __thiscall v8::internal::Heap::CanExpandOldGeneration(Heap *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if (this[0xb46] == (Heap)0x0) {
    lVar2 = 0;
    if (*(long *)(this + 0xe8) != 0) {
      lVar2 = *(long *)(this + 0xf0);
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        uVar3 = 3;
LAB_00f8652c:
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
            if (lVar2 == 0) goto LAB_00f86580;
            goto LAB_00f8652c;
          case 3:
            lVar2 = *(long *)(this + 0xf8);
            break;
          case 4:
            lVar2 = *(long *)(this + 0x100);
          }
          uVar3 = uVar3 + 1;
        } while (lVar2 != 0);
      }
LAB_00f86580:
      lVar1 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
      lVar2 = (**(code **)(**(long **)(this + 0x110) + 0x50))(*(long **)(this + 0x110));
      lVar2 = lVar1 + lVar4 + lVar2;
    }
    if (lVar2 + param_1 <= *(ulong *)(this + 0x58)) {
      return *(long *)(*(long *)(this + 0x820) + 0x50) + param_1 <=
             (ulong)(*(long *)(this + 0x40) * 3 + *(long *)(this + 0x58));
    }
  }
  return false;
}

