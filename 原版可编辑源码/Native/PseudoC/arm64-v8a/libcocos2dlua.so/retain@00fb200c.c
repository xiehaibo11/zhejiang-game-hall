
/* cocos2d::Ref::retain() */

void __thiscall cocos2d::Ref::retain(Ref *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

