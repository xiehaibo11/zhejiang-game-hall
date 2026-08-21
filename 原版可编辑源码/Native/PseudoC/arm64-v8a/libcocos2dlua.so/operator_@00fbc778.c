
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

Value * __thiscall cocos2d::Value::operator=(Value *this,uint param_1)

{
  if (*(int *)(this + 8) != 3) {
    clear(this);
    *(undefined4 *)(this + 8) = 3;
  }
  *(uint *)this = param_1;
  return this;
}

