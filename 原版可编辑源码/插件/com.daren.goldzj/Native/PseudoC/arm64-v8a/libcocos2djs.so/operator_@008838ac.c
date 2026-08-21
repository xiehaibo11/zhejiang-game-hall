
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(unsigned char) */

Value * __thiscall cocos2d::Value::operator=(Value *this,uchar param_1)

{
  if (*(int *)(this + 8) != 1) {
    clear(this);
    *(undefined4 *)(this + 8) = 1;
  }
  *this = (Value)param_1;
  return this;
}

