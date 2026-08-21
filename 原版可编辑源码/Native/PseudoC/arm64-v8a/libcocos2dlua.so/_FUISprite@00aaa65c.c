
/* non-virtual thunk to fairygui::FUISprite::~FUISprite() */

void __thiscall fairygui::FUISprite::~FUISprite(FUISprite *this)

{
  Sprite *this_00;
  
                    /* try { // try from 00aaa668 to 00baa69b has its CatchHandler @ 00aaa6ec */
  this_00 = (Sprite *)(this + -0x2f8);
  *(undefined ***)this_00 = &PTR__FUISprite_016a8e20;
  *(undefined ***)this = &PTR__FUISprite_016a94a0;
  if (*(void **)(this + 0x268) != (void *)0x0) {
    free(*(void **)(this + 0x268));
    *(undefined8 *)(this + 0x268) = 0;
  }
                    /* try { // try from 00aaa69c to 00baa737 has its CatchHandler @ 00aaa4ec */
  if (*(void **)(this + 0x270) != (void *)0x0) {
    free(*(void **)(this + 0x270));
    *(undefined8 *)(this + 0x270) = 0;
  }
  cocos2d::Sprite::~Sprite(this_00);
  operator_delete(this_00);
  return;
}

