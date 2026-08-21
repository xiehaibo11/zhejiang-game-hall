
/* cocos2d::__String::~__String() */

void __thiscall cocos2d::__String::~__String(__String *this)

{
  *(undefined ***)this = &PTR____String_01724cf8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01724d30;
  if (((byte)this[0x30] & 1) == 0) {
    *(undefined2 *)(this + 0x30) = 0;
  }
  else {
    **(undefined1 **)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    if (((byte)this[0x30] & 1) != 0) {
      operator_delete(*(void **)(this + 0x40));
    }
  }
  Ref::~Ref((Ref *)this);
  return;
}

