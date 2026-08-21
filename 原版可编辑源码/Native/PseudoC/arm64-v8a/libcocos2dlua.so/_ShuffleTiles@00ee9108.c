
/* non-virtual thunk to cocos2d::ShuffleTiles::~ShuffleTiles() */

void __thiscall cocos2d::ShuffleTiles::~ShuffleTiles(ShuffleTiles *this)

{
                    /* try { // try from 00ee910c to 00fe9243 has its CatchHandler @ 00ee9080 */
  *(undefined ***)(this + -0x28) = &PTR__ShuffleTiles_016f9b20;
  *(undefined ***)this = &PTR_clone_016f9b88;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

