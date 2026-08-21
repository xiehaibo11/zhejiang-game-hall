
/* dragonBones::DBCCSprite::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
dragonBones::DBCCSprite::draw(DBCCSprite *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  Mat4 *pMVar3;
  Mat4 *pMVar4;
  undefined8 uVar5;
  TrianglesCommand *pTVar6;
  
                    /* try { // try from 00d9e2a8 to 00e9e527 has its CatchHandler @ 00d9f35c */
  pMVar3 = (Mat4 *)cocos2d::Camera::getVisitingCamera();
  pMVar4 = (Mat4 *)cocos2d::Camera::getDefaultCamera();
  if (((pMVar3 == pMVar4) && ((param_3 & 1) == 0)) && (pMVar3[0x429] == (Mat4)0x0)) {
    bVar1 = this[0x50b] != (DBCCSprite)0x0;
  }
  else {
    bVar1 = _checkVisibility(pMVar4,(Size *)param_2,this + 0x80);
  }
  this[0x50b] = (DBCCSprite)(bVar1 & 1);
  if ((DBCCSprite)(bVar1 & 1) != (DBCCSprite)0x0) {
                    /* WARNING: Load size is inaccurate */
    pTVar6._0_4_ = *(TrianglesCommand **)(this + 0x170);
    uVar2 = cocos2d::Texture2D::getName(*(Texture2D **)(this + 0x368));
    uVar5 = cocos2d::Node::getGLProgramState((Node *)this);
    cocos2d::TrianglesCommand::init
              (pTVar6._0_4_,(RenderCommand *)(this + 0x378),uVar2,uVar5,
               *(undefined8 *)(this + 0x35c),this + 0x4c0,param_2,param_3);
    cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(this + 0x378));
    return;
  }
  return;
}

