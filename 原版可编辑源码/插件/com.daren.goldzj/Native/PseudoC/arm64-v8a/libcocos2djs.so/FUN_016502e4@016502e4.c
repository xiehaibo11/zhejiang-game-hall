
uint FUN_016502e4(MoveOperands **param_1,MoveOperands **param_2,MoveOperands **param_3,
                 MoveOperands **param_4,undefined8 *param_5,
                 _func_bool_MoveOperands_ptr_MoveOperands_ptr *param_6)

{
  uint uVar1;
  ulong uVar2;
  MoveOperands *pMVar3;
  
  uVar1 = std::__ndk1::
          __sort4<bool(*&)(v8::internal::compiler::MoveOperands_const*,v8::internal::compiler::MoveOperands_const*),v8::internal::compiler::MoveOperands**>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar2 = (**(code **)param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    pMVar3 = *param_4;
    *param_4 = (MoveOperands *)*param_5;
    *param_5 = pMVar3;
    uVar2 = (**(code **)param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      pMVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = pMVar3;
      uVar2 = (**(code **)param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        pMVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = pMVar3;
        uVar2 = (**(code **)param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          uVar1 = uVar1 + 3;
        }
        else {
          pMVar3 = *param_1;
          uVar1 = uVar1 + 4;
          *param_1 = *param_2;
          *param_2 = pMVar3;
        }
      }
    }
  }
  return uVar1;
}

