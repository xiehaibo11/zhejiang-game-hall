
/* WARNING: Removing unreachable block (ram,0x00f3751c) */
/* WARNING: Removing unreachable block (ram,0x00f37504) */
/* WARNING: Removing unreachable block (ram,0x00f3752c) */
/* cocos2d::ProgressTimer::initWithSprite(cocos2d::Sprite*) */

undefined8 __thiscall cocos2d::ProgressTimer::initWithSprite(ProgressTimer *this,Sprite *param_1)

{
  long lVar1;
  Texture2D *pTVar2;
  undefined8 uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f37484 to 01037487 has its CatchHandler @ 00f374c8 */
                    /* try { // try from 00f37488 to 01037503 has its CatchHandler @ 00f37434 */
  if (*(float *)(this + 0x30c) != 0.0) {
    *(undefined4 *)(this + 0x30c) = 0;
    if (*(int *)(this + 0x2f8) == 1) {
      updateBar(this);
    }
    else if (*(int *)(this + 0x2f8) == 0) {
      updateRadial(this);
    }
  }
                    /* catch() { ... } // from try @ 00f37484 with catch @ 00f374c8 */
  *(undefined8 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  local_50[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,local_50);
                    /* catch() { ... } // from try @ 00f37458 with catch @ 00f374e8 */
  *(undefined4 *)(this + 0x2f8) = 0;
  this[0x380] = (ProgressTimer)0x0;
  *(undefined4 *)(this + 0x2fc) = 0x3f000000;
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x304) = uVar3;
  setSprite(this,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_50,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
  pTVar2 = (Texture2D *)(**(code **)(*(long *)param_1 + 0x550))(param_1);
  uVar3 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_50,pTVar2);
  (**(code **)(*(long *)this + 0x310))(this,uVar3);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

