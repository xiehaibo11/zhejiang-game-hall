
void FUN_00aa2250(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *(long *)(param_1 + 0x830);
  if (lVar1 != 0) {
    lVar5 = param_2[1];
    lVar4 = *param_2;
    lVar7 = param_2[3];
    lVar6 = param_2[2];
    lVar9 = param_2[5];
    lVar8 = param_2[4];
    lVar11 = param_2[7];
    lVar10 = param_2[6];
    lVar2 = param_2[8];
    lVar3 = param_2[9];
    do {
      lVar4 = lVar4 + *(long *)(lVar1 + 0x100);
      lVar5 = lVar5 + *(long *)(lVar1 + 0x108);
      param_2[1] = lVar5;
      *param_2 = lVar4;
      lVar6 = lVar6 + *(long *)(lVar1 + 0x110);
      lVar7 = lVar7 + *(long *)(lVar1 + 0x118);
      param_2[3] = lVar7;
      param_2[2] = lVar6;
      lVar8 = lVar8 + *(long *)(lVar1 + 0x120);
      lVar9 = lVar9 + *(long *)(lVar1 + 0x128);
      param_2[5] = lVar9;
      param_2[4] = lVar8;
      lVar2 = lVar2 + *(long *)(lVar1 + 0x140);
      param_2[8] = lVar2;
      lVar10 = lVar10 + *(long *)(lVar1 + 0x130);
      lVar11 = lVar11 + *(long *)(lVar1 + 0x138);
      param_2[7] = lVar11;
      param_2[6] = lVar10;
      lVar3 = lVar3 + *(long *)(lVar1 + 0x148);
      param_2[9] = lVar3;
      lVar1 = *(long *)(lVar1 + 0x158);
    } while (lVar1 != 0);
  }
  return;
}

