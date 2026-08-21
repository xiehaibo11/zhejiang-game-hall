
undefined4
FUN_00a3ae90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
                    /* catch() { ... } // from try @ 00a3adec with catch @ 00a3af04 */
  *(int *)(param_1 + 0x6b4) = (*(int *)(param_1 + 0x6b4) + 1) % 1000;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
                    /* try { // try from 00a3af20 to 00b3af73 has its CatchHandler @ 00a3af20
                       catch() { ... } // from try @ 00a3af20 with catch @ 00a3af20
                       catch() { ... } // from try @ 00a3b0f4 with catch @ 00a3af20 */
  iVar1 = FUN_00a16cfc(*(long *)(param_1 + 0x50) % 0x1a);
  FUN_00a0e7c4(param_1 + 0x6b8,5,"%c%03d",iVar1 + 0x41,*(undefined4 *)(param_1 + 0x6b4));
  lVar3 = FUN_00a0e870("%s %s",param_1 + 0x6b8,param_2);
  if (lVar3 == 0) {
    uVar2 = 0x1b;
  }
  else {
    puStack_60 = &local_a0;
                    /* try { // try from 00a3af74 to 00b3af8b has its CatchHandler @ 00a3b170 */
    ppuStack_68 = &local_70;
    uStack_58 = 0xffffff80ffffffd0;
                    /* try { // try from 00a3af94 to 00b3af9f has its CatchHandler @ 00a3b16c */
    local_70 = (undefined1 *)register0x00000008;
                    /* try { // try from 00a3afa0 to 00b3afab has its CatchHandler @ 00a3b168 */
    uVar2 = FUN_00a3e250(param_1 + 0x618,lVar3,&local_70);
                    /* try { // try from 00a3afac to 00b3b0f3 has its CatchHandler @ 00a3b180 */
    (*(code *)PTR_free_01d1b748)(lVar3);
  }
  return uVar2;
}

