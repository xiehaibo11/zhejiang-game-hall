
/* cocos2d::renderer::Technique::Parameter::Parameter(cocos2d::renderer::Technique::Parameter
   const&) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter(Parameter *this,Parameter *param_1)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x11] = (Parameter)0x0;
  this[0x42] = (Parameter)0x0;
  freeValue(this);
  copyValue(this,param_1);
  return;
}

