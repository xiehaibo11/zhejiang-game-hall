
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(bool) */

Value * __thiscall cocos2d::Value::operator=(Value *this,bool param_1)

{
  if (*(int *)(this + 8) != 6) {
    clear(this);
    *(undefined4 *)(this + 8) = 6;
  }
  *this = (Value)param_1;
  return this;
}

