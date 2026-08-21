
void FUN_009fe1a0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_48;
  
  auVar7 = FUN_009fdecc((undefined8 *)(param_3 + 0x110),*param_2,param_2[1],&local_48);
                    /* try { // try from 009fe1e0 to 00afe1e7 has its CatchHandler @ 009fe240 */
                    /* try { // try from 009fe1e8 to 00afe25b has its CatchHandler @ 009fe0f4 */
  uVar2 = FUN_009fdf6c(param_1,auVar7._0_8_,auVar7._8_8_);
  lVar3 = FUN_009fe644(param_1,uVar2);
  *(uint *)(lVar3 + 0x70) = *(uint *)(lVar3 + 0x70) | 0x10000000;
  lVar4 = param_2[2];
  if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + -8), lVar5 != 0)) {
    lVar6 = 0;
    while( true ) {
      lVar5 = lVar5 + -1;
      puVar1 = (undefined8 *)(lVar4 + lVar6);
      uVar2 = FUN_009fdf6c(param_1,*puVar1,puVar1[1]);
                    /* catch() { ... } // from try @ 009fe18c with catch @ 009fe23c */
                    /* catch() { ... } // from try @ 009fe1e0 with catch @ 009fe240 */
      FUN_009fe7d8(param_1,lVar3,uVar2,*(undefined4 *)(puVar1 + 2));
      if (lVar5 == 0) break;
      lVar4 = param_2[2];
      lVar6 = lVar6 + 0x18;
    }
  }
  *(undefined8 *)(param_3 + 0x110) = local_48;
  return;
}

