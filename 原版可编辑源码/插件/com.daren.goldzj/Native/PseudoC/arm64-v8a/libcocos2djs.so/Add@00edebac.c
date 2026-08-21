
/* v8::internal::CodeCommentsWriter::Add(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
v8::internal::CodeCommentsWriter::Add(CodeCommentsWriter *this,undefined4 param_1,ulong *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_30 [2];
  ulong local_28;
  ulong uStack_20;
  void *local_18;
  
  local_18 = (void *)param_3[2];
  uStack_20 = param_3[1];
  local_28 = *param_3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  puVar2 = *(undefined4 **)(this + 0x10);
  uVar1 = (uint)((byte)local_28 >> 1);
  if ((local_28 & 1) != 0) {
    uVar1 = (uint)uStack_20;
  }
  *(uint *)this = *(int *)this + uVar1 + 9;
  if (puVar2 < *(undefined4 **)(this + 0x18)) {
    *puVar2 = param_1;
    *(void **)(puVar2 + 6) = local_18;
    *(ulong *)(puVar2 + 4) = uStack_20;
    *(ulong *)(puVar2 + 2) = local_28;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x20;
  }
  else {
    local_30[0] = param_1;
    std::__ndk1::
    vector<v8::internal::CodeCommentEntry,std::__ndk1::allocator<v8::internal::CodeCommentEntry>>::
    __push_back_slow_path<v8::internal::CodeCommentEntry>
              ((vector<v8::internal::CodeCommentEntry,std::__ndk1::allocator<v8::internal::CodeCommentEntry>>
                *)(this + 8),(CodeCommentEntry *)local_30);
    if ((local_28 & 1) != 0) {
      operator_delete(local_18);
    }
  }
  return;
}

