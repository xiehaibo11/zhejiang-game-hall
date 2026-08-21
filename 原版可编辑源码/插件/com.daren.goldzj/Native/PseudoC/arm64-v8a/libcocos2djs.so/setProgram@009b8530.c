
/* cocos2d::renderer::State::setProgram(cocos2d::renderer::Program*) */

void __thiscall cocos2d::renderer::State::setProgram(State *this,Program *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0xa0);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Program **)(this + 0xa0) = param_1;
    if (param_1 != (Program *)0x0) {
                    /* try { // try from 009b8568 to 00ab857f has its CatchHandler @ 009b8778 */
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

