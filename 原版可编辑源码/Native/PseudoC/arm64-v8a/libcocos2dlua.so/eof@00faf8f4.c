
/* cocos2d::Properties::eof() */

bool __thiscall cocos2d::Properties::eof(Properties *this)

{
  return *(long *)(*(long *)(this + 8) + 8) <= **(long **)this;
}

