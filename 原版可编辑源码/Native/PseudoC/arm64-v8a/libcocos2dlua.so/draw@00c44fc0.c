
/* cocostudio::Skin::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocostudio::Skin::draw(Skin *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  Director *pDVar2;
  Mat4 *pMVar3;
  GLProgramState *pGVar4;
  Texture2D *pTVar5;
  float fVar6;
  Mat4 aMStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar2 = (Director *)cocos2d::Director::getInstance();
  pMVar3 = (Mat4 *)cocos2d::Director::getMatrix(pDVar2,0);
  cocos2d::Mat4::Mat4(aMStack_98,pMVar3);
  fVar6 = *(float *)(this + 0x170);
  pTVar5 = *(Texture2D **)(this + 0x368);
  pGVar4 = (GLProgramState *)cocos2d::Node::getGLProgramState((Node *)this);
  cocos2d::QuadCommand::init
            ((QuadCommand *)(this + 0x5f0),fVar6,pTVar5,pGVar4,(BlendFunc *)(this + 0x35c),
             (V3F_C4B_T2F_Quad *)(this + 0x450),1,aMStack_98,param_3);
  cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(this + 0x5f0));
  cocos2d::Mat4::~Mat4(aMStack_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

