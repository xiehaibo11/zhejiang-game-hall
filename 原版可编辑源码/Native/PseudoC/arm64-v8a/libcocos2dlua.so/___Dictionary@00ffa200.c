
/* cocos2d::__Dictionary::~__Dictionary() */

void __thiscall cocos2d::__Dictionary::~__Dictionary(__Dictionary *this)

{
  *(undefined ***)this = &PTR____Dictionary_01724bf8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01724c28;
  removeAllObjects(this);
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

