
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(double) */

Value * __thiscall cocos2d::Value::operator=(Value *this,double param_1)

{
  if (*(int *)(this + 8) != 5) {
    clear(this);
    *(undefined4 *)(this + 8) = 5;
  }
  *(double *)this = param_1;
  return this;
}

