
/* bool std::__ndk1::__insertion_sort_incomplete<bool (*&)(dragonBones::Slot*, dragonBones::Slot*),
   dragonBones::Slot**>(dragonBones::Slot**, dragonBones::Slot**, bool (*&)(dragonBones::Slot*,
   dragonBones::Slot*)) */

bool std::__ndk1::
     __insertion_sort_incomplete<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
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
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (**(code **)param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    pSVar4 = *param_1;
    *param_1 = param_2[-1];
    goto LAB_00d2a704;
  case 3:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_2[-1],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        return true;
      }
      pSVar4 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = pSVar4;
      uVar2 = (**(code **)param_3)(param_1[1],*param_1);
      if ((uVar2 & 1) == 0) {
        return true;
      }
      auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
      param_1[1] = auVar12._8_8_;
      *param_1 = auVar12._0_8_;
      return true;
    }
    pSVar4 = *param_1;
    if ((uVar3 & 1) != 0) {
      *param_1 = param_2[-1];
      param_2[-1] = pSVar4;
      return true;
    }
    *param_1 = param_1[1];
    param_1[1] = pSVar4;
    uVar2 = (**(code **)param_3)(param_2[-1]);
    if ((uVar2 & 1) == 0) {
      return true;
    }
    pSVar4 = param_1[1];
    param_1[1] = param_2[-1];
LAB_00d2a704:
    param_2[-1] = pSVar4;
    break;
  case 4:
    __sort4<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00d2a2dc(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
        auVar12 = *(undefined1 (*) [16])(param_1 + 1);
        auVar13 = NEON_ext(auVar12,auVar12,8,1);
        param_1[2] = auVar13._8_8_;
        param_1[1] = auVar13._0_8_;
        uVar2 = (**(code **)param_3)(auVar12._8_8_,*param_1);
        if ((uVar2 & 1) != 0) {
          auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
          param_1[1] = auVar12._8_8_;
          *param_1 = auVar12._0_8_;
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
          auVar12 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1)
                             ,8,1);
          param_1[2] = auVar12._8_8_;
          param_1[1] = auVar12._0_8_;
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
      iVar10 = 0;
      ppSVar7 = param_1 + 3;
      ppSVar8 = param_1 + 2;
      do {
        ppSVar6 = ppSVar7;
        uVar2 = (**(code **)param_3)(*ppSVar6,*ppSVar8);
        if ((uVar2 & 1) != 0) {
          pSVar4 = *ppSVar6;
          lVar1 = lVar9;
          do {
            lVar11 = lVar1;
            *(undefined8 *)((long)param_1 + lVar11 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x10);
            ppSVar7 = param_1;
            if (lVar11 == -0x10) goto LAB_00d2a79c;
            uVar2 = (**(code **)param_3)(pSVar4,*(undefined8 *)((long)param_1 + lVar11 + 8));
            lVar1 = lVar11 + -8;
          } while ((uVar2 & 1) != 0);
          ppSVar7 = (Slot **)((long)param_1 + lVar11 + 0x10);
LAB_00d2a79c:
          iVar10 = iVar10 + 1;
          *ppSVar7 = pSVar4;
          if (iVar10 == 8) {
            return ppSVar6 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        ppSVar7 = ppSVar6 + 1;
        ppSVar8 = ppSVar6;
      } while (ppSVar6 + 1 != param_2);
    }
  }
  return true;
}

