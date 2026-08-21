
/* cocos2d::renderer::Technique::Parameter::setTexture(cocos2d::renderer::Texture*) */

void __thiscall
cocos2d::renderer::Technique::Parameter::setTexture(Parameter *this,Texture *param_1)

{
  if (*(Texture **)(this + 0x38) != param_1) {
    freeValue(this);
    *(Texture **)(this + 0x38) = param_1;
    if (param_1 != (Texture *)0x0) {
      Ref::retain((Ref *)param_1);
    }
    *(undefined2 *)(this + 0x30) = 0x1d01;
  }
  return;
}

