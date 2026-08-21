
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
  
                    /* try { // try from 00d7df94 to 00e7dfa3 has its CatchHandler @ 00d7e538 */
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
    goto LAB_00d7e144;
  case 3:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
                    /* try { // try from 00d7e008 to 00e7e023 has its CatchHandler @ 00d7e5ac */
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
                    /* try { // try from 00d7e028 to 00e7e037 has its CatchHandler @ 00d7e5b0 */
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
                    /* try { // try from 00d7e13c to 00e7e14b has its CatchHandler @ 00d7e57c */
    pSVar4 = param_1[1];
    param_1[1] = param_2[-1];
LAB_00d7e144:
    param_2[-1] = pSVar4;
    break;
  case 4:
    __sort4<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00d7dd18(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    uVar2 = (**(code **)param_3)(param_1[1],*param_1);
    uVar3 = (**(code **)param_3)(param_1[2],param_1[1]);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 00d7e0f0 to 00e7e0fb has its CatchHandler @ 00d7e4d0 */
        auVar12 = *(undefined1 (*) [16])(param_1 + 1);
        auVar13 = NEON_ext(auVar12,auVar12,8,1);
                    /* try { // try from 00d7e0fc to 00e7e107 has its CatchHandler @ 00d7e4c0 */
        param_1[2] = auVar13._8_8_;
        param_1[1] = auVar13._0_8_;
        uVar2 = (**(code **)param_3)(auVar12._8_8_,*param_1);
        if ((uVar2 & 1) != 0) {
          auVar12 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
          param_1[1] = auVar12._8_8_;
          *param_1 = auVar12._0_8_;
                    /* try { // try from 00d7e11c to 00e7e137 has its CatchHandler @ 00d7e578 */
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
      ppSVar6 = param_1 + 3;
      ppSVar8 = param_1 + 2;
      do {
        ppSVar7 = ppSVar6;
        uVar2 = (**(code **)param_3)(*ppSVar7,*ppSVar8);
        if ((uVar2 & 1) != 0) {
          pSVar4 = *ppSVar7;
          lVar1 = lVar9;
          do {
            lVar11 = lVar1;
            *(undefined8 *)((long)param_1 + lVar11 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x10);
            ppSVar6 = param_1;
            if (lVar11 == -0x10) goto LAB_00d7e188;
            uVar2 = (**(code **)param_3)(pSVar4,*(undefined8 *)((long)param_1 + lVar11 + 8));
            lVar1 = lVar11 + -8;
          } while ((uVar2 & 1) != 0);
          ppSVar6 = (Slot **)((long)param_1 + lVar11 + 0x10);
                    /* try { // try from 00d7e1fc to 00e7e287 has its CatchHandler @ 00d7e514 */
LAB_00d7e188:
          iVar10 = iVar10 + 1;
          *ppSVar6 = pSVar4;
          if (iVar10 == 8) {
            return ppSVar7 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        ppSVar6 = ppSVar7 + 1;
        ppSVar8 = ppSVar7;
      } while (ppSVar7 + 1 != param_2);
    }
  }
  return true;
}

