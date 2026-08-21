
/* cocos2d::Node::getNodeToParentAffineTransform() const */

void cocos2d::Node::getNodeToParentAffineTransform(void)

{
  long *in_x0;
  float *pfVar1;
  AffineTransform *in_x8;
  
  pfVar1 = (float *)(**(code **)(*in_x0 + 1000))();
  GLToCGAffine(pfVar1,in_x8);
  return;
}

