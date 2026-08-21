
/* cocos2d::Skybox::initBuffers() */

void __thiscall cocos2d::Skybox::initBuffers(Skybox *this)

{
  long lVar1;
  Configuration *pCVar2;
  ulong uVar3;
  GLProgramState *this_00;
  undefined4 local_80;
  undefined2 local_7c;
  Vec3 aVStack_78 [12];
  Vec3 aVStack_6c [12];
  Vec3 aVStack_60 [12];
  Vec3 aVStack_54 [12];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d4d384 with catch @ 00d4d32c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4d538 with catch @ 00d4d32c
                        */
  pCVar2 = (Configuration *)Configuration::getInstance();
  uVar3 = Configuration::supportsShareableVAO(pCVar2);
  if ((uVar3 & 1) != 0) {
    (*glGenVertexArraysOESEXT)(1,this + 0x2f8);
    GL::bindVAO(*(uint *)(this + 0x2f8));
  }
  Vec3::Vec3(aVStack_78,1.0,-1.0,-1.0);
                    /* try { // try from 00d4d37c to 00e4d383 has its CatchHandler @ 00d4d540 */
                    /* try { // try from 00d4d384 to 00e4d467 has its CatchHandler @ 00d4d32c */
  Vec3::Vec3(aVStack_6c,1.0,1.0,-1.0);
  Vec3::Vec3(aVStack_60,-1.0,1.0,-1.0);
  Vec3::Vec3(aVStack_54,-1.0,-1.0,-1.0);
  glGenBuffers(1,this + 0x2fc);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x2fc));
  glBufferData(0x8892,0x30,aVStack_78,0x88e4);
  local_7c = 0x302;
  local_80 = 0x20100;
  glGenBuffers(1,this + 0x300);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x300));
  glBufferData(0x8893,6,&local_80,0x88e4);
  pCVar2 = (Configuration *)Configuration::getInstance();
  uVar3 = Configuration::supportsShareableVAO(pCVar2);
  if ((uVar3 & 1) != 0) {
    glEnableVertexAttribArray(0);
    this_00 = (GLProgramState *)Node::getGLProgramState((Node *)this);
    GLProgramState::applyAttributes(this_00,false);
    GL::bindVAO(0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00d4d468 to 00e4d48b has its CatchHandler @ 00d4d55c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

