
/* cocostudio::Skin::Skin() */

void __thiscall cocostudio::Skin::Skin(Skin *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cocos2d::Sprite::Sprite((Sprite *)this);
  *(undefined ***)this = &PTR__Skin_016c9608;
  *(undefined ***)(this + 0x2f8) = &PTR__Skin_016c9cb0;
  BaseData::BaseData((BaseData *)(this + 0x530));
  *(undefined8 *)(this + 0x590) = 0;
  *(undefined8 *)(this + 0x588) = 0;
  cocos2d::Mat4::Mat4((Mat4 *)(this + 0x598));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x5d8),"");
  cocos2d::QuadCommand::QuadCommand((QuadCommand *)(this + 0x5f0));
  uVar7 = cocos2d::Mat4::IDENTITY._56_8_;
  uVar6 = cocos2d::Mat4::IDENTITY._48_8_;
  uVar5 = cocos2d::Mat4::IDENTITY._32_8_;
  uVar4 = cocos2d::Mat4::IDENTITY._24_8_;
  uVar3 = cocos2d::Mat4::IDENTITY._16_8_;
  uVar2 = cocos2d::Mat4::IDENTITY._8_8_;
  uVar1 = cocos2d::Mat4::IDENTITY._0_8_;
  *(undefined8 *)(this + 0x5c0) = cocos2d::Mat4::IDENTITY._40_8_;
  *(undefined8 *)(this + 0x5b8) = uVar5;
  *(undefined8 *)(this + 0x5d0) = uVar7;
  *(undefined8 *)(this + 0x5c8) = uVar6;
  *(undefined8 *)(this + 0x5a0) = uVar2;
  *(undefined8 *)(this + 0x598) = uVar1;
  *(undefined8 *)(this + 0x5b0) = uVar4;
  *(undefined8 *)(this + 0x5a8) = uVar3;
  return;
}

