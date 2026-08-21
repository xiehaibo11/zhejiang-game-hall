
uint FUN_0102dac0(Point **param_1,Point **param_2,Point **param_3,Point **param_4,
                 undefined8 *param_5,_func_bool_Point_ptr_Point_ptr *param_6)

{
  uint uVar1;
  ulong uVar2;
  Point *pPVar3;
  
  uVar1 = std::__ndk1::__sort4<bool(*&)(p2t::Point_const*,p2t::Point_const*),p2t::Point**>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar2 = (**(code **)param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    pPVar3 = *param_4;
    *param_4 = (Point *)*param_5;
    *param_5 = pPVar3;
    uVar2 = (**(code **)param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      pPVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = pPVar3;
      uVar2 = (**(code **)param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        pPVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = pPVar3;
        uVar2 = (**(code **)param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          uVar1 = uVar1 + 3;
        }
        else {
          pPVar3 = *param_1;
          uVar1 = uVar1 + 4;
          *param_1 = *param_2;
          *param_2 = pPVar3;
        }
      }
    }
  }
  return uVar1;
}

