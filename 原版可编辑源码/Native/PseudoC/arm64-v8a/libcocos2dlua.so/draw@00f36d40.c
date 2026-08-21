
/* cocos2d::ParticleSystemQuad::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ParticleSystemQuad::draw
          (ParticleSystemQuad *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  GLProgramState *pGVar1;
  Texture2D *pTVar2;
  float fVar3;
  
  if (0 < *(int *)(this + 0x478)) {
    fVar3 = *(float *)(this + 0x170);
    pTVar2 = *(Texture2D **)(this + 0x510);
    pGVar1 = (GLProgramState *)Node::getGLProgramState((Node *)this);
    QuadCommand::init((QuadCommand *)(this + 0x550),fVar3,pTVar2,pGVar1,(BlendFunc *)(this + 0x518),
                      *(V3F_C4B_T2F_Quad **)(this + 0x530),(long)*(int *)(this + 0x478),param_2,
                      param_3);
    Renderer::addCommand(param_1,(RenderCommand *)(this + 0x550));
    return;
  }
  return;
}

