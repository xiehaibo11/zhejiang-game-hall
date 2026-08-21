
/* cocos2d::MeshCommand::~MeshCommand() */

void __thiscall cocos2d::MeshCommand::~MeshCommand(MeshCommand *this)

{
  long lVar1;
  MeshCommand *pMVar2;
  
                    /* try { // try from 00fe05c8 to 010e05df has its CatchHandler @ 00fe063c */
  *(undefined ***)this = &PTR__MeshCommand_01724078;
  pMVar2 = this + 0x38;
  if (*(int *)pMVar2 != 0) {
                    /* try { // try from 00fe05e0 to 010e065f has its CatchHandler @ 00fe056c */
    (*glDeleteVertexArraysOESEXT)(1,pMVar2);
    *(int *)pMVar2 = 0;
    GL::bindVAO(0);
  }
  lVar1 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)(this + 0xb8));
  Mat4::~Mat4((Mat4 *)(this + 0x58));
  Vec4::~Vec4((Vec4 *)(this + 0x18));
  RenderCommand::~RenderCommand((RenderCommand *)this);
  return;
}

