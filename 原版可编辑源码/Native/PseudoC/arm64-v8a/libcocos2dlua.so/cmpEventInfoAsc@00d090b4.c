
/* cocos2d::cmpEventInfoAsc(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo*) */

bool cocos2d::cmpEventInfoAsc
               (Animate3DDisplayedEventInfo *param_1,Animate3DDisplayedEventInfo *param_2)

{
  return *(int *)param_1 < *(int *)param_2;
}

