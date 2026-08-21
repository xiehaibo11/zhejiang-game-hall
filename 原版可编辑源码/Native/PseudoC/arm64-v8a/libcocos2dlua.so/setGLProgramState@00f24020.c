
/* cocos2d::Node::setGLProgramState(cocos2d::GLProgramState*) */

void __thiscall cocos2d::Node::setGLProgramState(Node *this,GLProgramState *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x1d8);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(GLProgramState **)(this + 0x1d8) = param_1;
    if (param_1 != (GLProgramState *)0x0) {
      Ref::retain((Ref *)param_1);
      if (*(GLProgramState **)(this + 0x1d8) != (GLProgramState *)0x0) {
        GLProgramState::setNodeBinding(*(GLProgramState **)(this + 0x1d8),this);
        return;
      }
    }
  }
  return;
}

