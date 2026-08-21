
/* cocos2d::Quaternion::slerp(cocos2d::Quaternion const&, cocos2d::Quaternion const&, float,
   cocos2d::Quaternion*) */

void cocos2d::Quaternion::slerp
               (Quaternion *param_1,Quaternion *param_2,float param_3,Quaternion *param_4)

{
  slerp(*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),*(float *)(param_1 + 0xc),
        *(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),*(float *)(param_2 + 0xc),
        param_3,(float *)param_4,(float *)(param_4 + 4),(float *)(param_4 + 8),
        (float *)(param_4 + 0xc));
  return;
}

