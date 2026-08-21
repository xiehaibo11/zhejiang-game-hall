
/* cocos2d::extension::EventAssetsManagerEx::~EventAssetsManagerEx() */

void __thiscall
cocos2d::extension::EventAssetsManagerEx::~EventAssetsManagerEx(EventAssetsManagerEx *this)

{
                    /* try { // try from 00a6b93c to 00b6b943 has its CatchHandler @ 00a6ba10 */
                    /* try { // try from 00a6b944 to 00b6b95b has its CatchHandler @ 00a6ba54 */
  *(undefined ***)this = &PTR__EventAssetsManagerEx_01c6ea38;
                    /* try { // try from 00a6b95c to 00b6b963 has its CatchHandler @ 00a6ba28 */
  if (((byte)this[0x30] & 1) != 0) {
                    /* try { // try from 00a6b964 to 00b6b993 has its CatchHandler @ 00a6ba30 */
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

