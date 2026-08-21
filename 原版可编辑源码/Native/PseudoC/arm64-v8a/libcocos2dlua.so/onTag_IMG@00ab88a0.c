
/* fairygui::UBBParser::onTag_IMG(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
    */

void __thiscall
fairygui::UBBParser::onTag_IMG
          (UBBParser *this,basic_string *param_1,bool param_2,basic_string *param_3,
          basic_string *param_4)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  char *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  basic_string *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_148 [8];
  ulong local_140;
  char *local_138;
  byte local_130 [8];
  ulong local_128;
  char *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  Value aVStack_90 [16];
  Value aVStack_80 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined6 uStack_6f;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  void *local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2) goto LAB_00ab8be4;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  pbVar7 = (basic_string *)0x1;
  getTagText(this,(basic_string *)&local_a8,true);
  uVar1 = local_a8 >> 1 & 0x7f;
  if ((local_a8 & 1) != 0) {
    uVar1 = local_a0;
  }
  if (uVar1 != 0) {
    if (*(int *)(this + 8) == 0) {
      std::__ndk1::operator+((__ndk1 *)"<img src=\"",(char *)&local_a8,pbVar7);
                    /* try { // try from 00ab8a7c to 00bb8ac7 has its CatchHandler @ 00ab8a7c
                       catch() { ... } // from try @ 00ab8a7c with catch @ 00ab8a7c
                       catch() { ... } // from try @ 00ab8acc with catch @ 00ab8a7c */
      pbVar7 = (basic_string *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_c0,"\"/>",3);
      uVar9 = *(undefined8 *)(pbVar7 + 0x10);
      uVar8 = *(undefined8 *)(pbVar7 + 1);
      bVar2 = *pbVar7;
      uStack_68 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 8) >> 8);
      local_70 = SUB81(uVar8,0);
      uStack_6f = (undefined6)((ulong)uVar8 >> 8);
      uStack_69 = (undefined1)((ulong)uVar8 >> 0x38);
      *(undefined8 *)pbVar7 = 0;
      *(undefined8 *)(pbVar7 + 8) = 0;
      *(undefined8 *)(pbVar7 + 0x10) = 0;
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
      *(ulong *)(param_4 + 8) = CONCAT71(uStack_68,uStack_69);
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(ulong *)(param_4 + 1) = CONCAT17(uStack_69,CONCAT61(uStack_6f,local_70));
      uStack_68 = 0;
      local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      uStack_6f = 0;
      uStack_69 = 0;
      local_108 = local_b0;
      if ((local_c0 & 1) != 0) goto LAB_00ab8bd0;
    }
    else {
      std::__ndk1::operator+((__ndk1 *)"<img src=\"",(char *)&local_a8,pbVar7);
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_118,"\" width=\"",9);
      local_f0 = (void *)puVar5[2];
      uStack_f8 = puVar5[1];
      local_100 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      cocos2d::Value::Value(aVStack_80,*(int *)(this + 8));
      cocos2d::Value::asString();
      uVar1 = (ulong)(local_130[0] >> 1);
      pcVar4 = (char *)((ulong)local_130 | 1);
      if ((local_130[0] & 1) != 0) {
        uVar1 = local_128;
        pcVar4 = local_120;
      }
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_100,pcVar4,uVar1);
      local_d0 = (void *)puVar5[2];
      uStack_d8 = puVar5[1];
      local_e0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar6 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_e0,"\" height=\"",10);
      local_60 = (void *)puVar6[2];
      uVar9 = *puVar6;
      uStack_68 = (undefined7)puVar6[1];
      uStack_61 = (undefined1)((ulong)puVar6[1] >> 0x38);
      local_70 = SUB81(uVar9,0);
      uStack_6f = (undefined6)((ulong)uVar9 >> 8);
      uStack_69 = (undefined1)((ulong)uVar9 >> 0x38);
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      cocos2d::Value::Value(aVStack_90,*(int *)(this + 0xc));
      cocos2d::Value::asString();
      uVar1 = (ulong)(local_148[0] >> 1);
      pcVar4 = (char *)((ulong)local_148 | 1);
      if ((local_148[0] & 1) != 0) {
        uVar1 = local_140;
        pcVar4 = local_138;
      }
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(&local_70,pcVar4,uVar1);
      local_b0 = (void *)puVar5[2];
      uStack_b8 = puVar5[1];
      local_c0 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      pbVar7 = (basic_string *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_c0,"\"/>",3);
      uVar9 = *(undefined8 *)(pbVar7 + 0x10);
      bVar2 = *pbVar7;
      uStack_50 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 8) >> 8);
      uStack_58 = (undefined7)*(undefined8 *)(pbVar7 + 1);
      local_51 = (undefined1)((ulong)*(undefined8 *)(pbVar7 + 1) >> 0x38);
      *(undefined8 *)pbVar7 = 0;
      *(undefined8 *)(pbVar7 + 8) = 0;
      *(undefined8 *)(pbVar7 + 0x10) = 0;
      if (((byte)*param_4 & 1) == 0) {
        *(undefined2 *)param_4 = 0;
      }
      else {
        **(undefined1 **)(param_4 + 0x10) = 0;
        *(undefined8 *)(param_4 + 8) = 0;
                    /* try { // try from 00ab8ac8 to 00bb8acb has its CatchHandler @ 00ab8b00 */
        if (((byte)*param_4 & 1) != 0) {
                    /* try { // try from 00ab8acc to 00bb8b13 has its CatchHandler @ 00ab8a7c */
          operator_delete(*(void **)(param_4 + 0x10));
          *(undefined8 *)param_4 = 0;
        }
      }
      *param_4 = bVar2;
      *(ulong *)(param_4 + 8) = CONCAT71(uStack_50,local_51);
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(ulong *)(param_4 + 1) = CONCAT17(local_51,uStack_58);
      uStack_50 = 0;
      uStack_58 = 0;
      local_51 = 0;
      if ((local_c0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00ab8ac8 with catch @ 00ab8b00 */
        operator_delete(local_b0);
      }
      if ((local_148[0] & 1) != 0) {
        operator_delete(local_138);
      }
                    /* try { // try from 00ab8b14 to 00bb8cbb has its CatchHandler @ 00ab8b14
                       catch() { ... } // from try @ 00ab8b14 with catch @ 00ab8b14
                       catch() { ... } // from try @ 00ab8d3c with catch @ 00ab8b14 */
      cocos2d::Value::~Value(aVStack_90);
      if (((byte)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if ((local_130[0] & 1) != 0) {
        operator_delete(local_120);
      }
      cocos2d::Value::~Value(aVStack_80);
      if ((local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      if (((byte)local_118[0] & 1) != 0) {
LAB_00ab8bd0:
        operator_delete(local_108);
      }
    }
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00ab8be4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

