
/* cocos2d::renderer::Camera::worldMatrixToScreen(cocos2d::Mat4&, cocos2d::Mat4 const&, int, int) */

Mat4 * __thiscall
cocos2d::renderer::Camera::worldMatrixToScreen
          (Camera *this,Mat4 *param_1,Mat4 *param_2,int param_3,int param_4)

{
  Mat4 *this_00;
  
                    /* catch() { ... } // from try @ 009beb1c with catch @ 009becc4 */
  calcMatrices(this,param_3,param_4);
  Mat4::multiply((Mat4 *)(this + 0x14c),param_2,param_1);
  if (param_3 < 0) {
    param_3 = param_3 + 1;
  }
                    /* try { // try from 009bed1c to 00abed6f has its CatchHandler @ 009bed1c
                       catch() { ... } // from try @ 009bed1c with catch @ 009bed1c
                       catch() { ... } // from try @ 009bef04 with catch @ 009bed1c */
  if (param_4 < 0) {
    param_4 = param_4 + 1;
  }
  this_00 = (Mat4 *)(this + 0x1d8);
  Mat4::set(this_00,(Mat4 *)Mat4::IDENTITY);
  Mat4::translate(this_00,(float)(param_3 >> 1),(float)(param_4 >> 1),0.0,this_00);
  Mat4::scale(this_00,(float)(param_3 >> 1),(float)(param_4 >> 1),1.0,this_00);
                    /* try { // try from 009bed70 to 00abed87 has its CatchHandler @ 009bef80 */
  Mat4::multiply(this_00,param_1,param_1);
                    /* try { // try from 009bed90 to 00abed9b has its CatchHandler @ 009bef7c */
  return param_1;
}

