
/* unsigned int std::__ndk1::__sort4<bool (*&)(v8::internal::compiler::MoveOperands const*,
   v8::internal::compiler::MoveOperands const*),
   v8::internal::compiler::MoveOperands**>(v8::internal::compiler::MoveOperands**,
   v8::internal::compiler::MoveOperands**, v8::internal::compiler::MoveOperands**,
   v8::internal::compiler::MoveOperands**, bool (*&)(v8::internal::compiler::MoveOperands const*,
   v8::internal::compiler::MoveOperands const*)) */

uint std::__ndk1::
     __sort4<bool(*&)(v8::internal::compiler::MoveOperands_const*,v8::internal::compiler::MoveOperands_const*),v8::internal::compiler::MoveOperands**>
               (MoveOperands **param_1,MoveOperands **param_2,MoveOperands **param_3,
               MoveOperands **param_4,_func_bool_MoveOperands_ptr_MoveOperands_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  MoveOperands *pMVar3;
  uint uVar4;
  
  uVar1 = (**(code **)param_5)(*param_2,*param_1);
  uVar2 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_0165024c;
    }
    pMVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pMVar3;
    uVar1 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar1 & 1) == 0) goto LAB_01650240;
    pMVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = pMVar3;
  }
  else {
    pMVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = pMVar3;
      goto LAB_0165024c;
    }
    *param_1 = *param_2;
    *param_2 = pMVar3;
    uVar1 = (**(code **)param_5)(*param_3);
    if ((uVar1 & 1) == 0) {
LAB_01650240:
      uVar4 = 1;
      goto LAB_0165024c;
    }
    pMVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pMVar3;
  }
  uVar4 = 2;
LAB_0165024c:
  uVar1 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    pMVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = pMVar3;
    uVar1 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      pMVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pMVar3;
      uVar1 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        pMVar3 = *param_1;
        uVar4 = uVar4 + 3;
        *param_1 = *param_2;
        *param_2 = pMVar3;
      }
    }
  }
  return uVar4;
}

