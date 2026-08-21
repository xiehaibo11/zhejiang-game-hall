
/* v8::internal::IndirectFunctionTableEntry::clear() */

void __thiscall v8::internal::IndirectFunctionTableEntry::clear(IndirectFunctionTableEntry *this)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long **)this == (long *)0x0) {
    *(undefined4 *)(*(long *)(**(long **)(this + 8) + 7) + (long)*(int *)(this + 0x10) * 4) =
         0xffffffff;
    *(undefined8 *)(*(long *)(**(long **)(this + 8) + 0xf) + (long)*(int *)(this + 0x10) * 8) = 0;
    uVar3 = **(ulong **)(this + 8);
    uVar2 = *(uint *)(uVar3 + 0x1b);
  }
  else {
    *(undefined4 *)(*(long *)(**(long **)this + 0x43) + (long)*(int *)(this + 0x10) * 4) =
         0xffffffff;
    *(undefined8 *)(*(long *)(**(long **)this + 0x3b) + (long)*(int *)(this + 0x10) * 8) = 0;
    uVar3 = **(ulong **)this;
    uVar2 = *(uint *)(uVar3 + 0x37);
  }
  uVar3 = uVar3 & 0xffffffff00000000;
  uVar5 = *(ulong *)(uVar3 + 0xa0);
  uVar6 = uVar3 | uVar2;
  lVar1 = uVar6 + (long)(*(int *)(this + 0x10) << 2);
  *(int *)(lVar1 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) &&
       ((*(byte *)((uVar3 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5);
      return;
    }
  }
  return;
}

