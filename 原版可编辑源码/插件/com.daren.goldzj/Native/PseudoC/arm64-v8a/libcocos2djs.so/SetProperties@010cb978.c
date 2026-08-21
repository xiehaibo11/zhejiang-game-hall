
/* v8::internal::JSReceiver::SetProperties(v8::internal::HeapObject) */

void __thiscall v8::internal::JSReceiver::SetProperties(JSReceiver *this,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if ((uVar1 & 1) == 0) {
joined_r0x010cb9fc:
    uVar1 = (int)uVar1 >> 1;
  }
  else {
    uVar4 = *(ulong *)this & 0xffffffff00000000;
    uVar2 = uVar4 | uVar1;
    uVar4 = uVar4 | 7;
    if (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0xa4) {
      if ((*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0x7a) &&
         (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0x79)) goto LAB_010cba2c;
      uVar1 = *(uint *)(uVar2 + 0x17);
      goto joined_r0x010cb9fc;
    }
    uVar1 = *(uint *)(uVar2 + 3) >> 0xb & 0xfffff;
  }
  if (uVar1 != 0) {
    uVar2 = param_2 & 0xffffffff00000000;
    iVar5 = (int)param_2;
    if (((iVar5 == *(int *)(uVar2 + 0x168)) || (iVar5 == *(int *)(uVar2 + 0x3b8))) ||
       (iVar5 == *(int *)(uVar2 + 0x410))) {
      param_2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
    }
    else if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0xa4) {
      *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) & 0x800007fe | uVar1 << 0xb;
    }
    else {
      *(uint *)(param_2 + 0x17) = uVar1 << 1;
    }
  }
LAB_010cba2c:
  *(int *)(*(long *)this + 3) = (int)param_2;
  if ((param_2 & 1) != 0) {
    uVar2 = *(ulong *)this;
    uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar3 = uVar2 + 3;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,lVar3,param_2);
      uVar2 = *(ulong *)this;
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      lVar3 = uVar2 + 3;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,lVar3,param_2);
      return;
    }
  }
  return;
}

