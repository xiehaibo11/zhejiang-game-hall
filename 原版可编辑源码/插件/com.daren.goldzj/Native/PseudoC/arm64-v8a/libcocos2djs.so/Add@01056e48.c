
/* v8::internal::RuntimeCallStatEntries::Add(v8::internal::RuntimeCallCounter*) */

void __thiscall
v8::internal::RuntimeCallStatEntries::Add(RuntimeCallStatEntries *this,RuntimeCallCounter *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    local_18 = *(undefined8 *)(param_1 + 0x10);
    local_58 = *(undefined8 *)param_1;
    uStack_50 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_18);
    uStack_38 = 0x4059000000000000;
    local_40 = 0x4059000000000000;
    puVar1 = *(undefined8 **)(this + 0x18);
    if (puVar1 < *(undefined8 **)(this + 0x20)) {
      puVar1[4] = 0x4059000000000000;
      puVar1[1] = uStack_50;
      *puVar1 = local_58;
      puVar1[3] = 0x4059000000000000;
      puVar1[2] = lVar2;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x28;
    }
    else {
      lStack_48 = lVar2;
      std::__ndk1::
      vector<v8::internal::RuntimeCallStatEntries::Entry,std::__ndk1::allocator<v8::internal::RuntimeCallStatEntries::Entry>>
      ::__push_back_slow_path<v8::internal::RuntimeCallStatEntries::Entry>
                ((vector<v8::internal::RuntimeCallStatEntries::Entry,std::__ndk1::allocator<v8::internal::RuntimeCallStatEntries::Entry>>
                  *)(this + 0x10),(Entry *)&local_58);
    }
    *(long *)(this + 8) = *(long *)(this + 8) + *(long *)(param_1 + 0x10);
    *(long *)this = *(long *)this + *(long *)(param_1 + 8);
  }
  return;
}

