
/* fairygui::UBBParser::onTag_URL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
fairygui::UBBParser::onTag_URL
          (UBBParser *this,basic_string *param_1,bool param_2,basic_string *param_3,
          basic_string *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  basic_string bVar3;
  long lVar4;
  basic_string *pbVar5;
  undefined8 uVar6;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  undefined6 uStack_5f;
  undefined1 local_59;
  undefined7 uStack_58;
  void *local_50;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4
           ,"</a>",4);
  }
  else {
    uVar1 = (ulong)((byte)*param_3 >> 1);
    if (((byte)*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 == 0) {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      pbVar5 = (basic_string *)0x0;
      getTagText(this,(basic_string *)&local_78,false);
      std::__ndk1::operator+((__ndk1 *)"<a href=\"",(char *)&local_78,pbVar5);
      pbVar5 = (basic_string *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(&local_60,"\" target=\"_blank\">",0x12);
      uVar2 = *(undefined8 *)(pbVar5 + 0x10);
      bVar3 = *pbVar5;
      uStack_40 = (undefined7)((ulong)*(undefined8 *)(pbVar5 + 8) >> 8);
      uStack_48 = (undefined7)*(undefined8 *)(pbVar5 + 1);
      local_41 = (undefined1)((ulong)*(undefined8 *)(pbVar5 + 1) >> 0x38);
      *(undefined8 *)pbVar5 = 0;
      *(undefined8 *)(pbVar5 + 8) = 0;
      *(undefined8 *)(pbVar5 + 0x10) = 0;
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
      *param_4 = bVar3;
      *(ulong *)(param_4 + 8) = CONCAT71(uStack_40,local_41);
      *(undefined8 *)(param_4 + 0x10) = uVar2;
      *(ulong *)(param_4 + 1) = CONCAT17(local_41,uStack_48);
      uStack_40 = 0;
      uStack_48 = 0;
      local_41 = 0;
      if (((byte)local_60 & 1) != 0) {
        operator_delete(local_50);
      }
    }
    else {
      std::__ndk1::operator+((__ndk1 *)"<a href=\"",(char *)param_3,(basic_string *)(ulong)param_2);
      pbVar5 = (basic_string *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_78,"\" target=\"_blank\">",0x12);
      uVar2 = *(undefined8 *)(pbVar5 + 0x10);
      uVar6 = *(undefined8 *)(pbVar5 + 1);
      bVar3 = *pbVar5;
      uStack_58 = (undefined7)((ulong)*(undefined8 *)(pbVar5 + 8) >> 8);
      local_60 = SUB81(uVar6,0);
      uStack_5f = (undefined6)((ulong)uVar6 >> 8);
      local_59 = (undefined1)((ulong)uVar6 >> 0x38);
      *(undefined8 *)pbVar5 = 0;
      *(undefined8 *)(pbVar5 + 8) = 0;
      *(undefined8 *)(pbVar5 + 0x10) = 0;
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
      *param_4 = bVar3;
      *(ulong *)(param_4 + 8) = CONCAT71(uStack_58,local_59);
      *(undefined8 *)(param_4 + 0x10) = uVar2;
      *(ulong *)(param_4 + 1) = CONCAT17(local_59,CONCAT61(uStack_5f,local_60));
      uStack_58 = 0;
      local_60 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      uStack_5f = 0;
      local_59 = 0;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

