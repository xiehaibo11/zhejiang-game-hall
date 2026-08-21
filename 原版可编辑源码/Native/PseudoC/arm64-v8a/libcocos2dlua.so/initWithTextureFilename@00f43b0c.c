
/* cocos2d::SpriteFrame::initWithTextureFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Rect const&,
   bool, cocos2d::Vec2 const&, cocos2d::Size const&) */

void __thiscall
cocos2d::SpriteFrame::initWithTextureFilename
          (SpriteFrame *this,basic_string *param_1,Rect *param_2,bool param_3,Vec2 *param_4,
          Size *param_5)

{
  basic_string *pbVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Rect aRStack_88 [16];
  long local_78;
  
                    /* try { // try from 00f43b10 to 01043c5f has its CatchHandler @ 00f438f0 */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  uVar4 = (**(code **)(*plVar3 + 0x128))(plVar3,param_1);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    *(undefined8 *)(this + 0x90) = 0;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x98) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar4 = *(ulong *)(param_1 + 8);
      pbVar1 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar1 = param_1 + 1;
        uVar4 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x98),(char *)pbVar1,uVar4);
    }
    Rect::operator=((Rect *)(this + 0x48),(Rect *)param_2);
    fVar10 = *(float *)param_2;
    lVar5 = Director::getInstance();
    fVar7 = *(float *)(lVar5 + 0x1a0);
    fVar11 = *(float *)(param_2 + 4);
    lVar5 = Director::getInstance();
    fVar8 = *(float *)(lVar5 + 0x1a0);
    fVar12 = *(float *)(param_2 + 8);
    lVar5 = Director::getInstance();
    fVar9 = *(float *)(lVar5 + 0x1a0);
    fVar13 = *(float *)(param_2 + 0xc);
    lVar5 = Director::getInstance();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43b08 with catch @ 00f43bf0
                        */
    Rect::Rect(aRStack_88,fVar10 / fVar7,fVar11 / fVar8,fVar12 / fVar9,
               fVar13 / *(float *)(lVar5 + 0x1a0));
    Rect::operator=((Rect *)(this + 0x5c),aRStack_88);
    uVar6 = *(undefined8 *)param_4;
    *(undefined8 *)(this + 0x7c) = uVar6;
    lVar5 = Director::getInstance();
    fVar7 = *(float *)(lVar5 + 0x1a0);
    fVar9 = *(float *)(this + 0x80);
    lVar5 = Director::getInstance();
    fVar8 = *(float *)(lVar5 + 0x1a0);
    *(float *)(this + 0x30) = (float)uVar6 / fVar7;
    *(float *)(this + 0x34) = fVar9 / fVar8;
    Size::operator=((Size *)(this + 0x84),param_5);
    fVar8 = *(float *)(this + 0x84);
    lVar5 = Director::getInstance();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43aa0 with catch @ 00f43c48
                        */
    fVar7 = *(float *)(lVar5 + 0x1a0);
    fVar9 = *(float *)(this + 0x88);
    lVar5 = Director::getInstance();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43940 with catch @ 00f43c5c
                        */
    Size::Size((Size *)aRStack_88,fVar8 / fVar7,fVar9 / *(float *)(lVar5 + 0x1a0));
    Size::operator=((Size *)(this + 0x40),(Size *)aRStack_88);
    *(undefined8 *)(this + 0x38) = 0x7fc000007fc00000;
    this[0x58] = (SpriteFrame)param_3;
    Rect::Rect(aRStack_88,NAN,NAN,NAN,NAN);
    Rect::operator=((Rect *)(this + 0x6c),aRStack_88);
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

