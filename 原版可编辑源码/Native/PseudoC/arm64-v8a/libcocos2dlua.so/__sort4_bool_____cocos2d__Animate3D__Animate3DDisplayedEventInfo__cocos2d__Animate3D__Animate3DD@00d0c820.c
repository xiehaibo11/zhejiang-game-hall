
/* unsigned int std::__ndk1::__sort4<bool (*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo*),
   cocos2d::Animate3D::Animate3DDisplayedEventInfo**>(cocos2d::Animate3D::Animate3DDisplayedEventInfo**,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo**,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo**,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo**, bool
   (*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo*)) */

uint std::__ndk1::
     __sort4<bool(*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,cocos2d::Animate3D::Animate3DDisplayedEventInfo*),cocos2d::Animate3D::Animate3DDisplayedEventInfo**>
               (Animate3DDisplayedEventInfo **param_1,Animate3DDisplayedEventInfo **param_2,
               Animate3DDisplayedEventInfo **param_3,Animate3DDisplayedEventInfo **param_4,
               _func_bool_Animate3DDisplayedEventInfo_ptr_Animate3DDisplayedEventInfo_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  Animate3DDisplayedEventInfo *pAVar3;
  uint uVar4;
  
  uVar1 = (**(code **)param_5)(*param_2,*param_1);
  uVar2 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_00d0c90c;
    }
    pAVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pAVar3;
    uVar1 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar1 & 1) == 0) goto LAB_00d0c900;
    pAVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = pAVar3;
  }
  else {
    pAVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = pAVar3;
      goto LAB_00d0c90c;
    }
    *param_1 = *param_2;
    *param_2 = pAVar3;
    uVar1 = (**(code **)param_5)(*param_3);
    if ((uVar1 & 1) == 0) {
LAB_00d0c900:
      uVar4 = 1;
      goto LAB_00d0c90c;
    }
    pAVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pAVar3;
  }
  uVar4 = 2;
LAB_00d0c90c:
  uVar1 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    pAVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = pAVar3;
    uVar1 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      pAVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pAVar3;
      uVar1 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        pAVar3 = *param_1;
        uVar4 = uVar4 + 3;
        *param_1 = *param_2;
        *param_2 = pAVar3;
      }
    }
  }
  return uVar4;
}

