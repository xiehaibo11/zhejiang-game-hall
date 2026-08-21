
/* cocos2d::renderer::State::setIndexBuffer(cocos2d::renderer::IndexBuffer*) */

void __thiscall cocos2d::renderer::State::setIndexBuffer(State *this,IndexBuffer *param_1)

{
  Ref *this_00;
  
                    /* try { // try from 009b842c to 00ab850f has its CatchHandler @ 009b829c */
  this_00 = *(Ref **)(this + 0x80);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(IndexBuffer **)(this + 0x80) = param_1;
    if (param_1 != (IndexBuffer *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

