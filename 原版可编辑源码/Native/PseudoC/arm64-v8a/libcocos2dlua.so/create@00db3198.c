
/* cocos2d::ui::LinearVerticalLayoutManager::create() */

Ref * cocos2d::ui::LinearVerticalLayoutManager::create(void)

{
  Ref *this;
  
  this = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 00db31d4 to 00eb31d7 has its CatchHandler @ 00db32d8 */
    *(undefined ***)this = &PTR__Ref_016d9a30;
    Ref::autorelease(this);
  }
                    /* try { // try from 00db31e4 to 00eb31eb has its CatchHandler @ 00db32d4 */
  return this;
}

