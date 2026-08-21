
void FUN_010fb1fc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  short *psVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x250);
  if (*(long *)(lVar13 + 0x20) == 0) goto LAB_010fb354;
  if (((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x13c) == 0)) ||
     (*(long *)(param_1 + 0xc0) == 0)) {
LAB_010fb348:
    pcVar7 = FUN_010fb5f8;
  }
  else {
    lVar6 = *(long *)(lVar13 + 0xd8);
    if (lVar6 == 0) {
      lVar6 = (*(code *)**(undefined8 **)(param_1 + 8))
                        (param_1,1,(long)*(int *)(param_1 + 0x38) * 0x18);
      *(long *)(lVar13 + 0xd8) = lVar6;
    }
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_010fb348;
    lVar8 = 0;
    lVar9 = 0;
    bVar5 = false;
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x130) + 0x50);
    puVar11 = (undefined4 *)(lVar6 + 0xc);
    do {
      psVar12 = (short *)*puVar10;
      if (((((psVar12 == (short *)0x0) || (*psVar12 == 0)) ||
           ((psVar12[1] == 0 || ((psVar12[8] == 0 || (psVar12[0x10] == 0)))))) || (psVar12[9] == 0))
         || ((psVar12[2] == 0 || (*(int *)(*(long *)(param_1 + 0xc0) + lVar8) < 0))))
      goto LAB_010fb348;
      lVar6 = *(long *)(param_1 + 0xc0) + lVar8;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x100;
      puVar10 = puVar10 + 0xc;
      puVar11[-2] = *(undefined4 *)(lVar6 + 4);
      iVar1 = *(int *)(lVar6 + 4);
      puVar11[-1] = *(undefined4 *)(lVar6 + 8);
      iVar2 = *(int *)(lVar6 + 8);
      *puVar11 = *(undefined4 *)(lVar6 + 0xc);
      iVar3 = *(int *)(lVar6 + 0xc);
      puVar11[1] = *(undefined4 *)(lVar6 + 0x10);
      iVar4 = *(int *)(lVar6 + 0x10);
      puVar11[2] = *(undefined4 *)(lVar6 + 0x14);
      puVar11 = puVar11 + 6;
      if ((((iVar2 != 0 || iVar1 != 0) || iVar3 != 0) || iVar4 != 0) || *(int *)(lVar6 + 0x14) != 0)
      {
        bVar5 = true;
      }
    } while (lVar9 < *(int *)(param_1 + 0x38));
    if (!bVar5) goto LAB_010fb348;
    pcVar7 = FUN_010fbb04;
  }
  *(code **)(lVar13 + 0x18) = pcVar7;
LAB_010fb354:
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}

