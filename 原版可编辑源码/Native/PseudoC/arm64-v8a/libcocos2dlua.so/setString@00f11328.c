
/* cocos2d::LabelAtlas::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::LabelAtlas::setString(LabelAtlas *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  long lVar4;
  long lVar5;
  Size aSStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  lVar5 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x318));
  if (lVar5 < (long)uVar1) {
    TextureAtlas::resizeCapacity(*(TextureAtlas **)(this + 0x318),uVar1);
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x3f0);
  if (((byte)this[0x3f0] & 1) == 0) {
    *(undefined2 *)this_00 = 0;
  }
  else {
    **(undefined1 **)(this + 0x400) = 0;
    *(undefined8 *)(this + 0x3f8) = 0;
  }
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar3,uVar2);
  }
  (**(code **)(*(long *)this + 0x530))(this);
  Size::Size(aSStack_40,(float)(long)(uVar1 * (long)*(int *)(this + 0x308)),
             (float)*(int *)(this + 0x30c));
  (**(code **)(*(long *)this + 0x160))(this,aSStack_40);
  *(ulong *)(this + 0x330) = uVar1;
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

