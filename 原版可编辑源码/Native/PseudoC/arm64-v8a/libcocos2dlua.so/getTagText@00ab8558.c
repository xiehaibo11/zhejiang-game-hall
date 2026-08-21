
/* fairygui::UBBParser::getTagText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, bool) */

void __thiscall fairygui::UBBParser::getTagText(UBBParser *this,basic_string *param_1,bool param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pcVar5 = strchr((char *)(*(long *)(this + 0x68) + *(long *)(this + 0x70)),0x5b);
  if (pcVar5 != (char *)0x0) {
    pcVar9 = *(char **)(this + 0x68);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,pcVar9);
    uVar6 = *(ulong *)(this + 0x70);
    uVar1 = (ulong)((byte)local_70[0] >> 1);
    if (((byte)local_70[0] & 1) != 0) {
      uVar1 = local_68;
    }
    if (uVar1 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    lVar8 = (long)pcVar5 - (long)pcVar9;
    uVar7 = lVar8 - uVar6;
    pvVar2 = (void *)((ulong)local_70 | 1);
    if (((byte)local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
    uVar3 = uVar1 - uVar6;
    if (uVar7 <= uVar1 - uVar6) {
      uVar3 = uVar7;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1
           ,(char *)((long)pvVar2 + uVar6),uVar3);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (param_2) {
      *(long *)(this + 0x70) = lVar8;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

