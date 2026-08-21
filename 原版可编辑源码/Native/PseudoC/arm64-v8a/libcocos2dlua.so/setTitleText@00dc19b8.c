
/* cocos2d::ui::Button::setTitleText(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ui::Button::setTitleText(Button *this,basic_string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  void *__s2;
  basic_string bVar3;
  long lVar4;
  uint uVar5;
  basic_string *pbVar6;
  Label *this_00;
  Button *pBVar7;
  float fVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  void *pvStack_60;
  long local_58;
  
  pBVar7 = (Button *)local_70;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(long **)(this + 0x508) == (long *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"");
  }
  else {
    pbVar6 = (basic_string *)(**(code **)(**(long **)(this + 0x508) + 0x590))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_70,pbVar6);
  }
  bVar3 = *param_1;
                    /* catch() { ... } // from try @ 00dc1854 with catch @ 00dc1a34 */
  uVar1 = (ulong)((byte)local_70[0] >> 1);
  if (((byte)local_70[0] & 1) != 0) {
    uVar1 = local_68;
  }
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  __n = uVar1;
  if (uVar2 <= uVar1) {
    __n = uVar2;
  }
  if (__n == 0) {
LAB_00dc1ae4:
    uVar5 = (uint)(uVar1 < uVar2);
                    /* try { // try from 00dc1af0 to 00ec1c4b has its CatchHandler @ 00dc1a50 */
    if (uVar2 < uVar1) {
      uVar5 = 0xffffffff;
    }
  }
  else {
                    /* try { // try from 00dc1a50 to 00ec1adf has its CatchHandler @ 00dc1a50
                       catch() { ... } // from try @ 00dc1a50 with catch @ 00dc1a50
                       catch() { ... } // from try @ 00dc1af0 with catch @ 00dc1a50
                       catch() { ... } // from try @ 00dc1c5c with catch @ 00dc1a50 */
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    __s2 = (void *)((ulong)local_70 | 1);
    if (((byte)local_70[0] & 1) != 0) {
      __s2 = pvStack_60;
    }
    uVar5 = memcmp(pbVar6,__s2,__n);
    if (uVar5 == 0) goto LAB_00dc1ae4;
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (uVar5 == 0) goto LAB_00dc1b7c;
  this_00 = *(Label **)(this + 0x508);
  if (this_00 == (Label *)0x0) {
    (**(code **)(*(long *)this + 0x6a0))(this);
    this_00 = *(Label **)(this + 0x508);
    if (this_00 != (Label *)0x0) goto LAB_00dc1aa0;
LAB_00dc1aac:
    setTitleFontSize(this,12.0);
  }
  else {
LAB_00dc1aa0:
    fVar8 = (float)Label::getRenderingFontSize(this_00);
    if (fVar8 <= 0.0) goto LAB_00dc1aac;
  }
  (**(code **)(**(long **)(this + 0x508) + 0x588))(*(long **)(this + 0x508),param_1);
  if (this[0x381] == (Button)0x0) {
    if (this[0x387] != (Button)0x0) {
      (**(code **)(*(long *)this + 0x610))(local_70,this);
      (**(code **)(*(long *)this + 0x160))(this,local_70);
    }
  }
  else {
    if (this[0x515] == (Button)0x0) {
      (**(code **)(*(long *)this + 0x6a8))(local_70,this);
    }
    else {
      pBVar7 = this + 0x39c;
                    /* try { // try from 00dc1ae0 to 00ec1aef has its CatchHandler @ 00dc1da8 */
    }
    Node::setContentSize((Node *)this,(Size *)pBVar7);
    (**(code **)(*(long *)this + 0x628))(this);
  }
  (**(code **)(*(long *)this + 0x698))(this);
LAB_00dc1b7c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

