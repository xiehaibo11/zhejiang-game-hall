
/* unsigned int std::__ndk1::__sort4<bool (*&)(ClipperLib::IntersectNode*,
   ClipperLib::IntersectNode*), ClipperLib::IntersectNode**>(ClipperLib::IntersectNode**,
   ClipperLib::IntersectNode**, ClipperLib::IntersectNode**, ClipperLib::IntersectNode**, bool
   (*&)(ClipperLib::IntersectNode*, ClipperLib::IntersectNode*)) */

uint std::__ndk1::
     __sort4<bool(*&)(ClipperLib::IntersectNode*,ClipperLib::IntersectNode*),ClipperLib::IntersectNode**>
               (IntersectNode **param_1,IntersectNode **param_2,IntersectNode **param_3,
               IntersectNode **param_4,_func_bool_IntersectNode_ptr_IntersectNode_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  IntersectNode *pIVar3;
  uint uVar4;
  
  uVar1 = (**(code **)param_5)(*param_2,*param_1);
  uVar2 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_0103dfd4;
    }
    pIVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pIVar3;
    uVar1 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar1 & 1) == 0) goto LAB_0103dfc8;
    pIVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = pIVar3;
  }
  else {
    pIVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = pIVar3;
      goto LAB_0103dfd4;
    }
    *param_1 = *param_2;
    *param_2 = pIVar3;
    uVar1 = (**(code **)param_5)(*param_3);
    if ((uVar1 & 1) == 0) {
LAB_0103dfc8:
      uVar4 = 1;
      goto LAB_0103dfd4;
    }
    pIVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pIVar3;
  }
  uVar4 = 2;
LAB_0103dfd4:
  uVar1 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    pIVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = pIVar3;
    uVar1 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      pIVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pIVar3;
      uVar1 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        pIVar3 = *param_1;
        uVar4 = uVar4 + 3;
        *param_1 = *param_2;
        *param_2 = pIVar3;
      }
    }
  }
  return uVar4;
}

