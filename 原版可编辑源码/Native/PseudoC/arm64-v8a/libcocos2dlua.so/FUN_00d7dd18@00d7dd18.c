
uint FUN_00d7dd18(Slot **param_1,Slot **param_2,Slot **param_3,Slot **param_4,undefined8 *param_5,
                 _func_bool_Slot_ptr_Slot_ptr *param_6)

{
  uint uVar1;
  ulong uVar2;
  Slot *pSVar3;
  
  uVar1 = std::__ndk1::__sort4<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                    (param_1,param_2,param_3,param_4,param_6);
                    /* try { // try from 00d7dd5c to 00e7dd6b has its CatchHandler @ 00d7e53c */
  uVar2 = (**(code **)param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 00d7dd70 to 00e7dd7f has its CatchHandler @ 00d7e568 */
    pSVar3 = *param_4;
    *param_4 = (Slot *)*param_5;
    *param_5 = pSVar3;
    uVar2 = (**(code **)param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
    else {
      pSVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = pSVar3;
      uVar2 = (**(code **)param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        uVar1 = uVar1 + 2;
      }
      else {
        pSVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = pSVar3;
        uVar2 = (**(code **)param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          uVar1 = uVar1 + 3;
        }
        else {
          pSVar3 = *param_1;
          uVar1 = uVar1 + 4;
          *param_1 = *param_2;
          *param_2 = pSVar3;
        }
      }
    }
  }
  return uVar1;
}

