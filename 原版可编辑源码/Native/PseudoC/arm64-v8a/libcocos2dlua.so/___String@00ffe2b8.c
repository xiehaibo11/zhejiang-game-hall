
/* non-virtual thunk to cocos2d::__String::~__String() */

void __thiscall cocos2d::__String::~__String(__String *this)

{
  Ref *this_00;
  
  this_00 = (Ref *)(this + -0x28);
  *(undefined ***)this_00 = &PTR____String_01724cf8;
  *(undefined ***)this = &PTR_clone_01724d30;
  if (((byte)this[8] & 1) == 0) {
    *(undefined2 *)(this + 8) = 0;
  }
  else {
    **(undefined1 **)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    if (((byte)this[8] & 1) != 0) {
      operator_delete(*(void **)(this + 0x18));
    }
  }
  Ref::~Ref(this_00);
  operator_delete(this_00);
  return;
}

