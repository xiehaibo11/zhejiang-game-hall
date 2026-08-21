
/* non-virtual thunk to fairygui::FUISprite::~FUISprite() */

void __thiscall fairygui::FUISprite::~FUISprite(FUISprite *this)

{
  *(undefined ***)(this + -0x2f8) = &PTR__FUISprite_016a8e20;
  *(undefined ***)this = &PTR__FUISprite_016a94a0;
  if (*(void **)(this + 0x268) != (void *)0x0) {
    free(*(void **)(this + 0x268));
    *(undefined8 *)(this + 0x268) = 0;
  }
  if (*(void **)(this + 0x270) != (void *)0x0) {
    free(*(void **)(this + 0x270));
    *(undefined8 *)(this + 0x270) = 0;
  }
  cocos2d::Sprite::~Sprite((Sprite *)(this + -0x2f8));
  return;
}

