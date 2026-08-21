
/* unsigned int std::__ndk1::__sort4<bool (*&)(p2t::Point const*, p2t::Point const*),
   p2t::Point**>(p2t::Point**, p2t::Point**, p2t::Point**, p2t::Point**, bool (*&)(p2t::Point
   const*, p2t::Point const*)) */

uint std::__ndk1::__sort4<bool(*&)(p2t::Point_const*,p2t::Point_const*),p2t::Point**>
               (Point **param_1,Point **param_2,Point **param_3,Point **param_4,
               _func_bool_Point_ptr_Point_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  Point *pPVar3;
  uint uVar4;
  
  uVar1 = (**(code **)param_5)(*param_2,*param_1);
  uVar2 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_0102da28;
    }
    pPVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pPVar3;
    uVar1 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar1 & 1) == 0) goto LAB_0102da1c;
    pPVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = pPVar3;
  }
  else {
    pPVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = pPVar3;
      goto LAB_0102da28;
    }
    *param_1 = *param_2;
    *param_2 = pPVar3;
    uVar1 = (**(code **)param_5)(*param_3);
    if ((uVar1 & 1) == 0) {
LAB_0102da1c:
      uVar4 = 1;
      goto LAB_0102da28;
    }
    pPVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pPVar3;
  }
  uVar4 = 2;
LAB_0102da28:
  uVar1 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    pPVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = pPVar3;
    uVar1 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      pPVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pPVar3;
      uVar1 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        pPVar3 = *param_1;
        uVar4 = uVar4 + 3;
        *param_1 = *param_2;
        *param_2 = pPVar3;
      }
    }
  }
  return uVar4;
}

