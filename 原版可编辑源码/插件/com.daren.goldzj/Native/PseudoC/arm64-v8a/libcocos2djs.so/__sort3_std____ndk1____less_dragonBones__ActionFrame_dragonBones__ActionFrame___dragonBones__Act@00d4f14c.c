
/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<dragonBones::ActionFrame,
   dragonBones::ActionFrame>&, dragonBones::ActionFrame*>(dragonBones::ActionFrame*,
   dragonBones::ActionFrame*, dragonBones::ActionFrame*,
   std::__ndk1::__less<dragonBones::ActionFrame, dragonBones::ActionFrame>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
               (ActionFrame *param_1,ActionFrame *param_2,ActionFrame *param_3,__less *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ActionFrame *pAVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(uint *)param_2;
  uVar2 = *(uint *)param_1;
  uVar3 = *(uint *)param_3;
  if (uVar2 <= uVar1) {
    if (uVar1 <= uVar3) {
      return 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(uint *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
    *(undefined8 *)(param_3 + 8) = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar4;
    uVar1 = *(uint *)param_1;
    if (*(uint *)param_2 < uVar1) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      uVar7 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(uint *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 0x10) = uVar5;
      *(undefined8 *)(param_2 + 8) = uVar8;
      *(undefined8 *)(param_2 + 0x18) = uVar4;
      return 2;
    }
    return 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (uVar3 < uVar1) {
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(uint *)param_3 = uVar2;
    *(undefined8 *)(param_3 + 8) = uVar4;
    *(undefined8 *)(param_3 + 0x10) = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar5;
    return 1;
  }
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  pAVar6 = param_2 + 8;
  uVar7 = *(undefined8 *)pAVar6;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(uint *)param_2 = uVar2;
  *(undefined8 *)pAVar6 = uVar4;
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  if (*(uint *)param_3 < uVar2) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)pAVar6 = 0;
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(uint *)param_3 = uVar2;
    *(undefined8 *)(param_3 + 8) = uVar4;
    *(undefined8 *)(param_3 + 0x10) = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar5;
    return 2;
  }
  return 1;
}

