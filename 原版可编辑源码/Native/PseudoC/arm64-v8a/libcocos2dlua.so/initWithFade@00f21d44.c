
/* cocos2d::MotionStreak::initWithFade(float, float, float, cocos2d::Color3B const&,
   cocos2d::Texture2D*) */

undefined8 __thiscall
cocos2d::MotionStreak::initWithFade
          (MotionStreak *this,float param_1,float param_2,float param_3,Color3B *param_4,
          Texture2D *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  Node::setPosition((Node *)this,(Vec2 *)&Vec2::ZERO);
  (**(code **)(*(long *)this + 0x148))(this,&Vec2::ZERO);
  (**(code **)(*(long *)this + 0x1f0))(this,1);
  *(undefined8 *)(this + 0x318) = 0;
  fVar7 = param_3 / 5.0;
  if (param_2 != -1.0) {
    fVar7 = param_2;
  }
  *(undefined2 *)(this + 0x300) = 1;
  *(float *)(this + 800) = param_3;
  *(float *)(this + 0x328) = fVar7 * fVar7;
  *(float *)(this + 0x324) = 1.0 / param_1;
  lVar3 = Director::getInstance();
  fVar7 = *(float *)(lVar3 + 0x118);
  *(undefined4 *)(this + 0x330) = 0;
  uVar1 = (int)(param_1 * (1.0 / fVar7)) + 2;
  uVar6 = (ulong)uVar1;
  *(uint *)(this + 0x32c) = uVar1;
  pvVar4 = malloc(uVar6 << 2);
  *(void **)(this + 0x340) = pvVar4;
  pvVar4 = malloc(uVar6 << 3);
  *(void **)(this + 0x338) = pvVar4;
  pvVar4 = malloc(uVar6 << 4);
  *(void **)(this + 0x348) = pvVar4;
  pvVar4 = malloc(uVar6 << 4);
  *(void **)(this + 0x358) = pvVar4;
  pvVar4 = malloc(uVar6 << 3);
  *(void **)(this + 0x350) = pvVar4;
  *(undefined8 *)(this + 0x310) = 0x30300000302;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
  uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_80,param_5);
  (**(code **)(*(long *)this + 0x310))(this,uVar5);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  (**(code **)(*(long *)this + 0x538))(this,param_5);
  (**(code **)(*(long *)this + 0x4c0))(this,param_4);
  Node::scheduleUpdate((Node *)this);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

