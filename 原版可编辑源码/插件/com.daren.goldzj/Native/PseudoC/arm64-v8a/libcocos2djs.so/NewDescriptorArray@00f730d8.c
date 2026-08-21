
/* v8::internal::Factory::NewDescriptorArray(int, int) */

void __thiscall v8::internal::Factory::NewDescriptorArray(Factory *this,int param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong local_28;
  
  uVar2 = (param_2 + param_1) * 0xc + 0x10;
  uVar5 = (ulong)uVar2;
  if ((int)uVar2 < 0x20001) {
    lVar6 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar6 + 0x68);
    if (((uVar5 <= (ulong)(*(long *)(lVar6 + 0x70) - lVar1)) && (FLAG_inline_new != '\0')) &&
       (FLAG_gc_interval == 0)) {
      uVar3 = lVar1 + 1;
      *(long *)(lVar6 + 0x68) = lVar1 + (int)uVar2;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,uVar5,1,1);
      goto LAB_00f7318c;
    }
  }
  uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar5,0,1,0);
LAB_00f7318c:
  *(undefined4 *)(uVar3 - 1) = *(undefined4 *)(this + 0x1e0);
  local_28 = uVar3;
  DescriptorArray::Initialize
            ((DescriptorArray *)&local_28,*(undefined8 *)(this + 0x3b0),*(undefined8 *)(this + 0xa0)
             ,param_1,param_2);
  uVar5 = local_28;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),local_28);
  }
  return;
}

