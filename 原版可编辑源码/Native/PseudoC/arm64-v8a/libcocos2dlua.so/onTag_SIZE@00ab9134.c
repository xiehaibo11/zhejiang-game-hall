
/* fairygui::UBBParser::onTag_SIZE(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
fairygui::UBBParser::onTag_SIZE
          (UBBParser *this,basic_string *param_1,bool param_2,basic_string *param_3,
          basic_string *param_4)

{
  undefined8 uVar1;
  basic_string bVar2;
  long lVar3;
  basic_string *pbVar4;
  char *pcVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2) {
    pcVar5 = "</font>";
    uVar6 = 7;
  }
  else {
    std::__ndk1::operator+((__ndk1 *)"<font size=\"",(char *)param_3,(basic_string *)(ulong)param_2)
    ;
    pbVar4 = (basic_string *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (local_70,"\">",2);
    uVar1 = *(undefined8 *)(pbVar4 + 0x10);
    bVar2 = *pbVar4;
    uStack_50 = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 8) >> 8);
    uStack_58 = (undefined7)*(undefined8 *)(pbVar4 + 1);
    local_51 = (undefined1)((ulong)*(undefined8 *)(pbVar4 + 1) >> 0x38);
    *(undefined8 *)pbVar4 = 0;
    *(undefined8 *)(pbVar4 + 8) = 0;
    *(undefined8 *)(pbVar4 + 0x10) = 0;
    if (((byte)*param_4 & 1) == 0) {
      *(undefined2 *)param_4 = 0;
    }
    else {
      **(undefined1 **)(param_4 + 0x10) = 0;
      *(undefined8 *)(param_4 + 8) = 0;
      if (((byte)*param_4 & 1) != 0) {
        operator_delete(*(void **)(param_4 + 0x10));
        *(undefined8 *)param_4 = 0;
      }
    }
    *param_4 = bVar2;
    *(ulong *)(param_4 + 8) = CONCAT71(uStack_50,local_51);
    *(undefined8 *)(param_4 + 0x10) = uVar1;
    *(ulong *)(param_4 + 1) = CONCAT17(local_51,uStack_58);
    uStack_50 = 0;
    uStack_58 = 0;
    local_51 = 0;
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    param_4 = (basic_string *)(this + 0x28);
    if (param_4 == param_3) goto LAB_00ab9244;
    uVar6 = *(ulong *)(param_3 + 8);
    pcVar5 = *(char **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pcVar5 = (char *)(param_3 + 1);
      uVar6 = (ulong)((byte)*param_3 >> 1);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4,
         pcVar5,uVar6);
LAB_00ab9244:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

