
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
  
  uVar3 = *(uint *)param_2;
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)param_3;
  if (uVar3 < uVar1) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (uVar2 < uVar3) {
      *(undefined4 *)param_1 = *(undefined4 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      uVar3 = 1;
    }
    else {
                    /* try { // try from 00d9d508 to 00e9d51f has its CatchHandler @ 00d9cec0 */
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      pAVar6 = param_2 + 8;
      uVar7 = *(undefined8 *)pAVar6;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
                    /* try { // try from 00d9d520 to 00e9d527 has its CatchHandler @ 00d9d534 */
      *(uint *)param_2 = uVar1;
      *(undefined8 *)pAVar6 = uVar4;
                    /* try { // try from 00d9d528 to 00e9d52f has its CatchHandler @ 00d9d530 */
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      *(undefined8 *)(param_2 + 0x18) = uVar5;
                    /* catch() { ... } // from try @ 00d9d488 with catch @ 00d9d530
                       catch() { ... } // from try @ 00d9d528 with catch @ 00d9d530
                       try { // try from 00d9d530 to 00e9d62f has its CatchHandler @ 00d9cec0 */
                    /* catch() { ... } // from try @ 00d9d37c with catch @ 00d9d534
                       catch() { ... } // from try @ 00d9d520 with catch @ 00d9d534 */
      if (uVar1 <= *(uint *)param_3) {
        return 1;
      }
                    /* catch() { ... } // from try @ 00d9d500 with catch @ 00d9d538 */
      *(undefined8 *)pAVar6 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00d9d3b0 with catch @ 00d9d53c */
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar3 = 2;
      *(undefined4 *)param_2 = *(undefined4 *)param_3;
      uVar7 = *(undefined8 *)(param_3 + 8);
                    /* catch() { ... } // from try @ 00d9d0cc with catch @ 00d9d550 */
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar7;
                    /* catch() { ... } // from try @ 00d9cfb0 with catch @ 00d9d554 */
                    /* catch() { ... } // from try @ 00d9cff4 with catch @ 00d9d558 */
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    }
                    /* catch() { ... } // from try @ 00d9d190 with catch @ 00d9d55c */
    *(uint *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 8) = uVar4;
    *(undefined8 *)(param_3 + 0x10) = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar5;
    return uVar3;
  }
  if (uVar2 < uVar3) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 00d9d488 to 00e9d48f has its CatchHandler @ 00d9d530 */
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
                    /* try { // try from 00d9d490 to 00e9d4ff has its CatchHandler @ 00d9cec0 */
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(uint *)param_3 = uVar3;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
    *(undefined8 *)(param_3 + 8) = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar4;
    uVar3 = *(uint *)param_1;
    if (uVar3 <= *(uint *)param_2) {
                    /* catch() { ... } // from try @ 00d9d11c with catch @ 00d9d56c */
                    /* catch() { ... } // from try @ 00d9d080 with catch @ 00d9d570 */
      return 1;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(uint *)param_2 = uVar3;
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    *(undefined8 *)(param_2 + 8) = uVar8;
    *(undefined8 *)(param_2 + 0x18) = uVar4;
                    /* try { // try from 00d9d500 to 00e9d507 has its CatchHandler @ 00d9d538 */
    return 2;
  }
                    /* catch() { ... } // from try @ 00d9d060 with catch @ 00d9d574 */
                    /* catch() { ... } // from try @ 00d9d024 with catch @ 00d9d578 */
  return 0;
}

