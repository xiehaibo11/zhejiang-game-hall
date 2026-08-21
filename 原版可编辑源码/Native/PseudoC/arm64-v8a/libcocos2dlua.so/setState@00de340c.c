
/* cocos2d::ui::Scale9Sprite::setState(cocos2d::ui::Scale9Sprite::State) */

void __thiscall cocos2d::ui::Scale9Sprite::setState(Scale9Sprite *this,int param_2)

{
  long lVar1;
  Texture2D *pTVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00de3418 to 00ee3427 has its CatchHandler @ 00de4900 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00de3428 to 00ee3437 has its CatchHandler @ 00de48f0 */
  if (*(int *)(this + 0x540) == param_2) goto LAB_00de34e8;
                    /* try { // try from 00de3438 to 00ee3447 has its CatchHandler @ 00de48e0 */
  *(int *)(this + 0x540) = param_2;
                    /* try { // try from 00de3448 to 00ee3457 has its CatchHandler @ 00de48d0 */
  if (param_2 == 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,GLProgram::SHADER_NAME_POSITION_GRAYSCALE);
    pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
    uVar3 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_50,pTVar2);
LAB_00de34b4:
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    if (param_2 == 0) {
                    /* try { // try from 00de3458 to 00ee3463 has its CatchHandler @ 00de48cc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP)
      ;
      pTVar2 = (Texture2D *)(**(code **)(*(long *)this + 0x550))(this);
      uVar3 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_50,pTVar2);
      goto LAB_00de34b4;
    }
    uVar3 = 0;
  }
  (**(code **)(*(long *)this + 0x310))(this,uVar3);
  *(int *)(this + 0x540) = param_2;
LAB_00de34e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

