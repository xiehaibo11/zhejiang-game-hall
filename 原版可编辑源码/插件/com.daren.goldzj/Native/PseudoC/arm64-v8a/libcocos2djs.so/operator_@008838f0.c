
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(int) */

Value * __thiscall cocos2d::Value::operator=(Value *this,int param_1)

{
  if (*(int *)(this + 8) != 2) {
    clear(this);
    *(undefined4 *)(this + 8) = 2;
  }
  *(int *)this = param_1;
  return this;
}

