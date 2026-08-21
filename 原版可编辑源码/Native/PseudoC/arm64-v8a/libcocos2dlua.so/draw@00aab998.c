
/* fairygui::FUISprite::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
fairygui::FUISprite::draw(FUISprite *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TrianglesCommand *pTVar6;
  
  if (*(long *)(this + 0x368) == _empty) {
    return;
  }
  if (*(int *)(this + 0x530) != 0) {
    lVar2 = cocos2d::Camera::getVisitingCamera();
    lVar3 = cocos2d::Camera::getDefaultCamera();
    if (lVar2 == 0) {
      this[0x50b] = (FUISprite)0x1;
    }
    else {
      if (((lVar2 == lVar3) && ((param_3 & 1) == 0)) && (*(char *)(lVar2 + 0x429) == '\0')) {
        bVar1 = this[0x50b] != (FUISprite)0x0;
      }
      else {
        bVar1 = cocos2d::Renderer::checkVisibility((Mat4 *)param_1,(Size *)param_2);
      }
      this[0x50b] = (FUISprite)(bVar1 & 1);
      if ((FUISprite)(bVar1 & 1) == (FUISprite)0x0) {
        return;
      }
    }
                    /* WARNING: Load size is inaccurate */
    pTVar6._0_4_ = *(TrianglesCommand **)(this + 0x170);
    uVar5 = *(undefined8 *)(this + 0x368);
    uVar4 = cocos2d::Node::getGLProgramState((Node *)this);
    cocos2d::TrianglesCommand::init
              (pTVar6._0_4_,(RenderCommand *)(this + 0x378),uVar5,uVar4,
               *(undefined8 *)(this + 0x35c),this + 0x548,param_2,param_3);
    cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(this + 0x378));
    return;
  }
  cocos2d::Sprite::draw((Sprite *)this,param_1,param_2,param_3);
  return;
}

