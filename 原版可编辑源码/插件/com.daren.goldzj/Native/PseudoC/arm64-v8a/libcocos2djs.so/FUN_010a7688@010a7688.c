
int FUN_010a7688(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = param_2 & 0xffffffff00000000;
  uVar4 = uVar1 | *(uint *)(param_2 + 7);
  iVar3 = (*(int *)(uVar4 + 3) >> 1) + -2;
  iVar2 = 0;
  if (iVar3 == 0) {
LAB_010a76e8:
    return iVar2 + (*(int *)((uVar1 | *(uint *)(uVar4 + 0xb)) + 7) >> 1);
  }
  iVar5 = 8;
  uVar6 = *(uint *)(uVar4 + 0xf);
  if ((uVar6 & 1) != 0) goto LAB_010a76d8;
  do {
    iVar2 = iVar2 + 1;
    do {
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 4;
      if (iVar3 == 0) goto LAB_010a76e8;
      uVar6 = *(uint *)(uVar4 + 7 + (long)iVar5);
      if ((uVar6 & 1) == 0) break;
LAB_010a76d8:
    } while (uVar6 == *(uint *)(uVar1 + 0xa8));
  } while( true );
}

