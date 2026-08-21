
/* void std::__ndk1::__insertion_sort_3<bool (*&)(p2t::Point const*, p2t::Point const*),
   p2t::Point**>(p2t::Point**, p2t::Point**, bool (*&)(p2t::Point const*, p2t::Point const*)) */

void std::__ndk1::__insertion_sort_3<bool(*&)(p2t::Point_const*,p2t::Point_const*),p2t::Point**>
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
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar2 = (**(code **)param_3)(param_1[1],*param_1);
  uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      auVar11 = *(undefined1 (*) [16])(param_1 + 1);
      auVar12 = NEON_ext(auVar11,auVar11,8,1);
      param_1[2] = auVar12._8_8_;
      param_1[1] = auVar12._0_8_;
      uVar2 = (**(code **)param_3)(auVar11._8_8_,*param_1);
      if ((uVar2 & 1) != 0) {
        auVar11 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
        param_1[1] = auVar11._8_8_;
        *param_1 = auVar11._0_8_;
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
        auVar11 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1),8
                           ,1);
        param_1[2] = auVar11._8_8_;
        param_1[1] = auVar11._0_8_;
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
    ppPVar6 = param_1 + 3;
    ppPVar8 = param_1 + 2;
    do {
      ppPVar7 = ppPVar6;
      uVar2 = (**(code **)param_3)(*ppPVar7,*ppPVar8);
      if ((uVar2 & 1) != 0) {
        pPVar4 = *ppPVar7;
        lVar1 = lVar9;
        do {
          lVar10 = lVar1;
          *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x10);
          ppPVar6 = param_1;
          if (lVar10 == -0x10) goto LAB_0102dca0;
          uVar2 = (**(code **)param_3)(pPVar4,*(undefined8 *)((long)param_1 + lVar10 + 8));
          lVar1 = lVar10 + -8;
        } while ((uVar2 & 1) != 0);
        ppPVar6 = (Point **)((long)param_1 + lVar10 + 0x10);
LAB_0102dca0:
        *ppPVar6 = pPVar4;
      }
      lVar9 = lVar9 + 8;
      ppPVar6 = ppPVar7 + 1;
      ppPVar8 = ppPVar7;
    } while (ppPVar7 + 1 != param_2);
  }
  return;
}

