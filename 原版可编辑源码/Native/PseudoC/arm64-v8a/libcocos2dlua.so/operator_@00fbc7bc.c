
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(float) */

Value * __thiscall cocos2d::Value::operator=(Value *this,float param_1)

{
  if (*(int *)(this + 8) != 4) {
    clear(this);
    *(undefined4 *)(this + 8) = 4;
  }
  *(float *)this = param_1;
  return this;
}

