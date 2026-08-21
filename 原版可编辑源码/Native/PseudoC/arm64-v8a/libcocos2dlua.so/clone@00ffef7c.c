
/* covariant return thunk to cocos2d::__String::clone() const */

long __thiscall cocos2d::__String::clone(__String *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create((basic_string *)(this + 8));
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

