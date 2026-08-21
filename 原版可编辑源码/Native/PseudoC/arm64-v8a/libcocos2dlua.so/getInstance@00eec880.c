
/* cocos2d::AnimationCache::getInstance() */

Ref * cocos2d::AnimationCache::getInstance(void)

{
  Ref *this;
  
                    /* try { // try from 00eec880 to 00fec88f has its CatchHandler @ 00eec94c */
                    /* try { // try from 00eec890 to 00fec9bb has its CatchHandler @ 00eec6ac */
  this = s_sharedAnimationCache;
  if ((s_sharedAnimationCache == (Ref *)0x0) &&
     (this = operator_new(0x50,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__AnimationCache_016fa4f0;
    *(undefined4 *)(this + 0x48) = 0x3f800000;
  }
                    /* catch() { ... } // from try @ 00eec738 with catch @ 00eec8e4 */
  s_sharedAnimationCache = this;
  return s_sharedAnimationCache;
}

