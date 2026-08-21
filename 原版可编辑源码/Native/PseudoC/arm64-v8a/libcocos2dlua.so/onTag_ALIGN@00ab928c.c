
/* fairygui::UBBParser::onTag_ALIGN(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
fairygui::UBBParser::onTag_ALIGN
          (UBBParser *this,basic_string *param_1,bool param_2,basic_string *param_3,
          basic_string *param_4)

{
  undefined8 uVar1;
  basic_string bVar2;
  long lVar3;
  basic_string *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4
           ,"</p>",4);
  }
  else {
    std::__ndk1::operator+((__ndk1 *)"<p align=\"",(char *)param_3,(basic_string *)(ulong)param_2);
    pbVar4 = (basic_string *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (local_60,"\">",2);
    uVar1 = *(undefined8 *)(pbVar4 + 0x10);
    bVar2 = *pbVar4;
    uStack_40 = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 8) >> 8);
    uStack_48 = (undefined7)*(undefined8 *)(pbVar4 + 1);
    local_41 = (undefined1)((ulong)*(undefined8 *)(pbVar4 + 1) >> 0x38);
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
    *(ulong *)(param_4 + 8) = CONCAT71(uStack_40,local_41);
    *(undefined8 *)(param_4 + 0x10) = uVar1;
    *(ulong *)(param_4 + 1) = CONCAT17(local_41,uStack_48);
    uStack_40 = 0;
    uStack_48 = 0;
    local_41 = 0;
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ab9390 to 00bb9503 has its CatchHandler @ 00ab9390
                       catch() { ... } // from try @ 00ab9390 with catch @ 00ab9390
                       catch() { ... } // from try @ 00ab9584 with catch @ 00ab9390 */
  __stack_chk_fail();
}

