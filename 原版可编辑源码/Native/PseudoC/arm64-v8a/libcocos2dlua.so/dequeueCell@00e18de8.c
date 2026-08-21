
/* cocos2d::extension::TableView::dequeueCell() */

Ref * __thiscall cocos2d::extension::TableView::dequeueCell(TableView *this)

{
  size_t __n;
  Ref *this_00;
  undefined8 *__dest;
  
                    /* catch() { ... } // from try @ 00e18d9c with catch @ 00e18df4 */
  if (*(undefined8 **)(this + 0x4b8) == *(undefined8 **)(this + 0x4c0)) {
    this_00 = (Ref *)0x0;
  }
  else {
    this_00 = (Ref *)**(undefined8 **)(this + 0x4b8);
                    /* catch() { ... } // from try @ 00e18e4c with catch @ 00e18e10 */
    Ref::retain(this_00);
    __dest = *(undefined8 **)(this + 0x4b8);
    Ref::release((Ref *)*__dest);
    __n = *(long *)(this + 0x4c0) - (long)(__dest + 1);
    if (__n != 0) {
                    /* try { // try from 00e18e44 to 00f18e4b has its CatchHandler @ 00e18ea0 */
      memmove(__dest,__dest + 1,__n);
    }
                    /* try { // try from 00e18e4c to 00f18ebb has its CatchHandler @ 00e18e10 */
    *(undefined8 **)(this + 0x4c0) = __dest + ((long)__n >> 3);
    Ref::autorelease(this_00);
  }
  return this_00;
}

