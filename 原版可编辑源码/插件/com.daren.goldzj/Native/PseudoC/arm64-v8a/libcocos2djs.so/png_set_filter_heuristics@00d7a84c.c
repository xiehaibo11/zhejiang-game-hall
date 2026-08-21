
void png_set_filter_heuristics(long param_1,int param_2,uint param_3,long param_4,double *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined2 uVar3;
  long *plVar4;
  double dVar5;
  
  iVar1 = FUN_00d7aa44();
  if ((param_2 == 2) && (iVar1 != 0)) {
    if (0 < (int)param_3) {
      uVar2 = 0;
      do {
        dVar5 = *(double *)(param_4 + uVar2 * 8);
        if (dVar5 <= 0.0) {
          uVar3 = 0x100;
          *(undefined2 *)(*(long *)(param_1 + 0x3e0) + uVar2 * 2) = 0x100;
          plVar4 = (long *)(param_1 + 1000);
        }
        else {
          *(short *)(*(long *)(param_1 + 1000) + uVar2 * 2) = (short)(int)(dVar5 * 256.0 + 0.5);
          uVar3 = (undefined2)(int)(256.0 / dVar5 + 0.5);
          plVar4 = (long *)(param_1 + 0x3e0);
        }
        *(undefined2 *)(*plVar4 + uVar2 * 2) = uVar3;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
    dVar5 = *param_5;
    if (1.0 <= dVar5) {
      **(undefined2 **)(param_1 + 0x3f8) = (short)(int)(8.0 / dVar5 + 0.5);
      **(undefined2 **)(param_1 + 0x3f0) = (short)(int)(dVar5 * 8.0 + 0.5);
    }
    dVar5 = param_5[1];
    if (1.0 <= dVar5) {
      *(short *)(*(long *)(param_1 + 0x3f8) + 2) = (short)(int)(8.0 / dVar5 + 0.5);
      *(short *)(*(long *)(param_1 + 0x3f0) + 2) = (short)(int)(dVar5 * 8.0 + 0.5);
    }
    dVar5 = param_5[2];
    if (1.0 <= dVar5) {
      *(short *)(*(long *)(param_1 + 0x3f8) + 4) = (short)(int)(8.0 / dVar5 + 0.5);
      *(short *)(*(long *)(param_1 + 0x3f0) + 4) = (short)(int)(dVar5 * 8.0 + 0.5);
    }
    dVar5 = param_5[3];
    if (1.0 <= dVar5) {
      *(short *)(*(long *)(param_1 + 0x3f8) + 6) = (short)(int)(8.0 / dVar5 + 0.5);
      *(short *)(*(long *)(param_1 + 0x3f0) + 6) = (short)(int)(dVar5 * 8.0 + 0.5);
    }
    dVar5 = param_5[4];
    if (1.0 <= dVar5) {
      *(short *)(*(long *)(param_1 + 0x3f8) + 8) = (short)(int)(8.0 / dVar5 + 0.5);
      *(short *)(*(long *)(param_1 + 0x3f0) + 8) = (short)(int)(dVar5 * 8.0 + 0.5);
    }
  }
  return;
}

