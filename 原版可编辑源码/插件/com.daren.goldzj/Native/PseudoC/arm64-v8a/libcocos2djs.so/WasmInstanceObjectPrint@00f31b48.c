
/* v8::internal::WasmInstanceObject::WasmInstanceObjectPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::WasmInstanceObject::WasmInstanceObjectPrint
          (WasmInstanceObject *this,basic_ostream *param_1)

{
  long lVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong local_68;
  undefined2 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"WasmInstanceObject");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - module_object: ",0x13);
  local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x6f);
  internal::operator<<(pbVar2,(Brief *)&local_68);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - exports_object: ",0x14);
  local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x73);
  internal::operator<<(pbVar2,(Brief *)&local_68);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - native_context: ",0x14);
  local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x77);
  internal::operator<<(pbVar2,(Brief *)&local_68);
  uVar3 = *(ulong *)this;
  uVar4 = uVar3 & 0xffffffff00000000;
  if (*(int *)(uVar3 + 0x7b) != *(int *)(uVar4 + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - memory_object: ",0x13);
    local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x7b);
    internal::operator<<(pbVar2,(Brief *)&local_68);
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 & 0xffffffff00000000;
  }
  if (*(int *)(uVar3 + 0x7f) != *(int *)(uVar4 + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - untagged_globals_buffer: ",0x1d);
    local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x7f);
    internal::operator<<(pbVar2,(Brief *)&local_68);
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 & 0xffffffff00000000;
  }
  if (*(int *)(uVar3 + 0x83) != *(int *)(uVar4 + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - tagged_globals_buffer: ",0x1b);
    local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x83);
    internal::operator<<(pbVar2,(Brief *)&local_68);
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 & 0xffffffff00000000;
  }
  if (*(int *)(uVar3 + 0x87) != *(int *)(uVar4 + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - imported_mutable_globals_buffers: ",0x26);
    local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x87);
    internal::operator<<(pbVar2,(Brief *)&local_68);
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 & 0xffffffff00000000;
  }
  if (*(int *)(uVar3 + 0x8b) != *(int *)(uVar4 + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - debug_info: ",0x10);
    local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x8b);
    internal::operator<<(pbVar2,(Brief *)&local_68);
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 & 0xffffffff00000000;
  }
  if (1 < *(int *)((uVar4 | *(uint *)(uVar3 + 0x8f)) + 3)) {
    iVar6 = 0;
    lVar5 = 0;
    do {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - table ",10);
      pbVar2 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(int)lVar5);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2,": ",2);
      local_68 = *(ulong *)this & 0xffffffff00000000;
      local_68 = local_68 |
                 *(uint *)((local_68 | *(uint *)(*(ulong *)this + 0x8f)) + (long)iVar6 + 7);
      internal::operator<<(pbVar2,(Brief *)&local_68);
      lVar5 = lVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (lVar5 < *(int *)((*(ulong *)this & 0xffffffff00000000 |
                              (ulong)*(uint *)(*(ulong *)this + 0x8f)) + 3) >> 1);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - imported_function_refs: ",0x1c);
  local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x2b);
  internal::operator<<(pbVar2,(Brief *)&local_68);
  uVar3 = *(ulong *)this;
  uVar4 = uVar3 & 0xffffffff00000000;
  if (*(int *)(uVar3 + 0x37) != *(int *)(uVar4 + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - indirect_function_table_refs: ",0x22);
    local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x37);
    internal::operator<<(pbVar2,(Brief *)&local_68);
    uVar3 = *(ulong *)this;
    uVar4 = uVar3 & 0xffffffff00000000;
  }
  if (*(int *)(uVar3 + 0x97) != *(int *)(uVar4 + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - managed_native_allocations: ",0x20);
    local_68 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x97);
    internal::operator<<(pbVar2,(Brief *)&local_68);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - memory_start: ",0x12);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0xb));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - memory_size: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(ulong *)(*(long *)this + 0x13));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - memory_mask: ",0x11);
  local_68 = *(undefined8 *)(*(long *)this + 0x1b);
  local_60 = 1;
  internal::operator<<(pbVar2,(AsHex *)&local_68);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - imported_function_targets: ",0x1f);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0x2f));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - globals_start: ",0x13);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0x4f));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - imported_mutable_globals: ",0x1e);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0x57));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - indirect_function_table_size: ",0x22);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(uint *)(*(long *)this + 0x4b));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - indirect_function_table_sig_ids: ",0x25);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0x43));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - indirect_function_table_targets: ",0x25);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0x3b));
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

