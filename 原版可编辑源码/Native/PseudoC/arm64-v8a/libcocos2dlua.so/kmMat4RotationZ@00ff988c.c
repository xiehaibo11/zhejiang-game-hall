
/* cocos2d::kmMat4RotationZ(cocos2d::Mat4*, float) */

Mat4 * cocos2d::kmMat4RotationZ(Mat4 *param_1,float param_2)

{
  Mat4::createRotationZ(param_2,param_1);
                    /* try { // try from 00ff98a8 to 010f995b has its CatchHandler @ 00ff92cc */
  return param_1;
}

