
/* cocos2d::ShuffleTiles::~ShuffleTiles() */

void __thiscall cocos2d::ShuffleTiles::~ShuffleTiles(ShuffleTiles *this)

{
  *(undefined ***)this = &PTR__ShuffleTiles_016f9b20;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f9b88;
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
                    /* catch() { ... } // from try @ 00ee9104 with catch @ 00ee91a8 */
    *(undefined8 *)(this + 0x78) = 0;
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

