
void FUN_01347660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x26;
  undefined8 uVar8;
  
  uVar2 = param_1 - 1;
  if (param_1 * 8 < (long)&stack0x00000000 - *(long *)(unaff_x26 + 0x50)) {
    lVar1 = (param_1 + 1U & 0xfffffffffffffffe) * -8;
    *(undefined8 *)(&stack0x00000000 + uVar2 * 8 + lVar1) = *(undefined8 *)(unaff_x26 + 0xa0);
    puVar4 = (undefined8 *)(param_5 + uVar2 * -8);
    uVar3 = *puVar4;
    puVar5 = puVar4 + 1;
    puVar6 = (undefined8 *)(&stack0x00000000 + lVar1);
    uVar7 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar7 = param_1 - 2;
      *(undefined8 *)(&stack0x00000000 + lVar1) = puVar4[1];
      puVar5 = puVar4 + 2;
      puVar6 = (undefined8 *)(&stack0x00000008 + lVar1);
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 2) {
      uVar8 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar8;
      puVar5 = puVar5 + 2;
      puVar6 = puVar6 + 2;
    }
    FUN_01341500(uVar2,param_2,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
}

