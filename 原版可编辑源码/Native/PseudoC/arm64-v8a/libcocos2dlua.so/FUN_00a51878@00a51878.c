
undefined4
FUN_00a51878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
                    /* catch() { ... } // from try @ 00a51830 with catch @ 00a518b8 */
                    /* try { // try from 00a518f4 to 00b51943 has its CatchHandler @ 00a518f4
                       catch() { ... } // from try @ 00a518f4 with catch @ 00a518f4
                       catch() { ... } // from try @ 00a5196c with catch @ 00a518f4
                       catch() { ... } // from try @ 00a519b4 with catch @ 00a518f4 */
  *(int *)(param_1 + 0x6b4) = (*(int *)(param_1 + 0x6b4) + 1) % 1000;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  iVar1 = FUN_00a2c6e4(*(long *)(param_1 + 0x50) % 0x1a);
  FUN_00a241ac(param_1 + 0x6b8,5,"%c%03d",iVar1 + 0x41,*(undefined4 *)(param_1 + 0x6b4));
  lVar3 = FUN_00a24258("%s %s",param_1 + 0x6b8,param_2);
  if (lVar3 == 0) {
    uVar2 = 0x1b;
  }
  else {
                    /* try { // try from 00a51944 to 00b5195b has its CatchHandler @ 00a519f8 */
    puStack_60 = &local_a0;
                    /* try { // try from 00a51960 to 00b5196b has its CatchHandler @ 00a519f4 */
                    /* try { // try from 00a5196c to 00b5199f has its CatchHandler @ 00a518f4 */
    ppuStack_68 = &local_70;
    uStack_58 = 0xffffff80ffffffd0;
    local_70 = (undefined1 *)register0x00000008;
    uVar2 = FUN_00a54c38(param_1 + 0x618,lVar3,&local_70);
                    /* try { // try from 00a519a0 to 00b519b3 has its CatchHandler @ 00a519f8 */
    (*(code *)PTR_free_01769a00)(lVar3);
  }
                    /* try { // try from 00a519b4 to 00b51a13 has its CatchHandler @ 00a518f4 */
  return uVar2;
}

