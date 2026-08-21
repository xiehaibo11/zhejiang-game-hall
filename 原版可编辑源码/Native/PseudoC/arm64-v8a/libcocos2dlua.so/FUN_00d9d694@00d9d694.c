
uint FUN_00d9d694(ActionFrame *param_1,ActionFrame *param_2,ActionFrame *param_3,
                 ActionFrame *param_4,uint *param_5,__less *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = std::__ndk1::
          __sort4<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar1 = *(uint *)param_4;
  if (*param_5 < uVar1) {
    uVar5 = *(undefined8 *)(param_4 + 0x10);
    uVar4 = *(undefined8 *)(param_4 + 8);
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined8 *)(param_4 + 8) = 0;
    *(uint *)param_4 = *param_5;
    uVar6 = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_5 + 4);
    *(undefined8 *)(param_4 + 8) = uVar6;
    *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_5 + 6);
    *param_5 = uVar1;
    *(undefined8 *)(param_5 + 4) = uVar5;
    *(undefined8 *)(param_5 + 2) = uVar4;
    *(undefined8 *)(param_5 + 6) = uVar3;
    uVar1 = *(uint *)param_3;
    if (*(uint *)param_4 < uVar1) {
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      uVar4 = *(undefined8 *)(param_3 + 8);
      uVar3 = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined8 *)(param_3 + 8) = 0;
                    /* catch() { ... } // from try @ 00d9d764 with catch @ 00d9d72c */
      *(undefined4 *)param_3 = *(undefined4 *)param_4;
      uVar6 = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(param_3 + 8) = uVar6;
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_4 + 0x18);
      *(uint *)param_4 = uVar1;
      *(undefined8 *)(param_4 + 0x10) = uVar5;
      *(undefined8 *)(param_4 + 8) = uVar4;
      *(undefined8 *)(param_4 + 0x18) = uVar3;
      uVar1 = *(uint *)param_2;
      if (*(uint *)param_3 < uVar1) {
                    /* try { // try from 00d9d75c to 00e9d763 has its CatchHandler @ 00d9d79c */
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        uVar4 = *(undefined8 *)(param_2 + 8);
        uVar3 = *(undefined8 *)(param_2 + 0x18);
                    /* try { // try from 00d9d764 to 00e9d7b7 has its CatchHandler @ 00d9d72c */
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
                    /* catch() { ... } // from try @ 00d9d75c with catch @ 00d9d79c */
        if (*(uint *)param_2 < uVar1) {
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          uVar4 = *(undefined8 *)(param_1 + 8);
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
          uVar2 = uVar2 + 4;
                    /* catch() { ... } // from try @ 00d9d7f0 with catch @ 00d9d7b8 */
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
          uVar2 = uVar2 + 3;
        }
      }
      else {
        uVar2 = uVar2 + 2;
                    /* try { // try from 00d9d7e8 to 00e9d7ef has its CatchHandler @ 00d9d828 */
      }
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
                    /* try { // try from 00d9d7f0 to 00e9d843 has its CatchHandler @ 00d9d7b8 */
  return uVar2;
}

