
/* v8::internal::PreparseDataBuilder::FinalizeChildren(v8::internal::Zone*) */

void __thiscall
v8::internal::PreparseDataBuilder::FinalizeChildren(PreparseDataBuilder *this,Zone *param_1)

{
  vector<void*,std::__ndk1::allocator<void*>> *this_00;
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  uVar2 = -(ulong)((uint)(*(int *)(this + 0x30) - *(int *)(this + 0x28)) >> 0x1f) &
          0xfffffff800000000 | (ulong)(uint)(*(int *)(this + 0x30) - *(int *)(this + 0x28)) << 3;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)pvVar1) < uVar2) {
    pvVar1 = (void *)Zone::NewExpand(param_1,uVar2);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar2 + (long)pvVar1;
  }
  uVar2 = *(ulong *)(this + 0x28);
  uVar5 = *(long *)(this + 0x30) - uVar2;
  iVar4 = 0;
  if ((int)uVar5 != 0) {
    MemCopy(pvVar1,(void *)(**(long **)(this + 0x20) + uVar2 * 8),
            -(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3);
    uVar2 = *(ulong *)(this + 0x28);
    iVar4 = (int)*(undefined8 *)(this + 0x30) - (int)uVar2;
  }
  this_00 = *(vector<void*,std::__ndk1::allocator<void*>> **)(this + 0x20);
  uVar5 = *(long *)(this_00 + 8) - *(long *)this_00 >> 3;
  if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
    if (uVar2 < uVar5) {
      *(ulong *)(this_00 + 8) = *(long *)this_00 + uVar2 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(this_00,uVar2 - uVar5);
  }
  uVar3 = *(undefined8 *)(this + 0x28);
  *(void **)(this + 0x20) = pvVar1;
  *(long *)(this + 0x28) = (long)iVar4;
  *(undefined8 *)(this + 0x30) = uVar3;
  return;
}

