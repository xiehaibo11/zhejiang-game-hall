
/* cocos2d::extension::EventAssetsManagerEx::~EventAssetsManagerEx() */

void __thiscall
cocos2d::extension::EventAssetsManagerEx::~EventAssetsManagerEx(EventAssetsManagerEx *this)

{
  *(undefined ***)this = &PTR__EventAssetsManagerEx_016e7f98;
  if (((byte)this[0x80] & 1) != 0) {
    operator_delete(*(void **)(this + 0x90));
  }
  if (((byte)this[0x68] & 1) != 0) {
    operator_delete(*(void **)(this + 0x78));
  }
                    /* catch() { ... } // from try @ 00e038b4 with catch @ 00e03968 */
  *(undefined ***)this = &PTR__EventCustom_01698250;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
                    /* catch() { ... } // from try @ 00e038a8 with catch @ 00e03980 */
  Event::~Event((Event *)this);
  return;
}

