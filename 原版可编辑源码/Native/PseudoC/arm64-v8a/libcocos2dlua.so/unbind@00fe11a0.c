
/* cocos2d::Pass::unbind() */

void __thiscall cocos2d::Pass::unbind(Pass *this)

{
  RenderState::StateBlock::restore(0);
                    /* try { // try from 00fe11bc to 010e11c3 has its CatchHandler @ 00fe1234 */
                    /* try { // try from 00fe11c4 to 010e124f has its CatchHandler @ 00fe118c */
  VertexAttribBinding::unbind(*(VertexAttribBinding **)(this + 0x68));
  return;
}

