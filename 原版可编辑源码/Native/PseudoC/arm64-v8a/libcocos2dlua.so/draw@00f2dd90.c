
/* cocos2d::ParticleBatchNode::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ParticleBatchNode::draw
          (ParticleBatchNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  BatchCommand *pBVar3;
  
  lVar1 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
  if (lVar1 != 0) {
                    /* WARNING: Load size is inaccurate */
    pBVar3._0_4_ = *(BatchCommand **)(this + 0x170);
    uVar2 = Node::getGLProgram((Node *)this);
    BatchCommand::init(pBVar3._0_4_,(RenderCommand *)(this + 0x310),uVar2,
                       *(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x300),this + 0x8c,
                       param_3);
    Renderer::addCommand(param_1,(RenderCommand *)(this + 0x310));
    return;
  }
  return;
}

