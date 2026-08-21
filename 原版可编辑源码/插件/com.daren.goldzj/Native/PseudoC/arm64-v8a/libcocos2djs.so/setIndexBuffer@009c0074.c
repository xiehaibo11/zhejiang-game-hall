
/* cocos2d::renderer::InputAssembler::setIndexBuffer(cocos2d::renderer::IndexBuffer*) */

void __thiscall
cocos2d::renderer::InputAssembler::setIndexBuffer(InputAssembler *this,IndexBuffer *param_1)

{
                    /* try { // try from 009c0080 to 00ac0097 has its CatchHandler @ 009c02f4 */
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  *(IndexBuffer **)(this + 8) = param_1;
  if (param_1 != (IndexBuffer *)0x0) {
                    /* try { // try from 009c00a0 to 00ac00ab has its CatchHandler @ 009c02f0 */
    Ref::retain((Ref *)param_1);
    return;
  }
                    /* try { // try from 009c00ac to 00ac00b7 has its CatchHandler @ 009c02ec */
  return;
}

