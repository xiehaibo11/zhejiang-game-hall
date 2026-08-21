
/* cocos2d::kmMat4LookAt(cocos2d::Mat4*, cocos2d::Vec3 const*, cocos2d::Vec3 const*, cocos2d::Vec3
   const*) */

Mat4 * cocos2d::kmMat4LookAt(Mat4 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4)

{
                    /* catch() { ... } // from try @ 00ff97fc with catch @ 00ff9948 */
  Mat4::createLookAt(param_2,param_3,param_4,param_1);
  return param_1;
}

