
/* cocos2d::UniformValue::UniformValue(cocos2d::Uniform*, cocos2d::GLProgram*) */

void __thiscall
cocos2d::UniformValue::UniformValue(UniformValue *this,Uniform *param_1,GLProgram *param_2)

{
  *(Uniform **)this = param_1;
  *(GLProgram **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
                    /* catch() { ... } // from try @ 00fd66a0 with catch @ 00fd6638 */
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}

