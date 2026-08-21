
/* cocos2d::NavMeshDebugDraw::NavMeshDebugDraw() */

void __thiscall cocos2d::NavMeshDebugDraw::NavMeshDebugDraw(NavMeshDebugDraw *this)

{
  long lVar1;
  StateBlock *this_00;
  GLProgramCache *this_01;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0101d5d4 with catch @ 0101d638 */
                    /* catch() { ... } // from try @ 0101d5f8 with catch @ 0101d640 */
  *(undefined ***)this = &PTR__NavMeshDebugDraw_01727078;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x50));
  *(undefined4 *)(this + 0xa8) = 0;
  this[0xac] = (NavMeshDebugDraw)0x1;
  this[0xb4] = (NavMeshDebugDraw)0x1;
  this_00 = (StateBlock *)RenderState::StateBlock::create();
  *(StateBlock **)(this + 0xa0) = this_00;
  RenderState::StateBlock::setCullFace(this_00,true);
  RenderState::StateBlock::setCullFaceSide(*(StateBlock **)(this + 0xa0),0x405);
                    /* catch() { ... } // from try @ 0101d72c with catch @ 0101d6a0 */
  RenderState::StateBlock::setDepthTest(*(StateBlock **)(this + 0xa0),true);
  RenderState::StateBlock::setBlend(*(StateBlock **)(this + 0xa0),true);
  RenderState::StateBlock::setBlendFunc
            (*(StateBlock **)(this + 0xa0),(BlendFunc *)&BlendFunc::ALPHA_NON_PREMULTIPLIED);
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::retain(*(Ref **)(this + 0xa0));
  }
  this[0x62] = (NavMeshDebugDraw)0x1;
  this[0x60] = (NavMeshDebugDraw)0x1;
  this_01 = (GLProgramCache *)GLProgramCache::getInstance();
                    /* try { // try from 0101d6dc to 0111d6e3 has its CatchHandler @ 0101d788 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_NAME_POSITION_COLOR);
  uVar2 = GLProgramCache::getGLProgram(this_01,(basic_string *)local_60);
                    /* try { // try from 0101d700 to 0111d70f has its CatchHandler @ 0101d7c8 */
  *(undefined8 *)(this + 0x40) = uVar2;
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0101d718 to 0111d72b has its CatchHandler @ 0101d790 */
  glGenBuffers(1,this + 0xb0);
                    /* try { // try from 0101d72c to 0111d827 has its CatchHandler @ 0101d6a0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

