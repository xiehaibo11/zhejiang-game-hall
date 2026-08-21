
/* cocos2d::kmMat4OrthographicProjection(cocos2d::Mat4*, float, float, float, float, float, float)
    */

Mat4 * cocos2d::kmMat4OrthographicProjection
                 (Mat4 *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7)

{
                    /* catch() { ... } // from try @ 00ff9430 with catch @ 00ff9934 */
  Mat4::createOrthographicOffCenter(param_2,param_3,param_4,param_5,param_6,param_7,param_1);
                    /* catch() { ... } // from try @ 00ff9460 with catch @ 00ff9938 */
                    /* catch() { ... } // from try @ 00ff9398 with catch @ 00ff993c */
                    /* catch() { ... } // from try @ 00ff9534 with catch @ 00ff9940 */
                    /* catch() { ... } // from try @ 00ff9854 with catch @ 00ff9944 */
  return param_1;
}

