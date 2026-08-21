
/* v8::internal::Heap::Capacity() */

long __thiscall v8::internal::Heap::Capacity(Heap *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(this + 0xe8) == 0) {
    lVar3 = 0;
  }
  else {
    uVar5 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
    lVar1 = MemoryChunkLayout::AllocatableMemoryInDataPage();
    lVar3 = 0;
    if (*(long *)(this + 0xe8) != 0) {
      lVar3 = *(long *)(this + 0xf0);
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        uVar4 = 3;
LAB_00f85e94:
        do {
          lVar6 = *(long *)(lVar3 + 0xa8) + lVar6;
          if (4 < uVar4) break;
          switch(uVar4) {
          default:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          case 2:
            lVar3 = *(long *)(this + 0xf0);
            uVar4 = uVar4 + 1;
            if (lVar3 == 0) goto LAB_00f85ef0;
            goto LAB_00f85e94;
          case 3:
            lVar3 = *(long *)(this + 0xf8);
            break;
          case 4:
            lVar3 = *(long *)(this + 0x100);
          }
          uVar4 = uVar4 + 1;
        } while (lVar3 != 0);
      }
LAB_00f85ef0:
      lVar2 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
      lVar3 = (**(code **)(**(long **)(this + 0x110) + 0x50))(*(long **)(this + 0x110));
      lVar3 = lVar2 + lVar6 + lVar3;
    }
    lVar3 = lVar3 + (uVar5 >> 0x12) * lVar1;
  }
  return lVar3;
}

