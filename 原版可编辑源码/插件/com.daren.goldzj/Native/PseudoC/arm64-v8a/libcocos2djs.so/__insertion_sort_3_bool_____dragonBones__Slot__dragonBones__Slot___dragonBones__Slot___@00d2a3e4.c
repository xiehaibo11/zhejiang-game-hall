
/* void std::__ndk1::__insertion_sort_3<bool (*&)(dragonBones::Slot*, dragonBones::Slot*),
   dragonBones::Slot**>(dragonBones::Slot**, dragonBones::Slot**, bool (*&)(dragonBones::Slot*,
   dragonBones::Slot*)) */

void std::__ndk1::
     __insertion_sort_3<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
               (Slot **param_1,Slot **param_2,_func_bool_Slot_ptr_Slot_ptr *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  Slot *pSVar4;
  Slot *pSVar5;
  Slot **ppSVar6;
  Slot **ppSVar7;
  Slot **ppSVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar2 = (**(code **)param_3)(param_1[1],*param_1);
  uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      auVar11 = *(undefined1 (*) [16])(param_1 + 1);
      auVar12 = NEON_ext(auVar11,auVar11,8,1);
      param_1[2] = auVar12._8_8_;
      param_1[1] = auVar12._0_8_;
      uVar2 = (**(code **)param_3)(auVar11._8_8_,*param_1);
      if ((uVar2 & 1) != 0) {
        auVar11 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
        param_1[1] = auVar11._8_8_;
        *param_1 = auVar11._0_8_;
      }
    }
  }
  else {
    pSVar4 = *param_1;
    if ((uVar3 & 1) == 0) {
      *param_1 = param_1[1];
      param_1[1] = pSVar4;
      uVar2 = (**(code **)param_3)(param_1[2]);
      if ((uVar2 & 1) != 0) {
        auVar11 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1),8
                           ,1);
        param_1[2] = auVar11._8_8_;
        param_1[1] = auVar11._0_8_;
      }
    }
    else {
      pSVar5 = param_1[2];
      param_1[2] = pSVar4;
      *param_1 = pSVar5;
    }
  }
  if (param_1 + 3 != param_2) {
    lVar9 = 0;
    ppSVar7 = param_1 + 3;
    ppSVar8 = param_1 + 2;
    do {
      ppSVar6 = ppSVar7;
      uVar2 = (**(code **)param_3)(*ppSVar6,*ppSVar8);
      if ((uVar2 & 1) != 0) {
        pSVar4 = *ppSVar6;
        lVar1 = lVar9;
        do {
          lVar10 = lVar1;
          *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar10 + 0x10);
          ppSVar7 = param_1;
          if (lVar10 == -0x10) goto LAB_00d2a510;
          uVar2 = (**(code **)param_3)(pSVar4,*(undefined8 *)((long)param_1 + lVar10 + 8));
          lVar1 = lVar10 + -8;
        } while ((uVar2 & 1) != 0);
        ppSVar7 = (Slot **)((long)param_1 + lVar10 + 0x10);
LAB_00d2a510:
        *ppSVar7 = pSVar4;
      }
      lVar9 = lVar9 + 8;
      ppSVar7 = ppSVar6 + 1;
      ppSVar8 = ppSVar6;
    } while (ppSVar6 + 1 != param_2);
  }
  return;
}

