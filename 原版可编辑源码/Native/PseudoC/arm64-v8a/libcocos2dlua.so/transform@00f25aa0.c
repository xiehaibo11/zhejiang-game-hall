
/* cocos2d::Node::transform(cocos2d::Mat4 const&) */

void cocos2d::Node::transform(Mat4 *param_1)

{
  Mat4 *pMVar1;
  Mat4 *in_x1;
  Mat4 *in_x8;
  
                    /* try { // try from 00f25aa8 to 01025aaf has its CatchHandler @ 00f25b60 */
                    /* try { // try from 00f25abc to 01025b4b has its CatchHandler @ 00f25b68 */
  pMVar1 = (Mat4 *)(**(code **)(*(long *)param_1 + 1000))();
  Mat4::Mat4(in_x8,in_x1);
  Mat4::multiply(in_x8,pMVar1);
  return;
}

