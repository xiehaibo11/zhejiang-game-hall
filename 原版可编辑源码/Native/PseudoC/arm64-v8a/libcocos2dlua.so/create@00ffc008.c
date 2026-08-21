
/* cocos2d::__Dictionary::create() */

Ref * cocos2d::__Dictionary::create(void)

{
  Ref *this;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 00ffc034 to 010fc05b has its CatchHandler @ 00ffc034
                       catch() { ... } // from try @ 00ffc034 with catch @ 00ffc034
                       catch() { ... } // from try @ 00ffc078 with catch @ 00ffc034 */
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR____Dictionary_01724bf8;
    *(undefined ***)(this + 0x28) = &PTR_clone_01724c28;
    *(undefined8 *)(this + 0x30) = 0;
    Ref::autorelease(this);
  }
                    /* try { // try from 00ffc05c to 010fc077 has its CatchHandler @ 00ffc0a4 */
  return this;
}

