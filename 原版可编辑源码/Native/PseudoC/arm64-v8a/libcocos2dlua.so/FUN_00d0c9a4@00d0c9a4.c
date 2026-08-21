
uint FUN_00d0c9a4(Animate3DDisplayedEventInfo **param_1,Animate3DDisplayedEventInfo **param_2,
                 Animate3DDisplayedEventInfo **param_3,Animate3DDisplayedEventInfo **param_4,
                 undefined8 *param_5,
                 _func_bool_Animate3DDisplayedEventInfo_ptr_Animate3DDisplayedEventInfo_ptr *param_6
                 )

{
  uint uVar1;
  ulong uVar2;
  Animate3DDisplayedEventInfo *pAVar3;
  
  uVar1 = std::__ndk1::
          __sort4<bool(*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,cocos2d::Animate3D::Animate3DDisplayedEventInfo*),cocos2d::Animate3D::Animate3DDisplayedEventInfo**>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar2 = (**(code **)param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    pAVar3 = *param_4;
    *param_4 = (Animate3DDisplayedEventInfo *)*param_5;
    *param_5 = pAVar3;
    uVar2 = (**(code **)param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      pAVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = pAVar3;
      uVar2 = (**(code **)param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        pAVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = pAVar3;
        uVar2 = (**(code **)param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          uVar1 = uVar1 + 3;
        }
        else {
          pAVar3 = *param_1;
          uVar1 = uVar1 + 4;
          *param_1 = *param_2;
          *param_2 = pAVar3;
        }
      }
    }
  }
  return uVar1;
}

