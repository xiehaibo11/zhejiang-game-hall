
/* cocos2d::DrawNode::create(float) */

DrawNode * cocos2d::DrawNode::create(float param_1)

{
  DrawNode *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ef37c8 with catch @ 00ef38d8 */
                    /* catch() { ... } // from try @ 00ef3844 with catch @ 00ef38dc */
  this = operator_new(0x460,(nothrow_t *)&std::nothrow);
  if (this != (DrawNode *)0x0) {
    DrawNode(this,param_1);
                    /* catch() { ... } // from try @ 00ef37fc with catch @ 00ef390c */
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (DrawNode *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

