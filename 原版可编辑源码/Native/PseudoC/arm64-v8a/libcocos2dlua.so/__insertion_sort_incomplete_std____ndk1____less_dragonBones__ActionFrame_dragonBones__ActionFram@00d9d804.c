
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<dragonBones::ActionFrame,
   dragonBones::ActionFrame>&, dragonBones::ActionFrame*>(dragonBones::ActionFrame*,
   dragonBones::ActionFrame*, std::__ndk1::__less<dragonBones::ActionFrame,
   dragonBones::ActionFrame>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
               (ActionFrame *param_1,ActionFrame *param_2,__less *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ActionFrame *pAVar6;
  undefined8 uVar7;
  ActionFrame *pAVar8;
  long lVar9;
  uint uVar10;
  ActionFrame *pAVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
                    /* catch() { ... } // from try @ 00d9d7e8 with catch @ 00d9d828 */
  switch((long)param_2 - (long)param_1 >> 5) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = *(uint *)param_1;
    if (*(uint *)(param_2 + -0x20) < uVar1) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + -0x20);
      uVar13 = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + 8) = uVar13;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + -8);
      *(uint *)(param_2 + -0x20) = uVar1;
      *(undefined8 *)(param_2 + -0x10) = uVar7;
      *(undefined8 *)(param_2 + -0x18) = uVar12;
      *(undefined8 *)(param_2 + -8) = uVar5;
      return true;
    }
    break;
  case 3:
    __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (param_1,param_1 + 0x20,param_2 + -0x20,param_3);
    return true;
  case 4:
    __sort4<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (param_1,param_1 + 0x20,param_1 + 0x40,param_2 + -0x20,param_3);
    break;
  case 5:
    FUN_00d9d694(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,param_2 + -0x20);
    return true;
  default:
    __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (param_1,param_1 + 0x20,param_1 + 0x40,param_3);
    if (param_1 + 0x60 != param_2) {
      lVar3 = 0;
      iVar4 = 0;
      pAVar8 = param_1 + 0x60;
      pAVar11 = param_1 + 0x40;
      do {
        pAVar6 = pAVar8;
        uVar1 = *(uint *)pAVar6;
        if (uVar1 < *(uint *)pAVar11) {
          uVar5 = *(undefined8 *)(pAVar6 + 8);
          uVar12 = *(undefined8 *)(pAVar6 + 0x10);
          uVar7 = *(undefined8 *)(pAVar6 + 0x18);
          *(undefined8 *)(pAVar6 + 0x10) = 0;
          *(undefined8 *)(pAVar6 + 0x18) = 0;
          *(undefined8 *)(pAVar6 + 8) = 0;
          uVar10 = *(uint *)pAVar11;
          lVar2 = lVar3;
          do {
            lVar9 = lVar2;
            *(uint *)(param_1 + lVar9 + 0x60) = uVar10;
            uVar14 = *(undefined8 *)(param_1 + lVar9 + 0x50);
            uVar13 = *(undefined8 *)(param_1 + lVar9 + 0x48);
            *(undefined8 *)(param_1 + lVar9 + 0x48) = 0;
            *(undefined8 *)(param_1 + lVar9 + 0x50) = 0;
            *(undefined8 *)(param_1 + lVar9 + 0x70) = uVar14;
            *(undefined8 *)(param_1 + lVar9 + 0x68) = uVar13;
            *(undefined8 *)(param_1 + lVar9 + 0x78) = *(undefined8 *)(param_1 + lVar9 + 0x58);
                    /* try { // try from 00d9d944 to 00e9d9db has its CatchHandler @ 00d9d944
                       catch() { ... } // from try @ 00d9d944 with catch @ 00d9d944
                       catch() { ... } // from try @ 00d9e5dc with catch @ 00d9d944
                       catch() { ... } // from try @ 00d9f230 with catch @ 00d9d944 */
            *(undefined8 *)(param_1 + lVar9 + 0x58) = 0;
            pAVar8 = param_1;
            if (lVar9 == -0x40) goto LAB_00d9d8cc;
            uVar10 = *(uint *)(param_1 + lVar9 + 0x20);
            lVar2 = lVar9 + -0x20;
          } while (uVar1 < uVar10);
          pAVar8 = param_1 + lVar9 + 0x40;
LAB_00d9d8cc:
          iVar4 = iVar4 + 1;
          *(uint *)pAVar8 = uVar1;
          *(undefined8 *)(param_1 + lVar9 + 0x48) = uVar5;
          *(undefined8 *)(param_1 + lVar9 + 0x50) = uVar12;
          *(undefined8 *)(param_1 + lVar9 + 0x58) = uVar7;
          if (iVar4 == 8) {
            return pAVar6 + 0x20 == param_2;
                    /* try { // try from 00d9d9dc to 00e9d9e3 has its CatchHandler @ 00d9f358 */
          }
        }
        lVar3 = lVar3 + 0x20;
        pAVar8 = pAVar6 + 0x20;
        pAVar11 = pAVar6;
      } while (pAVar6 + 0x20 != param_2);
    }
  }
  return true;
}

