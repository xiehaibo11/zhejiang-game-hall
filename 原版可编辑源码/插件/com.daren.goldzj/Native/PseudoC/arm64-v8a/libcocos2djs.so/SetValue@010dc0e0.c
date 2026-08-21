
/* v8::internal::JSDate::SetValue(v8::internal::Object, bool) */

void __thiscall v8::internal::JSDate::SetValue(JSDate *this,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  *(int *)(*(long *)this + 0xb) = (int)param_2;
  if ((param_2 & 1) != 0) {
    uVar1 = *(ulong *)this;
    uVar4 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar2 = uVar1 + 0xb;
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_2);
      uVar1 = *(ulong *)this;
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffc0000 | 8);
      lVar2 = uVar1 + 0xb;
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_2);
      uVar1 = *(ulong *)this;
      goto joined_r0x010dc1a8;
    }
  }
  uVar1 = *(ulong *)this;
joined_r0x010dc1a8:
  if ((param_3 & 1) == 0) {
    puVar5 = (undefined4 *)(uVar1 + 0x2b);
    uVar3 = 0xfffffffe;
  }
  else {
    uVar3 = *(undefined4 *)((uVar1 & 0xffffffff00000000) + 0x430);
    *(undefined4 *)(uVar1 + 0x2b) = uVar3;
    *(undefined4 *)(*(long *)this + 0xf) = uVar3;
    *(undefined4 *)(*(long *)this + 0x13) = uVar3;
    *(undefined4 *)(*(long *)this + 0x17) = uVar3;
    *(undefined4 *)(*(long *)this + 0x1f) = uVar3;
    *(undefined4 *)(*(long *)this + 0x23) = uVar3;
    *(undefined4 *)(*(long *)this + 0x27) = uVar3;
    puVar5 = (undefined4 *)(*(long *)this + 0x1b);
  }
  *puVar5 = uVar3;
  return;
}

