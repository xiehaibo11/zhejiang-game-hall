
/* cocos2d::kmVec4MultiplyMat4(cocos2d::Vec4*, cocos2d::Vec4 const*, cocos2d::Mat4 const*) */

Vec4 * cocos2d::kmVec4MultiplyMat4(Vec4 *param_1,Vec4 *param_2,Mat4 *param_3)

{
  Mat4::transformVector(param_3,param_2,param_1);
                    /* try { // try from 00ff9f04 to 010f9f3f has its CatchHandler @ 00ff9f04
                       catch() { ... } // from try @ 00ff9f04 with catch @ 00ff9f04
                       catch() { ... } // from try @ 00ffa114 with catch @ 00ff9f04 */
  return param_1;
}

