
/* cocos2d::extension::EventAssetsManagerEx::~EventAssetsManagerEx() */

void __thiscall
cocos2d::extension::EventAssetsManagerEx::~EventAssetsManagerEx(EventAssetsManagerEx *this)

{
                    /* try { // try from 00a6b900 to 00b6b913 has its CatchHandler @ 00a6ba40 */
  *(undefined ***)this = &PTR__EventAssetsManagerEx_01c6ea38;
  if (((byte)this[0x30] & 1) != 0) {
                    /* try { // try from 00a6b914 to 00b6b923 has its CatchHandler @ 00a6ba2c */
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  Ref::~Ref((Ref *)this);
  return;
}

