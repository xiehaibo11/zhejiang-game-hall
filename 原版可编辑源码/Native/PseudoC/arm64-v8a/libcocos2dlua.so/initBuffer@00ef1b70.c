
/* cocos2d::CameraBackgroundSkyBoxBrush::initBuffer() */

void __thiscall cocos2d::CameraBackgroundSkyBoxBrush::initBuffer(CameraBackgroundSkyBoxBrush *this)

{
  long lVar1;
  Configuration *pCVar2;
  ulong uVar3;
  CameraBackgroundSkyBoxBrush *pCVar4;
  CameraBackgroundSkyBoxBrush *pCVar5;
  CameraBackgroundSkyBoxBrush *pCVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  Vec3 aVStack_b8 [12];
  Vec3 aVStack_ac [12];
  Vec3 aVStack_a0 [12];
  Vec3 aVStack_94 [12];
  Vec3 aVStack_88 [12];
  Vec3 aVStack_7c [12];
  Vec3 aVStack_70 [12];
  Vec3 aVStack_64 [12];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pCVar5 = this + 0x34;
  if (*(int *)pCVar5 != 0) {
    glDeleteBuffers(1,pCVar5);
  }
  pCVar4 = this + 0x38;
  if (*(int *)pCVar4 != 0) {
    glDeleteBuffers(1,pCVar4);
  }
  pCVar2 = (Configuration *)Configuration::getInstance();
  uVar3 = Configuration::supportsShareableVAO(pCVar2);
  if (((uVar3 & 1) != 0) && (pCVar6 = this + 0x30, *(int *)pCVar6 != 0)) {
    (*glDeleteVertexArraysOESEXT)(1,pCVar6);
    GL::bindVAO(0);
    *(int *)pCVar6 = 0;
  }
  pCVar2 = (Configuration *)Configuration::getInstance();
  uVar3 = Configuration::supportsShareableVAO(pCVar2);
  if ((uVar3 & 1) != 0) {
    (*glGenVertexArraysOESEXT)(1,this + 0x30);
    GL::bindVAO(*(uint *)(this + 0x30));
  }
  Vec3::Vec3(aVStack_b8,1.0,-1.0,1.0);
  Vec3::Vec3(aVStack_ac,1.0,1.0,1.0);
  Vec3::Vec3(aVStack_a0,-1.0,1.0,1.0);
  Vec3::Vec3(aVStack_94,-1.0,-1.0,1.0);
  Vec3::Vec3(aVStack_88,1.0,-1.0,-1.0);
  Vec3::Vec3(aVStack_7c,1.0,1.0,-1.0);
  Vec3::Vec3(aVStack_70,-1.0,1.0,-1.0);
  Vec3::Vec3(aVStack_64,-1.0,-1.0,-1.0);
  glGenBuffers(1,pCVar5);
  glBindBuffer(0x8892,*(int *)pCVar5);
  glBufferData(0x8892,0x60,aVStack_b8,0x88e4);
  uStack_d8 = 0x406050400040104;
  local_e0 = 0x501000203000102;
  uStack_c8 = 0x3010502050602;
  uStack_d0 = 0x302070206070706;
  local_c0 = 0x7040304;
  glGenBuffers(1,pCVar4);
  glBindBuffer(0x8893,*(int *)pCVar4);
  glBufferData(0x8893,0x24,&local_e0,0x88e4);
  pCVar2 = (Configuration *)Configuration::getInstance();
  uVar3 = Configuration::supportsShareableVAO(pCVar2);
  if ((uVar3 & 1) != 0) {
    glEnableVertexAttribArray(0);
    GLProgramState::applyAttributes(*(GLProgramState **)(this + 0x28),false);
    GL::bindVAO(0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

