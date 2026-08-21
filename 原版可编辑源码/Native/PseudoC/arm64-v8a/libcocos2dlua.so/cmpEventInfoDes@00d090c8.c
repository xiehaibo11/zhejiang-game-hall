
/* cocos2d::cmpEventInfoDes(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo*) */

bool cocos2d::cmpEventInfoDes
               (Animate3DDisplayedEventInfo *param_1,Animate3DDisplayedEventInfo *param_2)

{
  return *(int *)param_2 < *(int *)param_1;
}

