
/* v8::internal::EternalHandles::Create(v8::internal::Isolate*, v8::internal::Object, int*) */

void __thiscall
v8::internal::EternalHandles::Create(EternalHandles *this,long param_1,ulong param_3,int *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *local_48;
  
  if ((int)param_3 != 0) {
    uVar2 = *(uint *)this;
    uVar5 = (ulong)uVar2 & 0xff;
    if ((int)uVar5 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xa8);
      local_48 = operator_new__(0x800);
      lVar4 = 0;
      do {
        puVar1 = (undefined8 *)((long)local_48 + lVar4);
        lVar4 = lVar4 + 0x20;
        puVar1[1] = uVar6;
        *puVar1 = uVar6;
        puVar1[3] = uVar6;
        puVar1[2] = uVar6;
      } while (lVar4 != 0x800);
      if (*(undefined8 **)(this + 0x10) == *(undefined8 **)(this + 0x18)) {
        std::__ndk1::vector<unsigned_long*,std::__ndk1::allocator<unsigned_long*>>::
        __push_back_slow_path<unsigned_long*const&>
                  ((vector<unsigned_long*,std::__ndk1::allocator<unsigned_long*>> *)(this + 8),
                   &local_48);
      }
      else {
        **(undefined8 **)(this + 0x10) = local_48;
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
      }
    }
    *(ulong *)(*(long *)(*(long *)(this + 8) + (long)((int)uVar2 >> 8) * 8) + uVar5 * 8) = param_3;
    if (((param_3 & 1) != 0) && ((*(byte *)((param_3 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
      if (*(undefined4 **)(this + 0x28) == *(undefined4 **)(this + 0x30)) {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                  ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x20),(int *)this);
      }
      else {
        **(undefined4 **)(this + 0x28) = *(undefined4 *)this;
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 4;
      }
    }
    iVar3 = *(int *)this;
    *(int *)this = iVar3 + 1;
    *param_4 = iVar3;
  }
  return;
}

