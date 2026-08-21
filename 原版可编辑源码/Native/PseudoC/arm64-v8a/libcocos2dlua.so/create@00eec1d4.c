
/* cocos2d::Animation::create(cocos2d::Vector<cocos2d::AnimationFrame*> const&, float, unsigned int)
    */

Ref * cocos2d::Animation::create(Vector *param_1,float param_2,uint param_3)

{
  Ref *this;
  
                    /* catch() { ... } // from try @ 00eebffc with catch @ 00eec1d8 */
                    /* catch() { ... } // from try @ 00eec0b0 with catch @ 00eec1ec
                       catch() { ... } // from try @ 00eec140 with catch @ 00eec1ec */
                    /* catch() { ... } // from try @ 00eec0d8 with catch @ 00eec1fc */
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
  initWithAnimationFrames((Animation *)this,param_1,param_2,param_3);
  Ref::autorelease(this);
                    /* try { // try from 00eec25c to 00fec2b7 has its CatchHandler @ 00eec25c
                       catch() { ... } // from try @ 00eec25c with catch @ 00eec25c
                       catch() { ... } // from try @ 00eec2c4 with catch @ 00eec25c
                       catch() { ... } // from try @ 00eec46c with catch @ 00eec25c
                       catch() { ... } // from try @ 00eec544 with catch @ 00eec25c
                       catch() { ... } // from try @ 00eec590 with catch @ 00eec25c
                       catch() { ... } // from try @ 00eec620 with catch @ 00eec25c */
  return this;
}

