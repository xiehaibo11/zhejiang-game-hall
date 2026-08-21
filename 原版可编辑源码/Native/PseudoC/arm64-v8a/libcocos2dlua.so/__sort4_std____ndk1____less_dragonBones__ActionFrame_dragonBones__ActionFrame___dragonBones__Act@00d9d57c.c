
/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<dragonBones::ActionFrame,
   dragonBones::ActionFrame>&, dragonBones::ActionFrame*>(dragonBones::ActionFrame*,
   dragonBones::ActionFrame*, dragonBones::ActionFrame*, dragonBones::ActionFrame*,
   std::__ndk1::__less<dragonBones::ActionFrame, dragonBones::ActionFrame>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
               (ActionFrame *param_1,ActionFrame *param_2,ActionFrame *param_3,ActionFrame *param_4,
               __less *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                    (param_1,param_2,param_3,param_5);
                    /* catch() { ... } // from try @ 00d9cf84 with catch @ 00d9d5a4 */
                    /* catch() { ... } // from try @ 00d9cf48 with catch @ 00d9d5a8 */
  uVar1 = *(uint *)param_3;
  if (*(uint *)param_4 < uVar1) {
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    uVar4 = *(undefined8 *)(param_3 + 8);
                    /* catch() { ... } // from try @ 00d9d100 with catch @ 00d9d5b8 */
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
                    /* catch() { ... } // from try @ 00d9d1b0 with catch @ 00d9d5c8 */
    *(undefined4 *)param_3 = *(undefined4 *)param_4;
                    /* catch() { ... } // from try @ 00d9d254 with catch @ 00d9d5cc */
    uVar6 = *(undefined8 *)(param_4 + 8);
                    /* catch() { ... } // from try @ 00d9d210 with catch @ 00d9d5d0
                       catch() { ... } // from try @ 00d9d274 with catch @ 00d9d5d0 */
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_3 + 8) = uVar6;
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    *(uint *)param_4 = uVar1;
    *(undefined8 *)(param_4 + 0x10) = uVar5;
    *(undefined8 *)(param_4 + 8) = uVar4;
    *(undefined8 *)(param_4 + 0x18) = uVar3;
    uVar1 = *(uint *)param_2;
    if (*(uint *)param_3 < uVar1) {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 8);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      uVar6 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar6;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(uint *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 0x10) = uVar5;
      *(undefined8 *)(param_3 + 8) = uVar4;
      *(undefined8 *)(param_3 + 0x18) = uVar3;
      uVar1 = *(uint *)param_1;
      if (*(uint *)param_2 < uVar1) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        uVar4 = *(undefined8 *)(param_1 + 8);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        uVar2 = uVar2 + 3;
        *(undefined4 *)param_1 = *(undefined4 *)param_2;
        uVar6 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 8) = uVar6;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(uint *)param_2 = uVar1;
        *(undefined8 *)(param_2 + 0x10) = uVar5;
        *(undefined8 *)(param_2 + 8) = uVar4;
        *(undefined8 *)(param_2 + 0x18) = uVar3;
      }
      else {
        uVar2 = uVar2 + 2;
      }
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

