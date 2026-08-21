
/* cocos2d::MotionStreak3D::initWithFade(float, float, float, cocos2d::Color3B const&,
   cocos2d::Texture2D*) */

undefined8 __thiscall
cocos2d::MotionStreak3D::initWithFade
          (MotionStreak3D *this,float param_1,float param_2,float param_3,Color3B *param_4,
          Texture2D *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  Node::setPosition((Node *)this,(Vec2 *)&Vec2::ZERO);
  (**(code **)(*(long *)this + 0x148))(this,&Vec2::ZERO);
  (**(code **)(*(long *)this + 0x1f0))(this,1);
  *(undefined8 *)(this + 0x318) = 0;
  fVar7 = param_3 / 5.0;
  if (param_2 != -1.0) {
    fVar7 = param_2;
  }
  uVar2 = (int)(param_1 * 60.0) + 2;
  uVar6 = (ulong)uVar2;
  *(float *)(this + 0x33c) = 1.0 / param_1;
  this[0x300] = (MotionStreak3D)0x0;
  *(undefined4 *)(this + 800) = 0;
  *(float *)(this + 0x338) = param_3;
  *(undefined4 *)(this + 0x348) = 0;
  *(float *)(this + 0x340) = fVar7 * fVar7;
  *(uint *)(this + 0x344) = uVar2;
  pvVar4 = malloc(uVar6 << 2);
  lVar1 = uVar6 + (ulong)uVar2 * 2;
  *(void **)(this + 0x358) = pvVar4;
  pvVar4 = malloc(lVar1 * 4);
  *(void **)(this + 0x350) = pvVar4;
  pvVar4 = malloc(lVar1 * 8);
  *(void **)(this + 0x360) = pvVar4;
  pvVar4 = malloc(uVar6 << 4);
  *(void **)(this + 0x370) = pvVar4;
  pvVar4 = malloc(uVar6 << 3);
  *(void **)(this + 0x368) = pvVar4;
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
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

