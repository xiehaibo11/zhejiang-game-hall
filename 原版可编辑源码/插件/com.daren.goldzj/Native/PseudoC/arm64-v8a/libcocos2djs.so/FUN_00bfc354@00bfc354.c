
long FUN_00bfc354(long param_1,code *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = uv__getiovmax();
  uVar2 = *(uint *)(param_1 + 0x124);
  lVar7 = *(long *)(param_1 + 0x128);
  lVar6 = 0;
  do {
    if (uVar2 == 0) {
LAB_00bfc3e8:
      __errno();
      lVar4 = lVar6;
LAB_00bfc3f0:
      if (lVar7 != param_1 + 0x178) {
        uv__free(lVar7);
      }
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      return lVar4;
    }
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x124) = uVar1;
    lVar4 = (*param_2)(param_1);
    if (lVar4 < 1) {
      if (lVar6 == 0) {
        piVar5 = (int *)__errno();
        if ((*piVar5 == 4) && (lVar4 == -1)) {
          return -1;
        }
        goto LAB_00bfc3f0;
      }
      goto LAB_00bfc3e8;
    }
    lVar6 = lVar6 + lVar4;
    if (-1 < *(long *)(param_1 + 0x130)) {
      *(long *)(param_1 + 0x130) = lVar4 + *(long *)(param_1 + 0x130);
    }
    uVar2 = uVar2 - *(uint *)(param_1 + 0x124);
    *(ulong *)(param_1 + 0x128) =
         *(long *)(param_1 + 0x128) + (ulong)*(uint *)(param_1 + 0x124) * 0x10;
  } while( true );
}

