
/* fairygui::UBBParser::onTag_Simple(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
fairygui::UBBParser::onTag_Simple
          (UBBParser *this,basic_string *param_1,bool param_2,basic_string *param_3,
          basic_string *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  basic_string bVar3;
  long lVar4;
  basic_string *pbVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  bVar1 = !param_2;
  if (bVar1) {
    std::__ndk1::operator+((__ndk1 *)0x1447ee8,(char *)param_1,(basic_string *)(ulong)param_2);
                    /* catch() { ... } // from try @ 00ab8cbc with catch @ 00ab8dbc */
    pbVar5 = (basic_string *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (local_70,">",1);
  }
  else {
                    /* catch() { ... } // from try @ 00ab8cf0 with catch @ 00ab8d88 */
    std::__ndk1::operator+((__ndk1 *)&DAT_013cfab3,(char *)param_1,(basic_string *)(ulong)param_2);
                    /* catch() { ... } // from try @ 00ab8d08 with catch @ 00ab8d8c */
    pbVar5 = (basic_string *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       (local_70,">",1);
  }
  uVar2 = *(undefined8 *)(pbVar5 + 0x10);
  bVar3 = *pbVar5;
  uStack_50 = (undefined7)((ulong)*(undefined8 *)(pbVar5 + 8) >> 8);
  uStack_58 = (undefined7)*(undefined8 *)(pbVar5 + 1);
  local_51 = (undefined1)((ulong)*(undefined8 *)(pbVar5 + 1) >> 0x38);
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
  *(ulong *)(param_4 + 8) = CONCAT71(uStack_50,local_51);
  *(undefined8 *)(param_4 + 0x10) = uVar2;
  *(ulong *)(param_4 + 1) = CONCAT17(local_51,uStack_58);
  uStack_50 = 0;
  uStack_58 = 0;
  local_51 = 0;
  if ((bVar1) && (((byte)local_70[0] & 1) != 0)) {
    operator_delete(local_60);
  }
  if ((!bVar1) && (((byte)local_70[0] & 1) != 0)) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

