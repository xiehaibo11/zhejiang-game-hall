
/* spine::SkeletonRenderer::initialize() */

void __thiscall spine::SkeletonRenderer::initialize(SkeletonRenderer *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new__(4000);
                    /* try { // try from 00d5100c to 00e51013 has its CatchHandler @ 00d510e0 */
  *(void **)(this + 0x378) = pvVar2;
  uVar3 = spSkeletonClipping_create();
  *(undefined8 *)(this + 0x398) = uVar3;
                    /* try { // try from 00d51018 to 00e51023 has its CatchHandler @ 00d510dc */
  *(undefined8 *)(this + 0x370) = 0x30300000001;
  (**(code **)(*(long *)this + 0x4e0))(this,1);
                    /* try { // try from 00d51044 to 00e5106f has its CatchHandler @ 00d510e8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            (local_40,cocos2d::GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
  uVar3 = cocos2d::GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_40);
  (**(code **)(*(long *)this + 0x310))(this,uVar3);
                    /* try { // try from 00d51070 to 00e51103 has its CatchHandler @ 00d50dd8 */
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

