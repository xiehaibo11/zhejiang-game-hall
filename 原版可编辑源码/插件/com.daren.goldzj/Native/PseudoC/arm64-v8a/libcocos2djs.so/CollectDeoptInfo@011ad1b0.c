
/* v8::internal::ProfileNode::CollectDeoptInfo(v8::internal::CodeEntry*) */

void __thiscall v8::internal::ProfileNode::CollectDeoptInfo(ProfileNode *this,CodeEntry *param_1)

{
  CpuProfileDeoptFrame *pCVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  ulong local_38;
  
  local_50 = (void *)0x0;
  local_48 = 0;
  local_58 = (void *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  local_60 = *puVar2;
  pCVar1 = *(CpuProfileDeoptFrame **)(puVar2 + 0xd);
  if (pCVar1 == (CpuProfileDeoptFrame *)puVar2[0xe]) {
    local_40[0] = *(undefined4 *)(param_1 + 0x20);
    local_38 = (ulong)(*(uint *)(param_1 + 0x24) &
                      ((int)*(uint *)(param_1 + 0x24) >> 0x1f ^ 0xffffffffU));
    std::__ndk1::vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>>::
    __push_back_slow_path<v8::CpuProfileDeoptFrame>
              ((vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>> *)
               &local_58,(CpuProfileDeoptFrame *)local_40);
  }
  else if ((vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>> *)
           &local_58 !=
           (vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>> *)
           (puVar2 + 0xd)) {
    std::__ndk1::vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>>::
    assign<v8::CpuProfileDeoptFrame*>
              ((vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>> *)
               &local_58,pCVar1,(CpuProfileDeoptFrame *)puVar2[0xe]);
  }
  puVar2 = *(undefined8 **)(this + 0xa0);
  if (puVar2 < *(undefined8 **)(this + 0xa8)) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = local_60;
    puVar2[1] = 0;
    puVar2[1] = local_58;
    puVar2[2] = local_50;
    puVar2[3] = local_48;
    *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 0x20;
    puVar2 = *(undefined8 **)(param_1 + 0x38);
  }
  else {
    std::__ndk1::vector<v8::CpuProfileDeoptInfo,std::__ndk1::allocator<v8::CpuProfileDeoptInfo>>::
    __push_back_slow_path<v8::CpuProfileDeoptInfo>
              ((vector<v8::CpuProfileDeoptInfo,std::__ndk1::allocator<v8::CpuProfileDeoptInfo>> *)
               (this + 0x98),(CpuProfileDeoptInfo *)&local_60);
    if (local_58 != (void *)0x0) {
      local_50 = local_58;
      operator_delete(local_58);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x38);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_0189703a;
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10) = 0xffffffff;
  }
  return;
}

