
/* cocos2d::kmMat4RotationX(cocos2d::Mat4*, float) */

Mat4 * cocos2d::kmMat4RotationX(Mat4 *param_1,float param_2)

{
                    /* try { // try from 00ff9854 to 010f98a7 has its CatchHandler @ 00ff9944 */
  Mat4::createRotationX(param_2,param_1);
  return param_1;
}

