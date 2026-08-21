
int FUN_01095a68(undefined8 param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar3 = param_2 & 0xffffffff00000000;
  uVar6 = uVar3 | *(uint *)(param_2 + 7);
  piVar2 = (int *)(param_2 + 0xb);
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
    piVar2 = (int *)(uVar6 + 3);
  }
  if (*piVar2 >> 1 == 0) {
    return 0;
  }
  lVar5 = 0;
  iVar4 = 0;
  puVar1 = (uint *)(uVar6 + 7);
  uVar7 = *puVar1;
  if ((uVar7 & 1) != 0) goto LAB_01095acc;
  do {
    iVar4 = iVar4 + 1;
    do {
      lVar5 = lVar5 + 4;
      if ((ulong)(uint)(*piVar2 >> 1) * 4 - lVar5 == 0) {
        return iVar4;
      }
      uVar7 = *(uint *)((long)puVar1 + (long)(int)lVar5);
      if ((uVar7 & 1) == 0) break;
LAB_01095acc:
    } while (uVar7 == *(uint *)(uVar3 + 0xa8));
  } while( true );
}

