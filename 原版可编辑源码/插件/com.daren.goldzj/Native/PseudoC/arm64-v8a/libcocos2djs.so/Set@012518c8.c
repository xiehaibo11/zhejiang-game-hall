
/* v8::internal::IndirectFunctionTableEntry::Set(int, unsigned long, v8::internal::Object) */

void __thiscall
v8::internal::IndirectFunctionTableEntry::Set
          (IndirectFunctionTableEntry *this,undefined4 param_1,undefined8 param_2,ulong param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long **)this == (long *)0x0) {
    *(undefined4 *)(*(long *)(**(long **)(this + 8) + 7) + (long)*(int *)(this + 0x10) * 4) =
         param_1;
    *(undefined8 *)(*(long *)(**(long **)(this + 8) + 0xf) + (long)*(int *)(this + 0x10) * 8) =
         param_2;
    uVar3 = **(ulong **)(this + 8);
    uVar2 = *(uint *)(uVar3 + 0x1b);
  }
  else {
    *(undefined4 *)(*(long *)(**(long **)this + 0x43) + (long)*(int *)(this + 0x10) * 4) = param_1;
    *(undefined8 *)(*(long *)(**(long **)this + 0x3b) + (long)*(int *)(this + 0x10) * 8) = param_2;
    uVar3 = **(ulong **)this;
    uVar2 = *(uint *)(uVar3 + 0x37);
  }
  uVar5 = uVar3 & 0xffffffff00000000 | (ulong)uVar2;
  lVar1 = uVar5 + (long)(*(int *)(this + 0x10) << 2);
  *(int *)(lVar1 + 7) = (int)param_4;
  if ((param_4 & 1) != 0) {
    uVar4 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,lVar1,param_4);
      uVar4 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) &&
       ((*(byte *)((uVar3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18) ==
        0)) {
      Heap_GenerationalBarrierSlow(uVar5,lVar1,param_4);
      return;
    }
  }
  return;
}

