
long FUN_0153336c(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  Zone *this;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  iVar4 = *(int *)(param_1 + 8);
  lVar6 = param_1;
  while (param_2 < iVar4) {
    lVar6 = *(long *)(lVar6 + 0x10);
    iVar4 = *(int *)(lVar6 + 8);
  }
  plVar10 = *(long **)(param_1 + 0x50);
  iVar4 = param_4;
  if (param_5 != 0) {
    iVar4 = param_5;
  }
  piVar2 = (int *)plVar10[1];
  param_3 = *(int *)(lVar6 + 0xc) + param_3;
  if (piVar2 < (int *)plVar10[2]) {
    *piVar2 = param_3;
    piVar2[1] = param_4;
    piVar2[2] = iVar4;
    plVar10[1] = plVar10[1] + 0xc;
  }
  else {
    lVar6 = (long)piVar2 - *plVar10 >> 2;
    uVar1 = lVar6 * -0x5555555555555555 + 1;
    if (0xaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = plVar10[2] - *plVar10 >> 2;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x5555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaa;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      this = (Zone *)plVar10[3];
      lVar8 = *(long *)(this + 0x10);
      uVar9 = uVar1 * 0xc + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(this + 0x18) - lVar8) < uVar9) {
        lVar8 = v8::internal::Zone::NewExpand(this,uVar9);
      }
      else {
        *(ulong *)(this + 0x10) = lVar8 + uVar9;
      }
    }
    piVar7 = (int *)(lVar8 + lVar6 * 4);
    *piVar7 = param_3;
    piVar7[1] = param_4;
    piVar7[2] = iVar4;
    puVar3 = (undefined8 *)*plVar10;
    piVar2 = piVar7;
    puVar5 = (undefined8 *)plVar10[1];
    while (puVar5 != puVar3) {
      iVar4 = *(int *)((long)puVar5 + -4);
      *(undefined8 *)(piVar2 + -3) = *(undefined8 *)((long)puVar5 + -0xc);
      piVar2[-1] = iVar4;
      piVar2 = piVar2 + -3;
      puVar5 = (undefined8 *)((long)puVar5 + -0xc);
    }
    *plVar10 = (long)piVar2;
    plVar10[1] = (long)(piVar7 + 3);
    plVar10[2] = lVar8 + uVar1 * 0xc;
  }
  return param_1;
}

