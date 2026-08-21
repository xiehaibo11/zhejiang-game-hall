
/* cocos2d::Pass::setGLProgramState(cocos2d::GLProgramState*) */

void __thiscall cocos2d::Pass::setGLProgramState(Pass *this,GLProgramState *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x60);
                    /* try { // try from 00fe0fa8 to 010e0faf has its CatchHandler @ 00fe1058 */
  if (this_00 != (Ref *)param_1) {
                    /* try { // try from 00fe0fb0 to 010e1073 has its CatchHandler @ 00fe0f6c */
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(GLProgramState **)(this + 0x60) = param_1;
    if (param_1 != (GLProgramState *)0x0) {
      Ref::retain((Ref *)param_1);
    }
    this[0x28] = (Pass)0x1;
  }
  return;
}

