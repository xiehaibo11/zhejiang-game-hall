
/* cocos2d::Data::clear() */

void __thiscall cocos2d::Data::clear(Data *this)

{
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

