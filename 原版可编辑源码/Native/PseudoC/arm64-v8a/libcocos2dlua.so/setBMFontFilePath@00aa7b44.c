
/* fairygui::FUILabel::setBMFontFilePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Vec2 const&,
   float) */

undefined4 fairygui::FUILabel::setBMFontFilePath(basic_string *param_1,Vec2 *param_2,float param_3)

{
  ulong uVar1;
  char *pcVar2;
  basic_string bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  plVar4 = (long *)UIPackage::getItemAssetByURL(param_2,5);
  if (plVar4 == (long *)0x0) {
    cocos2d::Label::reset((Label *)param_1);
    uVar7 = 0;
  }
  else {
    if (ABS(param_3) < 1.1920929e-07) {
                    /* try { // try from 00aa7b8c to 00ba7ba7 has its CatchHandler @ 00aa80ac */
      fVar8 = *(float *)((long)plVar4 + 0x24);
      lVar5 = cocos2d::Director::getInstance();
      *(float *)(param_1 + 0x67c) = (float)(int)fVar8 / *(float *)(lVar5 + 0x1a0);
    }
    if ((0.0 < param_3) && ((char)plVar4[5] != '\0')) {
      *(float *)(param_1 + 0x67c) = param_3;
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_1 + 0x348) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
                    /* try { // try from 00aa7bc8 to 00ba7be3 has its CatchHandler @ 00aa8088 */
      uVar1 = *(ulong *)(param_2 + 8);
      pcVar2 = *(char **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pcVar2 = param_2 + 1;
        uVar1 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x348),pcVar2,uVar1);
    }
    bVar3 = *(basic_string *)((long)plVar4 + 0x29);
    uVar7 = 1;
    *(undefined4 *)(param_1 + 0x308) = 1;
    param_1[0x6c4] = bVar3;
    uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* try { // try from 00aa7c04 to 00ba7c1f has its CatchHandler @ 00aa8060 */
    (**(code **)(*(long *)param_1 + 0x5f0))(param_1,uVar6,0,0);
  }
                    /* try { // try from 00aa7c40 to 00ba7c57 has its CatchHandler @ 00aa8028 */
  return uVar7;
}

