
/* cocos2d::MeshCommand::applyRenderState() */

void __thiscall cocos2d::MeshCommand::applyRenderState(MeshCommand *this)

{
                    /* try { // try from 00fe06cc to 010e06d3 has its CatchHandler @ 00fe0758 */
  GL::bindTexture2D(*(uint *)(this + 0xb0));
  RenderState::StateBlock::bind(*(StateBlock **)(this + 0xa8));
  return;
}

