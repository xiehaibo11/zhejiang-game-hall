
/* non-virtual thunk to cocos2d::__Dictionary::~__Dictionary() */

void __thiscall cocos2d::__Dictionary::~__Dictionary(__Dictionary *this)

{
  __Dictionary *this_00;
  
  this_00 = this + -0x28;
  *(undefined ***)this_00 = &PTR____Dictionary_01724bf8;
  *(undefined ***)this = &PTR_clone_01724c28;
  removeAllObjects(this_00);
  Ref::~Ref((Ref *)this_00);
  operator_delete(this_00);
  return;
}

