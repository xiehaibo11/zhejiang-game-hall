
uint uv_timer_start(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  
  if (param_2 == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    if ((*(uint *)(param_1 + 0x58) >> 0xe & 1) != 0) {
      uv_timer_stop();
    }
    lVar10 = *(long *)(param_1 + 8);
    plVar1 = (long *)(lVar10 + 0x208);
    lVar6 = *(long *)(lVar10 + 0x218);
    uVar2 = param_3 + *(long *)(lVar10 + 0x220);
    iVar5 = *(int *)(lVar10 + 0x210);
    *(long *)(param_1 + 0x60) = param_2;
    *(undefined8 *)(param_1 + 0x88) = param_4;
    if (uVar2 < param_3) {
      uVar2 = 0xffffffffffffffff;
    }
    *(ulong *)(param_1 + 0x80) = uVar2;
    *(long *)(lVar10 + 0x218) = lVar6 + 1;
    uVar4 = iVar5 + 1;
    *(long *)(param_1 + 0x90) = lVar6;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    plVar7 = plVar1;
    plVar11 = plVar1;
    if (1 < uVar4) {
      iVar5 = 0;
      uVar8 = 0;
      uVar9 = uVar4;
      do {
        uVar3 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        uVar8 = uVar3 | uVar8 << 1;
        iVar5 = iVar5 + 1;
      } while (uVar9 != 1);
      if (iVar5 != 0) {
        while( true ) {
          if (uVar3 == 0) {
            plVar11 = (long *)*plVar7;
          }
          else {
            plVar11 = (long *)(*plVar7 + 8);
          }
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) break;
          uVar8 = uVar8 >> 1;
          uVar3 = uVar8 & 1;
          plVar7 = plVar11;
        }
      }
    }
    *(long *)(param_1 + 0x78) = *plVar7;
    *plVar11 = param_1 + 0x68;
    *(uint *)(lVar10 + 0x210) = uVar4;
    lVar6 = *(long *)(param_1 + 0x78);
    while (lVar6 != 0) {
      if ((*(ulong *)(lVar6 + 0x18) <= *(ulong *)(param_1 + 0x80)) &&
         ((*(ulong *)(lVar6 + 0x18) < *(ulong *)(param_1 + 0x80) ||
          (*(ulong *)(lVar6 + 0x28) <= *(ulong *)(param_1 + 0x90))))) break;
      FUN_00bf4528(plVar1,lVar6,param_1 + 0x68);
      lVar6 = *(long *)(param_1 + 0x78);
    }
    uVar4 = *(uint *)(param_1 + 0x58);
    if (((uVar4 >> 0xe & 1) == 0) &&
       (*(uint *)(param_1 + 0x58) = uVar4 | 0x4000, (uVar4 >> 0xd & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      return uVar4 & 0x4000;
    }
    uVar4 = 0;
  }
  return uVar4;
}

