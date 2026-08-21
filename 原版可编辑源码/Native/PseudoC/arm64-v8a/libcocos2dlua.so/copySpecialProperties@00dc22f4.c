
/* cocos2d::ui::Button::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::Button::copySpecialProperties(Button *this,Widget *param_1)

{
  Size *this_00;
  int iVar1;
  long lVar2;
  Button *pBVar3;
  Button *pBVar4;
  Size *pSVar5;
  Size *pSVar6;
  Size *pSVar7;
  basic_string *pbVar8;
  long *plVar9;
  pointer_____offset_0x10___ *ppuVar10;
  ulong uVar11;
  code *pcVar12;
  float fVar13;
  ushort local_78;
  undefined1 local_76;
  ushort local_70;
  undefined1 local_6e;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (Widget *)0x0) goto LAB_00dc279c;
  ppuVar10 = &typeinfo;
  pBVar4 = (Button *)__dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0);
  if (pBVar4 == (Button *)0x0) goto LAB_00dc279c;
  this[0x514] = pBVar4[0x514];
  (**(code **)(*(long *)this + 0x680))(this,pBVar4[0x515]);
  Scale9Sprite::copyTo(*(Scale9Sprite **)(pBVar4 + 0x4f0),*(Scale9Sprite **)(this + 0x4f0));
  if (this != pBVar4) {
                    /* try { // try from 00dc2390 to 00ec2397 has its CatchHandler @ 00dc239c */
    ppuVar10 = (pointer_____offset_0x10___ *)(ulong)((byte)pBVar4[0x568] >> 1);
    pBVar3 = pBVar4 + 0x569;
                    /* try { // try from 00dc2398 to 00ec2493 has its CatchHandler @ 00dc1dc8 */
    if (((byte)pBVar4[0x568] & 1) != 0) {
      ppuVar10 = (pointer_____offset_0x10___ *)*(Size **)(pBVar4 + 0x570);
      pBVar3 = *(Button **)(pBVar4 + 0x578);
    }
                    /* catch() { ... } // from try @ 00dc2390 with catch @ 00dc239c */
                    /* catch() { ... } // from try @ 00dc1e2c with catch @ 00dc23a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x568),(char *)pBVar3,(ulong)ppuVar10);
  }
  this_00 = (Size *)(this + 0x548);
                    /* catch() { ... } // from try @ 00dc1e1c with catch @ 00dc23b0 */
  Size::operator=(this_00,(Size *)(pBVar4 + 0x548));
  *(undefined4 *)(this + 0x5b0) = *(undefined4 *)(pBVar4 + 0x5b0);
                    /* catch() { ... } // from try @ 00dc1e10 with catch @ 00dc23c0 */
  this[0x560] = pBVar4[0x560];
  if (((byte)this[0x568] & 1) == 0) {
    uVar11 = (ulong)((byte)this[0x568] >> 1);
                    /* catch() { ... } // from try @ 00dc1fa0 with catch @ 00dc23d0
                       catch() { ... } // from try @ 00dc2278 with catch @ 00dc23d0 */
  }
  else {
                    /* catch() { ... } // from try @ 00dc2230 with catch @ 00dc23d4 */
    uVar11 = *(ulong *)(this + 0x570);
  }
                    /* catch() { ... } // from try @ 00dc200c with catch @ 00dc23d8 */
                    /* catch() { ... } // from try @ 00dc1e88 with catch @ 00dc23dc */
                    /* catch() { ... } // from try @ 00dc1e9c with catch @ 00dc23e0 */
  pSVar5 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
                    /* catch() { ... } // from try @ 00dc2100 with catch @ 00dc23f0 */
  Size::operator=(this_00,pSVar5);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
                    /* catch() { ... } // from try @ 00dc2048 with catch @ 00dc2408 */
  if (this[0x381] == (Button)0x0) {
LAB_00dc243c:
    Widget::updateContentSizeWithTextureSize((Size *)this);
  }
  else if (this[0x515] == (Button)0x0) {
    (**(code **)(*(long *)this + 0x6a8))(&local_70,this);
                    /* catch() { ... } // from try @ 00dc2034 with catch @ 00dc2428 */
    goto LAB_00dc243c;
  }
  this[0x560] = (Button)(uVar11 != 0);
  this[0x563] = (Button)0x1;
  Scale9Sprite::copyTo(*(Scale9Sprite **)(pBVar4 + 0x4f8),*(Scale9Sprite **)(this + 0x4f8));
  if (this != pBVar4) {
    ppuVar10 = (pointer_____offset_0x10___ *)(ulong)((byte)pBVar4[0x580] >> 1);
    pBVar3 = pBVar4 + 0x581;
    if (((byte)pBVar4[0x580] & 1) != 0) {
      ppuVar10 = (pointer_____offset_0x10___ *)*(Size **)(pBVar4 + 0x588);
      pBVar3 = *(Button **)(pBVar4 + 0x590);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x580),(char *)pBVar3,(ulong)ppuVar10);
  }
  pSVar5 = (Size *)(this + 0x550);
                    /* try { // try from 00dc2494 to 00ec251b has its CatchHandler @ 00dc2494
                       catch() { ... } // from try @ 00dc2494 with catch @ 00dc2494
                       catch() { ... } // from try @ 00dc26d8 with catch @ 00dc2494 */
  Size::operator=(pSVar5,(Size *)(pBVar4 + 0x550));
  *(undefined4 *)(this + 0x5b4) = *(undefined4 *)(pBVar4 + 0x5b4);
  this[0x561] = pBVar4[0x561];
  if (((byte)this[0x580] & 1) == 0) {
    uVar11 = (ulong)((byte)this[0x580] >> 1);
  }
  else {
    uVar11 = *(ulong *)(this + 0x588);
  }
  pSVar6 = (Size *)(**(code **)(**(long **)(this + 0x4f8) + 0x168))();
  Size::operator=(pSVar5,pSVar6);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x561] = (Button)(uVar11 != 0);
  this[0x564] = (Button)0x1;
  Scale9Sprite::copyTo(*(Scale9Sprite **)(pBVar4 + 0x500),*(Scale9Sprite **)(this + 0x500));
  if (this != pBVar4) {
                    /* try { // try from 00dc251c to 00ec252b has its CatchHandler @ 00dc2784 */
    ppuVar10 = (pointer_____offset_0x10___ *)(ulong)((byte)pBVar4[0x598] >> 1);
    pBVar3 = pBVar4 + 0x599;
    if (((byte)pBVar4[0x598] & 1) != 0) {
      ppuVar10 = (pointer_____offset_0x10___ *)*(Size **)(pBVar4 + 0x5a0);
      pBVar3 = *(Button **)(pBVar4 + 0x5a8);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x598),(char *)pBVar3,(ulong)ppuVar10);
  }
                    /* try { // try from 00dc2530 to 00ec253f has its CatchHandler @ 00dc2764 */
  pSVar6 = (Size *)(this + 0x558);
  Size::operator=(pSVar6,(Size *)(pBVar4 + 0x558));
  *(undefined4 *)(this + 0x5b8) = *(undefined4 *)(pBVar4 + 0x5b8);
  this[0x562] = pBVar4[0x562];
  if (((byte)this[0x598] & 1) == 0) {
    uVar11 = (ulong)((byte)this[0x598] >> 1);
  }
  else {
    uVar11 = *(ulong *)(this + 0x5a0);
  }
  pSVar7 = (Size *)(**(code **)(**(long **)(this + 0x500) + 0x168))();
  Size::operator=(pSVar6,pSVar7);
  Widget::updateChildrenDisplayedRGBA((Widget *)this);
  this[0x565] = (Button)0x1;
  this[0x562] = (Button)(uVar11 != 0);
  Helper::restrictCapInsetRect((Helper *)(pBVar4 + 0x518),this_00,(Size *)ppuVar10);
  Rect::operator=((Rect *)(this + 0x518),(Rect *)&local_70);
  if (this[0x515] != (Button)0x0) {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x4f0),(Rect *)(this + 0x518));
  }
  Helper::restrictCapInsetRect((Helper *)(pBVar4 + 0x528),pSVar5,(Size *)ppuVar10);
  Rect::operator=((Rect *)(this + 0x528),(Rect *)&local_70);
  if (this[0x515] != (Button)0x0) {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x4f8),(Rect *)(this + 0x528));
  }
  Helper::restrictCapInsetRect((Helper *)(pBVar4 + 0x538),pSVar6,(Size *)ppuVar10);
  Rect::operator=((Rect *)(this + 0x538),(Rect *)&local_70);
                    /* try { // try from 00dc2628 to 00ec262f has its CatchHandler @ 00dc2728 */
  if (this[0x515] != (Button)0x0) {
    Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x500),(Rect *)(this + 0x538));
  }
  if (*(long **)(pBVar4 + 0x508) != (long *)0x0) {
    pbVar8 = (basic_string *)(**(code **)(**(long **)(pBVar4 + 0x508) + 0x590))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,pbVar8);
    setTitleText(this,(basic_string *)&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    plVar9 = *(long **)(pBVar4 + 0x508);
    if (plVar9 == (long *)0x0) {
LAB_00dc26a0:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,"");
    }
    else {
      iVar1 = (int)plVar9[0x61];
      if (iVar1 == 0) {
        pcVar12 = *(code **)(*plVar9 + 0x538);
LAB_00dc26bc:
        pbVar8 = (basic_string *)(*pcVar12)();
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 != 3) goto LAB_00dc26a0;
          pcVar12 = *(code **)(*plVar9 + 0x568);
                    /* try { // try from 00dc269c to 00ec26d7 has its CatchHandler @ 00dc2760 */
          goto LAB_00dc26bc;
        }
        pbVar8 = (basic_string *)(plVar9 + 0x69);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_70,pbVar8);
    }
                    /* try { // try from 00dc26d8 to 00ec279f has its CatchHandler @ 00dc2494 */
    setTitleFontName(this,(basic_string *)&local_70);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (*(Label **)(pBVar4 + 0x508) == (Label *)0x0) {
      fVar13 = -1.0;
    }
    else {
      fVar13 = (float)Label::getRenderingFontSize(*(Label **)(pBVar4 + 0x508));
    }
    setTitleFontSize(this,fVar13);
    if (*(long *)(pBVar4 + 0x508) == 0) {
                    /* catch() { ... } // from try @ 00dc2628 with catch @ 00dc2728 */
      local_70 = Color3B::WHITE;
      local_6e = DAT_01792432;
    }
    else {
      Color3B::Color3B((Color3B *)&local_70,(Color4B *)(*(long *)(pBVar4 + 0x508) + 0x4b0));
    }
    local_76 = local_6e;
    local_78 = local_70;
    plVar9 = *(long **)(this + 0x508);
    if (plVar9 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00dc269c with catch @ 00dc2760 */
      (**(code **)(*(long *)this + 0x6a0))(this);
                    /* catch() { ... } // from try @ 00dc2530 with catch @ 00dc2764 */
      plVar9 = *(long **)(this + 0x508);
    }
    Color4B::Color4B((Color4B *)&local_70,(Color3B *)&local_78,0xff);
                    /* catch() { ... } // from try @ 00dc251c with catch @ 00dc2784 */
    (**(code **)(*plVar9 + 0x598))(plVar9,&local_70);
  }
  this[0x516] = pBVar4[0x516];
  *(undefined4 *)(this + 0x510) = *(undefined4 *)(pBVar4 + 0x510);
LAB_00dc279c:
                    /* try { // try from 00dc27a0 to 00ec2827 has its CatchHandler @ 00dc27a0
                       catch() { ... } // from try @ 00dc27a0 with catch @ 00dc27a0
                       catch() { ... } // from try @ 00dc2838 with catch @ 00dc27a0 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

