
/* cocos2d::renderer::Technique::Parameter::setValue(void*) */

void __thiscall cocos2d::renderer::Technique::Parameter::setValue(Parameter *this,void *param_1)

{
  if (this[0x31] == (Parameter)0x1d) {
    if (*(void **)(this + 0x38) != param_1) {
      freeValue(this);
      *(void **)(this + 0x38) = param_1;
      if (param_1 != (void *)0x0) {
        Ref::retain(param_1);
      }
      *(undefined2 *)(this + 0x30) = 0x1d01;
    }
    return;
  }
  __android_log_print(3,"renderer"," (413): Not support Parameter::setValue with type : %d\n");
  return;
}

