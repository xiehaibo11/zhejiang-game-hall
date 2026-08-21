
int FUN_00de6810(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  void *__src;
  int iVar7;
  code *pcVar8;
  long lVar9;
  void *__src_00;
  int iVar10;
  uint *puVar11;
  
  puVar11 = (uint *)*param_2;
  iVar5 = *(int *)(param_1 + 0xc);
  iVar10 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x18);
  __src = *(void **)(param_1 + 0x20);
  __src_00 = *(void **)(param_1 + 0x28);
  pcVar8 = *(code **)(&DAT_01d54720 + (ulong)*puVar11 * 8);
  lVar9 = *(long *)(puVar11 + 4) + (long)(int)puVar11[6] * (long)iVar7;
  iVar1 = iVar5 + 2;
  uVar2 = iVar7 + iVar10;
  if (-1 < iVar5 + 1) {
    iVar1 = iVar5 + 1;
  }
  if (iVar7 == 0) {
    (*pcVar8)(lVar6,0,__src,__src_00,__src,__src_00,lVar9,0,iVar5);
    iVar7 = 2;
  }
  else {
    (*pcVar8)(param_2[1],lVar6,param_2[2],param_2[3],__src,__src_00,lVar9 - (int)puVar11[6],lVar9,
              iVar5);
    iVar10 = iVar10 + 1;
    iVar7 = iVar7 + 2;
  }
  for (; iVar7 < (int)uVar2; iVar7 = iVar7 + 2) {
    pvVar3 = (void *)((long)__src + (long)*(int *)(param_1 + 0x34));
    pvVar4 = (void *)((long)__src_00 + (long)*(int *)(param_1 + 0x34));
    lVar9 = lVar9 + (long)(int)puVar11[6] * 2;
    lVar6 = lVar6 + (long)*(int *)(param_1 + 0x30) * 2;
    (*pcVar8)(lVar6 - *(int *)(param_1 + 0x30),lVar6,__src,__src_00,pvVar3,pvVar4,
              lVar9 - (int)puVar11[6],lVar9,iVar5);
    __src = pvVar3;
    __src_00 = pvVar4;
  }
  pvVar3 = (void *)(lVar6 + *(int *)(param_1 + 0x30));
  if ((int)(*(int *)(param_1 + 0x80) + uVar2) < *(int *)(param_1 + 0x84)) {
    memcpy((void *)param_2[1],pvVar3,(long)iVar5);
    memcpy((void *)param_2[2],__src,(long)(iVar1 >> 1));
    memcpy((void *)param_2[3],__src_00,(long)(iVar1 >> 1));
    iVar10 = iVar10 + -1;
  }
  else if ((uVar2 & 1) == 0) {
    (*pcVar8)(pvVar3,0,__src,__src_00,__src,__src_00,lVar9 + (int)puVar11[6],0,iVar5);
  }
  return iVar10;
}

