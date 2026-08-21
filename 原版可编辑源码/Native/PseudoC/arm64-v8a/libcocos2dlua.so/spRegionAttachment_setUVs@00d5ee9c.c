
void spRegionAttachment_setUVs
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_4;
  uVar1 = param_3;
  uVar2 = param_2;
  uVar3 = param_1;
                    /* try { // try from 00d5eea0 to 00e5eeb3 has its CatchHandler @ 00d5f644 */
  if (param_6 != 0) {
    uVar4 = param_2;
    uVar1 = param_1;
    uVar2 = param_4;
    uVar3 = param_3;
  }
  *(undefined4 *)(param_5 + 0xa0) = uVar3;
  *(undefined4 *)(param_5 + 0xa4) = param_4;
                    /* try { // try from 00d5eeb4 to 00e5eebf has its CatchHandler @ 00d5f640 */
  *(undefined4 *)(param_5 + 0xa8) = param_1;
  *(undefined4 *)(param_5 + 0xac) = uVar2;
  *(undefined4 *)(param_5 + 0xb0) = uVar1;
  *(undefined4 *)(param_5 + 0xb4) = param_2;
  *(undefined4 *)(param_5 + 0x98) = param_3;
  *(undefined4 *)(param_5 + 0x9c) = uVar4;
  return;
}

