
/* cocos2d::ui::RichText::color3BWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

ulong __thiscall cocos2d::ui::RichText::color3BWithString(RichText *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  long lVar3;
  basic_string *pbVar4;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;
  int iStack_34;
  undefined1 local_30 [8];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 9) {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
                    /* try { // try from 00dd2c34 to 00ed2c3b has its CatchHandler @ 00dd2d10 */
    sscanf((char *)pbVar4,"%*c%2x%2x%2x%2x",&iStack_34,&local_38,&local_3c,auStack_40);
  }
  else if (uVar1 == 7) {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    sscanf((char *)pbVar4,"%*c%2x%2x%2x",&iStack_34,&local_38,&local_3c);
  }
  else {
    if (uVar1 != 4) {
      local_30[2] = DAT_01792432;
      local_30._0_2_ = Color3B::WHITE;
                    /* try { // try from 00dd2c58 to 00ed2c97 has its CatchHandler @ 00dd2d28 */
      goto LAB_00dd2c70;
    }
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    sscanf((char *)pbVar4,"%*c%1x%1x%1x",&iStack_34,&local_38,&local_3c);
    iStack_34 = iStack_34 * 0x11;
    local_38 = local_38 * 0x11;
    local_3c = local_3c * 0x11;
                    /* try { // try from 00dd2be8 to 00ed2bef has its CatchHandler @ 00dd2d20 */
  }
  Color3B::Color3B((Color3B *)local_30,(uchar)iStack_34,(uchar)local_38,(uchar)local_3c);
LAB_00dd2c70:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00dd2c98 to 00ed2d5b has its CatchHandler @ 00dd2a54 */
  return (ulong)(uint3)local_30._0_3_;
}

