
/* cocos2d::SpriteBatchNode::initWithTexture(cocos2d::Texture2D*, long) */

void __thiscall
cocos2d::SpriteBatchNode::initWithTexture(SpriteBatchNode *this,Texture2D *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  TextureAtlas *this_00;
  Texture2D *this_01;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (Texture2D *)0x0) {
    uVar5 = 0;
  }
  else {
    *(undefined8 *)(this + 0x308) = 0x30300000001;
    uVar3 = Texture2D::hasPremultipliedAlpha(param_1);
    if ((uVar3 & 1) == 0) {
      *(undefined8 *)(this + 0x308) = 0x30300000302;
    }
    this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
    if (this_00 != (TextureAtlas *)0x0) {
      TextureAtlas::TextureAtlas(this_00);
    }
    uVar3 = 0x1d;
    if (0 < param_2) {
      uVar3 = param_2;
    }
    *(TextureAtlas **)(this + 0x300) = this_00;
    TextureAtlas::initWithTexture(this_00,param_1,uVar3);
    this_01 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x300));
    uVar4 = Texture2D::hasPremultipliedAlpha(this_01);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      uVar5 = 0x30300000302;
      lVar6 = *(long *)this;
    }
    else {
      uVar5 = 0x30300000001;
      lVar6 = *(long *)this;
    }
    *(undefined8 *)(this + 0x308) = uVar5;
    (**(code **)(lVar6 + 0x4e0))(this,!bVar1);
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::reserve
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x178),uVar3
              );
    std::__ndk1::vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>>::reserve
              ((vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>> *)(this + 0x388),
               uVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
    uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_70,param_1);
    (**(code **)(*(long *)this + 0x310))(this,uVar5);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

