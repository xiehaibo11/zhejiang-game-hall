
/* v8::internal::JSReceiver::SetIdentityHash(int) */

void __thiscall v8::internal::JSReceiver::SetIdentityHash(JSReceiver *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if (((uVar1 == *(uint *)(uVar3 + 0x168)) || (uVar1 == *(uint *)(uVar3 + 0x3b8))) ||
     (uVar1 == *(uint *)(uVar3 + 0x410))) {
    uVar5 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_1 << 1;
  }
  else {
    uVar5 = uVar3 | uVar1;
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0xa4) {
      *(uint *)(uVar5 + 3) = *(uint *)(uVar5 + 3) & 0x800007fe | param_1 << 0xb;
    }
    else {
      *(int *)(uVar5 + 0x17) = param_1 << 1;
    }
  }
  *(int *)(*(long *)this + 3) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)this;
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar3 + 3;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar2,uVar5);
      uVar3 = *(ulong *)this;
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar3 + 3;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar2,uVar5);
      return;
    }
  }
  return;
}

