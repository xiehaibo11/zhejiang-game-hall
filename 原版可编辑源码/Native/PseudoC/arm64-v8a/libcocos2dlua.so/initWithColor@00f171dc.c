
/* cocos2d::LayerRadialGradient::initWithColor(cocos2d::Color4B const&, cocos2d::Color4B const&,
   float, cocos2d::Vec2 const&, float) */

undefined8 __thiscall
cocos2d::LayerRadialGradient::initWithColor
          (LayerRadialGradient *this,Color4B *param_1,Color4B *param_2,float param_3,Vec2 *param_4,
          float param_5)

{
  long lVar1;
  undefined4 uVar2;
  Director *this_00;
  undefined8 uVar3;
  GLProgram *this_01;
  float fVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  this_00 = (Director *)Director::getInstance();
  uVar3 = Director::getWinSize(this_00);
  (**(code **)(*(long *)this + 0x160))(this,uVar3);
  fVar4 = (float)NEON_ucvtf((uint)(byte)*param_1);
  *(float *)(this + 0x324) = fVar4 / 255.0;
  fVar4 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
  *(float *)(this + 0x328) = fVar4 / 255.0;
  fVar4 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
  *(float *)(this + 0x32c) = fVar4 / 255.0;
  fVar4 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
  *(float *)(this + 0x330) = fVar4 / 255.0;
  *(undefined4 *)(this + 0x31d) = *(undefined4 *)param_1;
  fVar4 = (float)NEON_ucvtf((uint)(byte)*param_2);
  *(float *)(this + 0x338) = fVar4 / 255.0;
  fVar4 = (float)NEON_ucvtf((uint)(byte)param_2[1]);
  *(float *)(this + 0x33c) = fVar4 / 255.0;
  fVar4 = (float)NEON_ucvtf((uint)(byte)param_2[2]);
  *(float *)(this + 0x340) = fVar4 / 255.0;
  fVar4 = (float)NEON_ucvtf((uint)(byte)param_2[3]);
  *(float *)(this + 0x344) = fVar4 / 255.0;
  uVar2 = *(undefined4 *)param_2;
  *(float *)(this + 0x354) = param_5;
  *(float *)(this + 0x350) = param_3;
  *(undefined4 *)(this + 0x334) = uVar2;
  *(undefined8 *)(this + 0x348) = *(undefined8 *)param_4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,GLProgram::SHADER_LAYER_RADIAL_GRADIENT);
  uVar3 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_70);
  (**(code **)(*(long *)this + 0x310))(this,uVar3);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  this_01 = (GLProgram *)Node::getGLProgram((Node *)this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"u_startColor");
  uVar2 = GLProgram::getUniformLocation(this_01,(basic_string *)local_70);
  *(undefined4 *)(this + 0x3d0) = uVar2;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"u_endColor");
  uVar2 = GLProgram::getUniformLocation(this_01,(basic_string *)local_70);
  *(undefined4 *)(this + 0x3d4) = uVar2;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"u_expand");
  uVar2 = GLProgram::getUniformLocation(this_01,(basic_string *)local_70);
  *(undefined4 *)(this + 0x3e0) = uVar2;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"u_radius");
  uVar2 = GLProgram::getUniformLocation(this_01,(basic_string *)local_70);
  *(undefined4 *)(this + 0x3dc) = uVar2;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"u_center");
  uVar2 = GLProgram::getUniformLocation(this_01,(basic_string *)local_70);
  *(undefined4 *)(this + 0x3d8) = uVar2;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

