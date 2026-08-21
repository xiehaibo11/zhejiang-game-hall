
/* unsigned int std::__ndk1::__sort4<bool (*&)(v8::internal::CoverageBlock const&,
   v8::internal::CoverageBlock const&), v8::internal::CoverageBlock*>(v8::internal::CoverageBlock*,
   v8::internal::CoverageBlock*, v8::internal::CoverageBlock*, v8::internal::CoverageBlock*, bool
   (*&)(v8::internal::CoverageBlock const&, v8::internal::CoverageBlock const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
               (CoverageBlock *param_1,CoverageBlock *param_2,CoverageBlock *param_3,
               CoverageBlock *param_4,_func_bool_CoverageBlock_ptr_CoverageBlock_ptr *param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar2 = (**(code **)param_5)(param_2,param_1);
  uVar3 = (**(code **)param_5)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
      goto LAB_00efd224;
    }
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)param_3;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar5;
    *(undefined4 *)(param_3 + 8) = uVar1;
    *(undefined8 *)param_3 = uVar4;
    uVar2 = (**(code **)param_5)(param_2,param_1);
    if ((uVar2 & 1) == 0) goto LAB_00efd218;
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar5;
    *(undefined4 *)(param_2 + 8) = uVar1;
    *(undefined8 *)param_2 = uVar4;
  }
  else {
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar4 = *(undefined8 *)param_1;
      uVar6 = 1;
      uVar5 = *(undefined8 *)param_3;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar5;
      *(undefined4 *)(param_3 + 8) = uVar1;
      *(undefined8 *)param_3 = uVar4;
      goto LAB_00efd224;
    }
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar5;
    *(undefined4 *)(param_2 + 8) = uVar1;
    *(undefined8 *)param_2 = uVar4;
    uVar2 = (**(code **)param_5)(param_3,param_2);
    if ((uVar2 & 1) == 0) {
LAB_00efd218:
      uVar6 = 1;
      goto LAB_00efd224;
    }
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)param_3;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar5;
    *(undefined4 *)(param_3 + 8) = uVar1;
    *(undefined8 *)param_3 = uVar4;
  }
  uVar6 = 2;
LAB_00efd224:
  uVar2 = (**(code **)param_5)(param_4,param_3);
  if ((uVar2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar4 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)param_4;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar5;
    *(undefined4 *)(param_4 + 8) = uVar1;
    *(undefined8 *)param_4 = uVar4;
    uVar2 = (**(code **)param_5)(param_3,param_2);
    if ((uVar2 & 1) == 0) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)param_3;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar5;
      *(undefined4 *)(param_3 + 8) = uVar1;
      *(undefined8 *)param_3 = uVar4;
      uVar2 = (**(code **)param_5)(param_2,param_1);
      if ((uVar2 & 1) == 0) {
        uVar6 = uVar6 + 2;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 8);
        uVar4 = *(undefined8 *)param_1;
        uVar6 = uVar6 + 3;
        uVar5 = *(undefined8 *)param_2;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar5;
        *(undefined4 *)(param_2 + 8) = uVar1;
        *(undefined8 *)param_2 = uVar4;
      }
    }
  }
  return uVar6;
}

