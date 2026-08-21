
undefined8 TIFFMergeFieldInfo(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  if (*(long *)(param_1 + 0x430) == 0) {
    lVar7 = _TIFFCheckMalloc(param_1,1,0x18,"for fields array");
    *(long *)(param_1 + 0x428) = lVar7;
  }
  else {
    lVar7 = _TIFFCheckRealloc(param_1,*(undefined8 *)(param_1 + 0x428),
                              *(long *)(param_1 + 0x430) + 1,0x18,"for fields array");
    *(long *)(param_1 + 0x428) = lVar7;
  }
  if (lVar7 != 0) {
    uVar11 = (ulong)param_3;
    lVar12 = *(long *)(param_1 + 0x430) * 0x18;
    puVar8 = (undefined4 *)(lVar7 + lVar12);
    *(long *)(param_1 + 0x430) = *(long *)(param_1 + 0x430) + 1;
    *puVar8 = 2;
    puVar8[1] = param_3;
    puVar8[2] = param_3;
    puVar8 = (undefined4 *)_TIFFCheckMalloc(param_1,uVar11,0x30,"for fields array");
    *(undefined4 **)(*(long *)(param_1 + 0x428) + lVar12 + 0x10) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      if (param_3 != 0) {
        puVar13 = (undefined4 *)(param_2 + 8);
        puVar14 = puVar8;
        do {
          *puVar14 = puVar13[-2];
          uVar4 = *(undefined2 *)(puVar13 + -1);
          *(undefined2 *)(puVar14 + 1) = uVar4;
          *(undefined2 *)((long)puVar14 + 6) = *(undefined2 *)((long)puVar13 + -2);
          uVar5 = *puVar13;
          puVar14[2] = uVar5;
          puVar14[3] = 0;
          uVar2 = *(undefined1 *)((long)puVar13 + 7);
          uVar5 = FUN_00db6da4(uVar5,uVar4,uVar2);
          puVar14[4] = uVar5;
          puVar14[5] = uVar5;
          uVar11 = uVar11 - 1;
          *(undefined2 *)(puVar14 + 6) = *(undefined2 *)(puVar13 + 1);
          uVar3 = *(undefined1 *)((long)puVar13 + 6);
          *(undefined1 *)((long)puVar14 + 0x1b) = uVar2;
          *(undefined1 *)((long)puVar14 + 0x1a) = uVar3;
          puVar1 = (undefined8 *)(puVar13 + 2);
          puVar13 = puVar13 + 6;
          *(undefined8 *)(puVar14 + 8) = *puVar1;
          *(undefined8 *)(puVar14 + 10) = 0;
          puVar14 = puVar14 + 0xc;
        } while (uVar11 != 0);
      }
      iVar6 = _TIFFMergeFields(param_1,puVar8,param_3);
      if (iVar6 != 0) {
        return 0;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar10 = "Setting up field info failed";
      goto LAB_00db6d84;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x3b8);
  pcVar10 = "Failed to allocate fields array";
LAB_00db6d84:
  TIFFErrorExt(uVar9,"TIFFMergeFieldInfo",pcVar10);
  return 0xffffffff;
}

