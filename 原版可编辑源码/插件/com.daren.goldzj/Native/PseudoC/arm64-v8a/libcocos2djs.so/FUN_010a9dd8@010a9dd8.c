
int FUN_010a9dd8(undefined8 param_1,ulong param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar4 = param_2 & 0xffffffff00000000;
  iVar3 = *(int *)((uVar4 | *(uint *)(param_2 + 0xb)) + 7);
  uVar7 = uVar4 | *(uint *)(param_2 + 7);
  puVar2 = (uint *)(param_2 + 0xb);
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
    puVar2 = (uint *)(uVar7 + 3);
  }
  if ((int)*puVar2 >> 1 == 0) {
    return iVar3;
  }
  lVar6 = 0;
  iVar5 = 0;
  puVar1 = (uint *)(uVar7 + 7);
  uVar8 = *puVar1;
  if ((uVar8 & 1) != 0) goto LAB_010a9e48;
  do {
    iVar5 = iVar5 + 1;
    do {
      lVar6 = lVar6 + 4;
      if ((ulong)(uint)((int)*puVar2 >> 1) * 4 - lVar6 == 0) {
        return iVar5 + iVar3;
      }
      uVar8 = *(uint *)((long)puVar1 + (long)(int)lVar6);
      if ((uVar8 & 1) == 0) break;
LAB_010a9e48:
    } while (uVar8 == *(uint *)(uVar4 + 0xa8));
  } while( true );
}

