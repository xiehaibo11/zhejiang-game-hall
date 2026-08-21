
void FUN_00c19538(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(param_1 + 0x10);
  puVar3 = *(undefined8 **)(lVar7 + 0x60);
  puVar8 = (undefined8 *)*puVar3;
  if (puVar3 == puVar8) {
    *(undefined8 *)(lVar7 + 0x60) = 0;
    cVar1 = *(char *)((long)puVar8 + 9);
  }
  else {
    *puVar3 = *puVar8;
    cVar1 = *(char *)((long)puVar8 + 9);
  }
  if (cVar1 == '\n') {
    *puVar8 = *(undefined8 *)(lVar7 + 0x38);
    *(undefined8 **)(lVar7 + 0x38) = puVar8;
    *(byte *)(puVar8 + 1) = *(byte *)(lVar7 + 0x30) & 3 | *(byte *)(puVar8 + 1) & 0xe8;
    plVar5 = (long *)FUN_00c1bdd4(param_1,*(undefined8 *)(*(long *)(lVar7 + 0x168) + 0x20));
    if (*plVar5 == -1) {
      return;
    }
    *(undefined1 *)(lVar7 + 0x32) = 0;
    lVar4 = *plVar5;
    *plVar5 = -1;
    bVar9 = *(byte *)(lVar7 + 0xc1);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    *(byte *)(lVar7 + 0xc1) = bVar9 | 0x50;
    plVar6 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(lVar7 + 0x28) = 0x800000000000;
    *plVar6 = lVar4;
  }
  else {
    *puVar8 = **(undefined8 **)(lVar7 + 200);
    **(undefined8 **)(lVar7 + 200) = puVar8;
    lVar4 = puVar8[4];
    *(byte *)(puVar8 + 1) = *(byte *)(lVar7 + 0x30) & 3 | *(byte *)(puVar8 + 1) & 0xf8;
    if (lVar4 == 0) {
      return;
    }
    if ((*(byte *)(lVar4 + 10) >> 2 & 1) != 0) {
      return;
    }
    plVar5 = (long *)FUN_00c1ccbc(lVar4,2,*(undefined8 *)(lVar7 + 0x180));
    if (plVar5 == (long *)0x0) {
      return;
    }
    bVar9 = *(byte *)(lVar7 + 0xc1);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    *(byte *)(lVar7 + 0xc1) = bVar9 | 0x50;
    *(undefined8 *)(lVar7 + 0x28) = 0x800000000000;
    plVar6 = *(long **)(param_1 + 0x28);
    *plVar6 = *plVar5;
  }
  plVar6[1] = -1;
  plVar6[2] = (ulong)puVar8 | (ulong)~(uint)*(byte *)((long)puVar8 + 9) << 0x2f;
  *(long **)(param_1 + 0x28) = plVar6 + 3;
  iVar2 = FUN_00c175a0(param_1,plVar6 + 2,1,0xffffffffffffffff);
  *(undefined8 *)(lVar7 + 0x28) = uVar10;
  *(byte *)(lVar7 + 0xc1) = bVar9 & 0xf0 | *(byte *)(lVar7 + 0xc1) & 0xf;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfa980(param_1);
  }
  return;
}

