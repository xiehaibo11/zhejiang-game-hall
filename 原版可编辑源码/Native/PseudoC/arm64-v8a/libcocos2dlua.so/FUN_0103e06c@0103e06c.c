
uint FUN_0103e06c(IntersectNode **param_1,IntersectNode **param_2,IntersectNode **param_3,
                 IntersectNode **param_4,undefined8 *param_5,
                 _func_bool_IntersectNode_ptr_IntersectNode_ptr *param_6)

{
  uint uVar1;
  ulong uVar2;
  IntersectNode *pIVar3;
  
  uVar1 = std::__ndk1::
          __sort4<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar2 = (**(code **)param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    pIVar3 = *param_4;
    *param_4 = (IntersectNode *)*param_5;
    *param_5 = pIVar3;
    uVar2 = (**(code **)param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      pIVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = pIVar3;
      uVar2 = (**(code **)param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        pIVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = pIVar3;
        uVar2 = (**(code **)param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          uVar1 = uVar1 + 3;
        }
        else {
          pIVar3 = *param_1;
          uVar1 = uVar1 + 4;
          *param_1 = *param_2;
          *param_2 = pIVar3;
        }
      }
    }
  }
  return uVar1;
}

