
/* unsigned int std::__ndk1::__sort4<bool (*&)(dragonBones::Slot*, dragonBones::Slot*),
   dragonBones::Slot**>(dragonBones::Slot**, dragonBones::Slot**, dragonBones::Slot**,
   dragonBones::Slot**, bool (*&)(dragonBones::Slot*, dragonBones::Slot*)) */

uint std::__ndk1::__sort4<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
               (Slot **param_1,Slot **param_2,Slot **param_3,Slot **param_4,
               _func_bool_Slot_ptr_Slot_ptr *param_5)

{
  ulong uVar1;
  ulong uVar2;
  Slot *pSVar3;
  uint uVar4;
  
  uVar1 = (**(code **)param_5)(*param_2,*param_1);
  uVar2 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_00d2a244;
    }
    pSVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pSVar3;
    uVar1 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar1 & 1) == 0) goto LAB_00d2a238;
    pSVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = pSVar3;
  }
  else {
    pSVar3 = *param_1;
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = pSVar3;
      goto LAB_00d2a244;
    }
    *param_1 = *param_2;
    *param_2 = pSVar3;
    uVar1 = (**(code **)param_5)(*param_3);
    if ((uVar1 & 1) == 0) {
LAB_00d2a238:
      uVar4 = 1;
      goto LAB_00d2a244;
    }
    pSVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = pSVar3;
  }
  uVar4 = 2;
LAB_00d2a244:
  uVar1 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar1 & 1) != 0) {
    pSVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = pSVar3;
    uVar1 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      pSVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = pSVar3;
      uVar1 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        pSVar3 = *param_1;
        uVar4 = uVar4 + 3;
        *param_1 = *param_2;
        *param_2 = pSVar3;
      }
    }
  }
  return uVar4;
}

