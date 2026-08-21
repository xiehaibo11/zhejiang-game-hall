
/* cocos2d::ui::LinearHorizontalLayoutManager::create() */

Ref * cocos2d::ui::LinearHorizontalLayoutManager::create(void)

{
  Ref *this;
  
  this = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 00db2e54 to 00eb2e5f has its CatchHandler @ 00db3074 */
    *(undefined ***)this = &PTR__Ref_016d9a88;
    Ref::autorelease(this);
  }
  return this;
}

