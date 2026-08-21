
/* fairygui::FUISprite::~FUISprite() */

void __thiscall fairygui::FUISprite::~FUISprite(FUISprite *this)

{
                    /* try { // try from 00aaa61c to 00baa64f has its CatchHandler @ 00aaa71c */
  *(undefined ***)this = &PTR__FUISprite_016a8e20;
  *(undefined ***)(this + 0x2f8) = &PTR__FUISprite_016a94a0;
  if (*(void **)(this + 0x560) != (void *)0x0) {
    free(*(void **)(this + 0x560));
    *(undefined8 *)(this + 0x560) = 0;
  }
  if (*(void **)(this + 0x568) != (void *)0x0) {
    free(*(void **)(this + 0x568));
    *(undefined8 *)(this + 0x568) = 0;
  }
  cocos2d::Sprite::~Sprite((Sprite *)this);
                    /* try { // try from 00aaa650 to 00baa663 has its CatchHandler @ 00aaa6e8 */
  operator_delete(this);
  return;
}

