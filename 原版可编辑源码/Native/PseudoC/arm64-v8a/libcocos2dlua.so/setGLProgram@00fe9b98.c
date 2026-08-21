
/* cocos2d::Texture2D::setGLProgram(cocos2d::GLProgram*) */

void __thiscall cocos2d::Texture2D::setGLProgram(Texture2D *this,GLProgram *param_1)

{
  if (param_1 != (GLProgram *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x48));
  }
  *(GLProgram **)(this + 0x48) = param_1;
  return;
}

