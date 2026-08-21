
/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(p2t::Point const*, p2t::Point const*),
   p2t::Point**>(p2t::Point**, p2t::Point**, bool (*&)(p2t::Point const*, p2t::Point const*)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(p2t::Point_const*,p2t::Point_const*),p2t::Point**>
               (Point **param_1,Point **param_2,_func_bool_Point_ptr_Point_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  Point *pPVar4;
  Point *pPVar5;
  Point **ppPVar6;
  Point **ppPVar7;
  Point **ppPVar8;
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
    pPVar4 = *param_1;
    *param_1 = param_2[-1];
    goto LAB_0102deec;
  case 3:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        return true;
      }
      pPVar4 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = pPVar4;
      uVar2 = (**(code **)param_3)(param_1[1],*param_1);
      if ((uVar2 & 1) == 0) {
        return true;
      }
      auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
      param_1[1] = auVar12._8_8_;
      *param_1 = auVar12._0_8_;
      return true;
    }
    pPVar4 = *param_1;
    if ((uVar3 & 1) != 0) {
      *param_1 = param_2[-1];
      param_2[-1] = pPVar4;
      return true;
    }
    *param_1 = param_1[1];
    param_1[1] = pPVar4;
    uVar2 = (**(code **)param_3)(param_2[-1]);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    pPVar4 = param_1[1];
    param_1[1] = param_2[-1];
LAB_0102deec:
    param_2[-1] = pPVar4;
    break;
  case 4:
    __sort4<bool(*&)(p2t::Point_const*,p2t::Point_const*),p2t::Point**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_0102dac0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
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
      pPVar4 = *param_1;
      if ((uVar3 & 1) == 0) {
        *param_1 = param_1[1];
        param_1[1] = pPVar4;
        uVar2 = (**(code **)param_3)(param_1[2]);
        if ((uVar2 & 1) != 0) {
          auVar12 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1)
                             ,8,1);
          param_1[2] = auVar12._8_8_;
          param_1[1] = auVar12._0_8_;
        }
      }
      else {
        pPVar5 = param_1[2];
        param_1[2] = pPVar4;
        *param_1 = pPVar5;
      }
    }
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      ppPVar6 = param_1 + 3;
      ppPVar8 = param_1 + 2;
      do {
        ppPVar7 = ppPVar6;
        uVar2 = (**(code **)param_3)(*ppPVar7,*ppPVar8);
        if ((uVar2 & 1) != 0) {
          pPVar4 = *ppPVar7;
          lVar1 = lVar9;
          do {
            lVar11 = lVar1;
            *(undefined8 *)((long)param_1 + lVar11 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x10);
            ppPVar6 = param_1;
            if (lVar11 == -0x10) goto LAB_0102df30;
            uVar2 = (**(code **)param_3)(pPVar4,*(undefined8 *)((long)param_1 + lVar11 + 8));
            lVar1 = lVar11 + -8;
          } while ((uVar2 & 1) != 0);
          ppPVar6 = (Point **)((long)param_1 + lVar11 + 0x10);
LAB_0102df30:
          iVar10 = iVar10 + 1;
          *ppPVar6 = pPVar4;
          if (iVar10 == 8) {
            return ppPVar7 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        ppPVar6 = ppPVar7 + 1;
        ppPVar8 = ppPVar7;
      } while (ppPVar7 + 1 != param_2);
    }
  }
  return true;
}

