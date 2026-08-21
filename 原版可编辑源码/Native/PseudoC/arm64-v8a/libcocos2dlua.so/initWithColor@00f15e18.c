
/* cocos2d::LayerColor::initWithColor(cocos2d::Color4B const&, float, float) */

undefined8 __thiscall
cocos2d::LayerColor::initWithColor(LayerColor *this,Color4B *param_1,float param_2,float param_3)

{
  LayerColor LVar1;
  long lVar2;
  Director *this_00;
  undefined8 uVar3;
  Size local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (Director *)Director::getInstance();
  uVar3 = Director::getWinSize(this_00);
  (**(code **)(*(long *)this + 0x160))(this,uVar3);
  *(undefined8 *)(this + 0x328) = 0x30300000302;
  LVar1 = *(LayerColor *)param_1;
  this[0x21d] = LVar1;
  this[0x21a] = LVar1;
  LVar1 = *(LayerColor *)(param_1 + 1);
  this[0x21e] = LVar1;
  this[0x21b] = LVar1;
  LVar1 = *(LayerColor *)(param_1 + 2);
  this[0x21f] = LVar1;
  this[0x21c] = LVar1;
  LVar1 = *(LayerColor *)(param_1 + 3);
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  this[0x219] = LVar1;
  this[0x218] = LVar1;
  (**(code **)(*(long *)this + 0x528))(this);
  Size::Size(local_60,param_2,param_3);
  (**(code **)(*(long *)this + 0x160))(this,local_60);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_60,GLProgram::SHADER_NAME_POSITION_COLOR_NO_MVP);
  uVar3 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_60);
  (**(code **)(*(long *)this + 0x310))(this,uVar3);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

