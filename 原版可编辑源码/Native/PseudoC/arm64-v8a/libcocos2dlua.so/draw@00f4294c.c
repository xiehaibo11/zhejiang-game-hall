
/* cocos2d::SpriteBatchNode::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::SpriteBatchNode::draw(SpriteBatchNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  BatchCommand *pBVar5;
  
  lVar2 = TextureAtlas::getTotalQuads(*(TextureAtlas **)(this + 0x300));
  if (lVar2 == 0) {
    return;
  }
  puVar1 = *(undefined8 **)(this + 0x180);
                    /* try { // try from 00f42988 to 010429bf has its CatchHandler @ 00f42d08 */
  for (puVar4 = *(undefined8 **)(this + 0x178); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x3e0))();
  }
                    /* WARNING: Load size is inaccurate */
  pBVar5._0_4_ = *(BatchCommand **)(this + 0x170);
  uVar3 = Node::getGLProgram((Node *)this);
                    /* try { // try from 00f429c0 to 010429c7 has its CatchHandler @ 00f42d04 */
  BatchCommand::init(pBVar5._0_4_,(RenderCommand *)(this + 0x310),uVar3,
                     *(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x300),param_2,param_3);
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x310));
  return;
}

