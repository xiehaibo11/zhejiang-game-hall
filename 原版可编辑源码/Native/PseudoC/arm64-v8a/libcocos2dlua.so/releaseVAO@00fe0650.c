
/* cocos2d::MeshCommand::releaseVAO() */

void __thiscall cocos2d::MeshCommand::releaseVAO(MeshCommand *this)

{
  MeshCommand *pMVar1;
  
  pMVar1 = this + 0x38;
  if (*(int *)pMVar1 != 0) {
    (*glDeleteVertexArraysOESEXT)(1,pMVar1);
    *(int *)pMVar1 = 0;
    GL::bindVAO(0);
    return;
  }
  return;
}

