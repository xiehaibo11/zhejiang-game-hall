
/* rapidxml::xml_sax2_handler::xmlSAX3Attr(char const*, unsigned long, char const*, unsigned long)
    */

void rapidxml::xml_sax2_handler::xmlSAX3Attr
               (char *param_1,ulong param_2,char *param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  char *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar1 = *(ulong **)(param_1 + 0x20);
  local_48 = (char *)param_4;
  pcStack_40 = (char *)param_2;
  if (puVar1 == *(ulong **)(param_1 + 0x28)) {
    std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
    __push_back_slow_path<char_const*const&>
              ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)(param_1 + 0x18),
               &pcStack_40);
    puVar3 = *(ulong **)(param_1 + 0x20);
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = param_2;
    *(ulong **)(param_1 + 0x20) = puVar3;
  }
  if (puVar3 == *(ulong **)(param_1 + 0x28)) {
    std::__ndk1::vector<char_const*,std::__ndk1::allocator<char_const*>>::
    __push_back_slow_path<char_const*const&>
              ((vector<char_const*,std::__ndk1::allocator<char_const*>> *)(param_1 + 0x18),&local_48
              );
  }
  else {
    *puVar3 = (ulong)local_48;
    *(ulong **)(param_1 + 0x20) = puVar3 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

