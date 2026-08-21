
/* cocos2d::ui::RelativeLayoutManager::create() */

Ref * cocos2d::ui::RelativeLayoutManager::create(void)

{
  Ref *this;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
                    /* try { // try from 00db3588 to 00eb3597 has its CatchHandler @ 00db3660 */
    Ref::Ref(this);
                    /* try { // try from 00db3598 to 00eb35bb has its CatchHandler @ 00db347c */
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined ***)this = &PTR__RelativeLayoutManager_016d9ac8;
    *(undefined8 *)(this + 0x58) = 0;
    Ref::autorelease(this);
  }
                    /* try { // try from 00db35bc to 00eb35cb has its CatchHandler @ 00db3668 */
  return this;
}

