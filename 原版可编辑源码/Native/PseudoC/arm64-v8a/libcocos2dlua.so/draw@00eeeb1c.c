
/* cocos2d::AtlasNode::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::AtlasNode::draw(AtlasNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Texture2D *pTVar1;
  GLProgramState *pGVar2;
  V3F_C4B_T2F_Quad *pVVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x170);
  pTVar1 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  pGVar2 = (GLProgramState *)Node::getGLProgramState((Node *)this);
                    /* catch() { ... } // from try @ 00eeeb04 with catch @ 00eeeb6c */
  pVVar3 = (V3F_C4B_T2F_Quad *)TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x318));
  QuadCommand::init((QuadCommand *)(this + 0x340),fVar4,pTVar1,pGVar2,(BlendFunc *)(this + 0x324),
                    pVVar3,*(long *)(this + 0x330),param_2,param_3);
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x340));
  return;
}

