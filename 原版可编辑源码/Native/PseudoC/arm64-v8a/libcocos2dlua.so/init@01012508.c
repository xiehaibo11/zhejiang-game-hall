
/* cocos2d::Physics3DDebugDrawer::init() */

void __thiscall cocos2d::Physics3DDebugDrawer::init(Physics3DDebugDrawer *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  GLProgramCache *this_00;
  undefined8 uVar4;
  void *pvVar5;
  Configuration *pCVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0101256c with catch @ 0101251c */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,GLProgram::SHADER_NAME_POSITION_COLOR);
  uVar4 = GLProgramCache::getGLProgram(this_00,(basic_string *)local_50);
  *(undefined8 *)(this + 0x80) = uVar4;
  if (((byte)local_50[0] & 1) != 0) {
                    /* try { // try from 01012564 to 0111256b has its CatchHandler @ 010125f0 */
    operator_delete(local_40);
  }
  iVar2 = *(int *)(this + 0x10);
                    /* try { // try from 0101256c to 0111260b has its CatchHandler @ 0101251c */
  if (iVar2 < *(int *)(this + 0x14) + 0x200) {
    iVar1 = iVar2;
    if (iVar2 < 0x201) {
      iVar1 = 0x200;
    }
    *(int *)(this + 0x10) = iVar1 + iVar2;
    pvVar5 = realloc(*(void **)(this + 0x18),(long)(iVar1 + iVar2) * 0x1c);
    *(void **)(this + 0x18) = pvVar5;
  }
  pCVar6 = (Configuration *)Configuration::getInstance();
  uVar7 = Configuration::supportsShareableVAO(pCVar6);
  if ((uVar7 & 1) != 0) {
    (*glGenVertexArraysOESEXT)(1,this + 8);
    GL::bindVAO(*(uint *)(this + 8));
  }
  glGenBuffers(1,this + 0xc);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0xc));
                    /* catch() { ... } // from try @ 01012564 with catch @ 010125f0 */
  glBufferData(0x8892,(long)*(int *)(this + 0x10) * 0x1c,*(undefined8 *)(this + 0x18),0x88e0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0,3,0x1406,0,0x1c,0);
  glEnableVertexAttribArray(1);
  glVertexAttribPointer(1,4,0x1406,0,0x1c,0xc);
  glBindBuffer(0x8892,0);
  pCVar6 = (Configuration *)Configuration::getInstance();
  uVar7 = Configuration::supportsShareableVAO(pCVar6);
  if ((uVar7 & 1) != 0) {
    GL::bindVAO(0);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

