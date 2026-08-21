
/* non-virtual thunk to cocos2d::ShuffleTiles::~ShuffleTiles() */

void __thiscall cocos2d::ShuffleTiles::~ShuffleTiles(ShuffleTiles *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ShuffleTiles_016f9b20;
                    /* catch() { ... } // from try @ 00ee90d4 with catch @ 00ee91e8 */
  *(undefined ***)this = &PTR_clone_016f9b88;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
                    /* catch() { ... } // from try @ 00ee90c8 with catch @ 00ee9208 */
    operator_delete__(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

