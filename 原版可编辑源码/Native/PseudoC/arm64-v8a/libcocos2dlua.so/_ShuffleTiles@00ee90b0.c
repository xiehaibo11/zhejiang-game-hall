
/* cocos2d::ShuffleTiles::~ShuffleTiles() */

void __thiscall cocos2d::ShuffleTiles::~ShuffleTiles(ShuffleTiles *this)

{
                    /* try { // try from 00ee90bc to 00fe90c7 has its CatchHandler @ 00ee9228 */
                    /* try { // try from 00ee90c8 to 00fe90d3 has its CatchHandler @ 00ee9208 */
                    /* try { // try from 00ee90d4 to 00fe90e7 has its CatchHandler @ 00ee91e8 */
  *(undefined ***)this = &PTR__ShuffleTiles_016f9b20;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f9b88;
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
    *(undefined8 *)(this + 0x78) = 0;
  }
                    /* try { // try from 00ee9104 to 00fe910b has its CatchHandler @ 00ee91a8 */
  Action::~Action((Action *)this);
  return;
}

