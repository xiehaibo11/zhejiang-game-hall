
/* cocos2d::Node::setGLProgram(cocos2d::GLProgram*) */

void __thiscall cocos2d::Node::setGLProgram(Node *this,GLProgram *param_1)

{
  Ref *pRVar1;
  
  pRVar1 = *(Ref **)(this + 0x1d8);
  if (pRVar1 != (Ref *)0x0) {
    if (*(GLProgram **)(pRVar1 + 0xd0) == param_1) {
      return;
    }
    Ref::release(pRVar1);
  }
  pRVar1 = (Ref *)GLProgramState::getOrCreateWithGLProgram(param_1);
  *(Ref **)(this + 0x1d8) = pRVar1;
  Ref::retain(pRVar1);
  GLProgramState::setNodeBinding(*(GLProgramState **)(this + 0x1d8),this);
  return;
}

