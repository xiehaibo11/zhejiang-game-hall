
/* cocos2d::Animation::createWithSpriteFrames(cocos2d::Vector<cocos2d::SpriteFrame*> const&, float,
   unsigned int) */

Ref * cocos2d::Animation::createWithSpriteFrames(Vector *param_1,float param_2,uint param_3)

{
  Ref *this;
  
                    /* catch() { ... } // from try @ 00eebe94 with catch @ 00eebf80 */
                    /* try { // try from 00eebf9c to 00febffb has its CatchHandler @ 00eebf9c
                       catch() { ... } // from try @ 00eebf9c with catch @ 00eebf9c
                       catch() { ... } // from try @ 00eec150 with catch @ 00eebf9c */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined ***)this = &PTR__Animation_016fa430;
    *(undefined ***)(this + 0x28) = &PTR_clone_016fa458;
    *(undefined8 *)(this + 0x30) = 0;
    this[0x58] = (Ref)0x0;
  }
  initWithSpriteFrames((Animation *)this,param_1,param_2,param_3);
                    /* try { // try from 00eebffc to 00fec013 has its CatchHandler @ 00eec1d8 */
  Ref::autorelease(this);
  return this;
}

