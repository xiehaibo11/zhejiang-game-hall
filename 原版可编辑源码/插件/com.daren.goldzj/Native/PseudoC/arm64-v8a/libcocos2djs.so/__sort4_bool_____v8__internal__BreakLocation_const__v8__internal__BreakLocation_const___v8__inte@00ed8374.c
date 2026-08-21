
/* unsigned int std::__ndk1::__sort4<bool (*&)(v8::internal::BreakLocation const&,
   v8::internal::BreakLocation const&), v8::internal::BreakLocation*>(v8::internal::BreakLocation*,
   v8::internal::BreakLocation*, v8::internal::BreakLocation*, v8::internal::BreakLocation*, bool
   (*&)(v8::internal::BreakLocation const&, v8::internal::BreakLocation const&)) */

uint std::__ndk1::
     __sort4<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
               (BreakLocation *param_1,BreakLocation *param_2,BreakLocation *param_3,
               BreakLocation *param_4,_func_bool_BreakLocation_ptr_BreakLocation_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = (**(code **)param_5)(param_2,param_1);
  uVar2 = (**(code **)param_5)(param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_00ed8508;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar8;
    *(undefined8 *)param_2 = uVar6;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    *(undefined8 *)(param_3 + 8) = uVar7;
    *(undefined8 *)param_3 = uVar5;
    uVar1 = (**(code **)param_5)(param_2,param_1);
    if ((uVar1 & 1) == 0) goto LAB_00ed84fc;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined8 *)param_1 = uVar6;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)param_2 = uVar5;
  }
  else {
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)param_1;
      uVar4 = 1;
      uVar8 = *(undefined8 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar8;
      *(undefined8 *)param_1 = uVar6;
      *(undefined8 *)(param_3 + 0x10) = uVar3;
      *(undefined8 *)(param_3 + 8) = uVar7;
      *(undefined8 *)param_3 = uVar5;
      goto LAB_00ed8508;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar8;
    *(undefined8 *)param_1 = uVar6;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)param_2 = uVar5;
    uVar1 = (**(code **)param_5)(param_3,param_2);
    if ((uVar1 & 1) == 0) {
LAB_00ed84fc:
      uVar4 = 1;
      goto LAB_00ed8508;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_2;
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar8;
    *(undefined8 *)param_2 = uVar6;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
    *(undefined8 *)(param_3 + 8) = uVar7;
    *(undefined8 *)param_3 = uVar5;
  }
  uVar4 = 2;
LAB_00ed8508:
  uVar1 = (**(code **)param_5)(param_4,param_3);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    uVar7 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_3 + 8) = uVar8;
    *(undefined8 *)param_3 = uVar6;
    *(undefined8 *)(param_4 + 0x10) = uVar3;
    *(undefined8 *)(param_4 + 8) = uVar7;
    *(undefined8 *)param_4 = uVar5;
    uVar1 = (**(code **)param_5)(param_3,param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar7 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)param_2;
      uVar8 = *(undefined8 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar8;
      *(undefined8 *)param_2 = uVar6;
      *(undefined8 *)(param_3 + 0x10) = uVar3;
      *(undefined8 *)(param_3 + 8) = uVar7;
      *(undefined8 *)param_3 = uVar5;
      uVar1 = (**(code **)param_5)(param_2,param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar7 = *(undefined8 *)(param_1 + 8);
        uVar5 = *(undefined8 *)param_1;
        uVar4 = uVar4 + 3;
        uVar8 = *(undefined8 *)(param_2 + 8);
        uVar6 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(undefined8 *)param_1 = uVar6;
        *(undefined8 *)(param_2 + 0x10) = uVar3;
        *(undefined8 *)(param_2 + 8) = uVar7;
        *(undefined8 *)param_2 = uVar5;
      }
    }
  }
  return uVar4;
}

