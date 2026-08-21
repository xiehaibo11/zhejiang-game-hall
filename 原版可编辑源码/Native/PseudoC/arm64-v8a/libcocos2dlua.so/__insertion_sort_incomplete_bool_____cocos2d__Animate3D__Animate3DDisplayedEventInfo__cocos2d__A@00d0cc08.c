
/* bool std::__ndk1::__insertion_sort_incomplete<bool
   (*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo*),
   cocos2d::Animate3D::Animate3DDisplayedEventInfo**>(cocos2d::Animate3D::Animate3DDisplayedEventInfo**,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo**, bool
   (*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,
   cocos2d::Animate3D::Animate3DDisplayedEventInfo*)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,cocos2d::Animate3D::Animate3DDisplayedEventInfo*),cocos2d::Animate3D::Animate3DDisplayedEventInfo**>
               (Animate3DDisplayedEventInfo **param_1,Animate3DDisplayedEventInfo **param_2,
               _func_bool_Animate3DDisplayedEventInfo_ptr_Animate3DDisplayedEventInfo_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  Animate3DDisplayedEventInfo *pAVar4;
  Animate3DDisplayedEventInfo *pAVar5;
  Animate3DDisplayedEventInfo **ppAVar6;
  Animate3DDisplayedEventInfo **ppAVar7;
  Animate3DDisplayedEventInfo **ppAVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (**(code **)param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    pAVar4 = *param_1;
    *param_1 = param_2[-1];
    goto LAB_00d0cdd0;
  case 3:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        return true;
      }
      pAVar4 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = pAVar4;
      uVar2 = (**(code **)param_3)(param_1[1],*param_1);
      if ((uVar2 & 1) == 0) {
        return true;
      }
      auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
      param_1[1] = auVar12._8_8_;
      *param_1 = auVar12._0_8_;
      return true;
    }
    pAVar4 = *param_1;
    if ((uVar3 & 1) != 0) {
      *param_1 = param_2[-1];
      param_2[-1] = pAVar4;
      return true;
    }
    *param_1 = param_1[1];
    param_1[1] = pAVar4;
    uVar2 = (**(code **)param_3)(param_2[-1]);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    pAVar4 = param_1[1];
    param_1[1] = param_2[-1];
LAB_00d0cdd0:
    param_2[-1] = pAVar4;
    break;
  case 4:
    __sort4<bool(*&)(cocos2d::Animate3D::Animate3DDisplayedEventInfo*,cocos2d::Animate3D::Animate3DDisplayedEventInfo*),cocos2d::Animate3D::Animate3DDisplayedEventInfo**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00d0c9a4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        auVar12 = *(undefined1 (*) [16])(param_1 + 1);
        auVar13 = NEON_ext(auVar12,auVar12,8,1);
        param_1[2] = auVar13._8_8_;
        param_1[1] = auVar13._0_8_;
        uVar2 = (**(code **)param_3)(auVar12._8_8_,*param_1);
        if ((uVar2 & 1) != 0) {
          auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
          param_1[1] = auVar12._8_8_;
          *param_1 = auVar12._0_8_;
        }
      }
    }
    else {
      pAVar4 = *param_1;
      if ((uVar3 & 1) == 0) {
        *param_1 = param_1[1];
        param_1[1] = pAVar4;
        uVar2 = (**(code **)param_3)(param_1[2]);
        if ((uVar2 & 1) != 0) {
          auVar12 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1)
                             ,8,1);
          param_1[2] = auVar12._8_8_;
          param_1[1] = auVar12._0_8_;
        }
      }
      else {
        pAVar5 = param_1[2];
        param_1[2] = pAVar4;
        *param_1 = pAVar5;
      }
    }
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      ppAVar6 = param_1 + 3;
      ppAVar8 = param_1 + 2;
      do {
        ppAVar7 = ppAVar6;
        uVar2 = (**(code **)param_3)(*ppAVar7,*ppAVar8);
        if ((uVar2 & 1) != 0) {
          pAVar4 = *ppAVar7;
          lVar1 = lVar9;
          do {
            lVar11 = lVar1;
            *(undefined8 *)((long)param_1 + lVar11 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x10);
            ppAVar6 = param_1;
            if (lVar11 == -0x10) goto LAB_00d0ce14;
            uVar2 = (**(code **)param_3)(pAVar4,*(undefined8 *)((long)param_1 + lVar11 + 8));
            lVar1 = lVar11 + -8;
          } while ((uVar2 & 1) != 0);
          ppAVar6 = (Animate3DDisplayedEventInfo **)((long)param_1 + lVar11 + 0x10);
LAB_00d0ce14:
          iVar10 = iVar10 + 1;
          *ppAVar6 = pAVar4;
          if (iVar10 == 8) {
            return ppAVar7 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        ppAVar6 = ppAVar7 + 1;
        ppAVar8 = ppAVar7;
      } while (ppAVar7 + 1 != param_2);
    }
  }
  return true;
}

