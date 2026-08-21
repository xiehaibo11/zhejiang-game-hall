
/* v8::internal::CodeEntry::GetDeoptInfo() */

void v8::internal::CodeEntry::GetDeoptInfo(void)

{
  long in_x0;
  vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>> *this;
  CpuProfileDeoptFrame *pCVar1;
  undefined8 *in_x8;
  undefined8 *puVar2;
  undefined4 local_20 [2];
  ulong local_18;
  
  this = (vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>> *)
         (in_x8 + 1);
  *(undefined8 *)this = 0;
  in_x8[2] = 0;
  in_x8[3] = 0;
  puVar2 = *(undefined8 **)(in_x0 + 0x38);
  *in_x8 = *puVar2;
  pCVar1 = *(CpuProfileDeoptFrame **)(puVar2 + 0xd);
  if (pCVar1 == (CpuProfileDeoptFrame *)puVar2[0xe]) {
    local_20[0] = *(undefined4 *)(in_x0 + 0x20);
    local_18 = (ulong)(*(uint *)(in_x0 + 0x24) &
                      ((int)*(uint *)(in_x0 + 0x24) >> 0x1f ^ 0xffffffffU));
    std::__ndk1::vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>>::
    __push_back_slow_path<v8::CpuProfileDeoptFrame>(this,(CpuProfileDeoptFrame *)local_20);
  }
  else if (this != (vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>>
                    *)(puVar2 + 0xd)) {
    std::__ndk1::vector<v8::CpuProfileDeoptFrame,std::__ndk1::allocator<v8::CpuProfileDeoptFrame>>::
    assign<v8::CpuProfileDeoptFrame*>(this,pCVar1,(CpuProfileDeoptFrame *)puVar2[0xe]);
    return;
  }
  return;
}

