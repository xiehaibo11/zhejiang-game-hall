
void uv__io_start(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  param_3 = param_3 | *(uint *)(param_2 + 0x28);
  *(uint *)(param_2 + 0x28) = param_3;
  if (uVar1 < *(int *)(param_2 + 0x30) + 1U) {
    lVar4 = *(long *)(param_1 + 0x68);
    if (lVar4 == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar4 + (ulong)uVar1 * 8);
      uVar8 = *(undefined8 *)(lVar4 + (ulong)(uVar1 + 1) * 8);
    }
    uVar1 = *(int *)(param_2 + 0x30) + 2;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar3 = uVar1 - 1;
    lVar4 = uv__realloc(lVar4,(ulong)(uVar1 + 1) << 3);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = *(uint *)(param_1 + 0x70);
    if (uVar6 < uVar3) {
      do {
        *(undefined8 *)(lVar4 + (ulong)uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
    *(undefined8 *)(lVar4 + (ulong)uVar3 * 8) = uVar7;
    *(undefined8 *)(lVar4 + (ulong)uVar1 * 8) = uVar8;
    param_3 = *(uint *)(param_2 + 0x28);
    *(long *)(param_1 + 0x68) = lVar4;
    *(uint *)(param_1 + 0x70) = uVar3;
  }
  if (*(uint *)(param_2 + 0x2c) != param_3) {
    lVar4 = param_2 + 0x18;
    if (lVar4 == *(long *)(param_2 + 0x18)) {
      *(long *)(param_2 + 0x18) = param_1 + 0x58;
      plVar5 = *(long **)(param_1 + 0x60);
      *(long **)(param_2 + 0x20) = plVar5;
      *plVar5 = lVar4;
      *(long *)(param_1 + 0x60) = lVar4;
    }
    lVar4 = (long)*(int *)(param_2 + 0x30) * 8;
    if (*(long *)(*(long *)(param_1 + 0x68) + lVar4) == 0) {
      iVar2 = *(int *)(param_1 + 0x74);
      *(long *)(*(long *)(param_1 + 0x68) + lVar4) = param_2;
      *(int *)(param_1 + 0x74) = iVar2 + 1;
      return;
    }
  }
  return;
}

