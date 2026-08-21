
/* cocos2d::Data::isNull() const */

bool __thiscall cocos2d::Data::isNull(Data *this)

{
  if (*(long *)this != 0) {
    return *(long *)(this + 8) == 0;
  }
  return true;
}

