
/* convertbtQuatToQuat(btQuaternion const&) */

void convertbtQuatToQuat(btQuaternion *param_1)

{
  Quaternion *in_x8;
  
  cocos2d::Quaternion::Quaternion
            (in_x8,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),
             *(float *)(param_1 + 0xc));
  return;
}

