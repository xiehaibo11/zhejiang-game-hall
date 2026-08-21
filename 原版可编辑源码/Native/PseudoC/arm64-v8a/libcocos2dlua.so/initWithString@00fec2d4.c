
/* cocos2d::Texture2D::initWithString(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, cocos2d::Size
   const&, cocos2d::TextHAlignment, cocos2d::TextVAlignment, bool, int) */

uint __thiscall
cocos2d::Texture2D::initWithString
          (float param_3,Texture2D *this,char *param_1,ulong *param_2,Size *param_4,
          undefined4 param_6,undefined4 param_7,byte param_8,undefined4 param_9)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  ulong local_d8 [2];
  void *local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  Size aSStack_b0 [8];
  undefined2 local_a8;
  undefined1 local_a6;
  ushort local_a5;
  Size aSStack_a0 [8];
  undefined8 local_98;
  undefined1 local_90;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined4 local_88;
  byte local_84;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_d8[1] = 0;
  local_c8 = (void *)0x0;
  local_d8[0] = 0;
  local_c0 = 0;
  local_bc = 1;
  local_b4 = 0;
  Size::Size(aSStack_b0,(Size *)&Size::ZERO);
  local_a5 = 0xff;
  local_a8 = Color3B::WHITE;
  local_a6 = DAT_01792432;
  Size::Size(aSStack_a0);
  local_98 = 0;
  local_84 = 1;
  local_8f = Color3B::BLACK;
  local_8d = DAT_01792444;
  local_8c = 0xff;
  local_88 = 0;
  local_80 = 0;
  local_a5 = local_a5 & 0xff;
  local_90 = 0;
  if (local_d8 != param_2) {
    uVar1 = param_2[1];
    pbVar2 = (byte *)param_2[2];
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = (byte *)((long)param_2 + 1);
      uVar1 = (ulong)(byte)((byte)*param_2 >> 1);
    }
                    /* try { // try from 00fec3dc to 010ec3df has its CatchHandler @ 00fec418 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_d8,(char *)pbVar2,uVar1);
  }
  local_c0 = (int)param_3;
  Size::operator=(aSStack_b0,param_4);
  local_a6 = DAT_01792432;
  local_a8 = Color3B::WHITE;
  local_84 = param_8 & 1;
  local_bc = CONCAT44(param_7,param_6);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fec3dc with catch @ 00fec418
                        */
  local_80 = param_9;
  uVar4 = initWithString(this,param_1,(FontDefinition *)local_d8);
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00fec470 to 010ec473 has its CatchHandler @ 00fec4ac */
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

