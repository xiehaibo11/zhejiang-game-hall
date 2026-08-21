
undefined8 *
FUN_010e3310(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
            undefined4 param_5,Zone *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar7 = *param_3;
  uVar2 = *param_4;
  *(undefined1 *)(param_2 + 2) = 1;
  *param_2 = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((long)param_2 + 0xc) = param_5;
  uVar1 = *(int *)((long)param_1 + 0xc) + 1;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  if (uVar1 + (uVar1 >> 2) < *(uint *)(param_1 + 1)) {
    return param_2;
  }
  lVar9 = *param_1;
  lVar8 = *(long *)(param_6 + 0x10);
  uVar4 = *(uint *)(param_1 + 1) << 1;
  uVar6 = (ulong)uVar4 * 0x18;
  if (uVar6 < (ulong)(*(long *)(param_6 + 0x18) - lVar8) ||
      uVar6 - (*(long *)(param_6 + 0x18) - lVar8) == 0) {
    *(ulong *)(param_6 + 0x10) = lVar8 + uVar6;
    *param_1 = lVar8;
  }
  else {
    lVar8 = v8::internal::Zone::NewExpand(param_6,uVar6);
    *param_1 = lVar8;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(param_1 + 1) = uVar4;
  if ((uVar4 != 0) && (*(undefined1 *)(lVar8 + 0x10) = 0, 1 < *(uint *)(param_1 + 1))) {
    uVar6 = 1;
    lVar8 = 0x28;
    do {
      uVar6 = uVar6 + 1;
      *(undefined1 *)(*param_1 + lVar8) = 0;
      lVar8 = lVar8 + 0x18;
    } while (uVar6 < *(uint *)(param_1 + 1));
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar1 != 0) {
    cVar3 = *(char *)(lVar9 + 0x10);
    lVar8 = lVar9 + 8;
    while( true ) {
      if (cVar3 != '\0') {
        uVar7 = FUN_010e31f8(param_1,lVar8 + -8,*(undefined4 *)(lVar8 + 4));
        FUN_010e3310(param_1,uVar7,lVar8 + -8,lVar8,*(undefined4 *)(lVar8 + 4),param_6);
        uVar1 = uVar1 - 1;
      }
      if (uVar1 == 0) break;
      cVar3 = *(char *)(lVar8 + 0x20);
      lVar8 = lVar8 + 0x18;
    }
  }
  puVar5 = (undefined8 *)FUN_010e31f8(param_1,param_3,param_5);
  return puVar5;
}

