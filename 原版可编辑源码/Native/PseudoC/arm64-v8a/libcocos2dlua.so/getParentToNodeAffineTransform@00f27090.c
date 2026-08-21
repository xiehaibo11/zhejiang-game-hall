
/* cocos2d::Node::getParentToNodeAffineTransform() const */

void cocos2d::Node::getParentToNodeAffineTransform(void)

{
  long *in_x0;
  float *pfVar1;
  AffineTransform *in_x8;
  
                    /* catch() { ... } // from try @ 00f27004 with catch @ 00f2709c */
  pfVar1 = (float *)(**(code **)(*in_x0 + 0x418))();
  GLToCGAffine(pfVar1,in_x8);
  return;
}

