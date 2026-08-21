
void cpSpaceUnlock(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *__ptr;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  
  iVar2 = *(int *)(param_1 + 0xa0) + -1;
  *(int *)(param_1 + 0xa0) = iVar2;
  if (iVar2 == 0) {
    puVar6 = *(uint **)(param_1 + 0x48);
    uVar1 = *puVar6;
    if ((int)uVar1 < 1) {
      bVar3 = false;
    }
    else {
      uVar8 = 0;
      do {
        lVar9 = uVar8 * 8;
        cpSpaceActivateBody(param_1,*(undefined8 *)(*(long *)(puVar6 + 2) + lVar9));
        uVar8 = uVar8 + 1;
        *(undefined8 *)(*(long *)(puVar6 + 2) + lVar9) = 0;
      } while (uVar1 != uVar8);
      bVar3 = *(int *)(param_1 + 0xa0) != 0;
    }
    *puVar6 = 0;
    if (((param_2 != '\0') && (!bVar3)) && (*(char *)(param_1 + 0xe8) == '\0')) {
      piVar7 = *(int **)(param_1 + 0xf0);
      *(undefined1 *)(param_1 + 0xe8) = 1;
      if (0 < *piVar7) {
        lVar9 = 0;
        do {
          lVar4 = *(long *)(piVar7 + 2);
          __ptr = *(undefined8 **)(lVar4 + lVar9 * 8);
          pcVar5 = (code *)*__ptr;
          *__ptr = 0;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(param_1,__ptr[1],__ptr[2]);
            lVar4 = *(long *)(piVar7 + 2);
          }
          *(undefined8 *)(lVar4 + lVar9 * 8) = 0;
          free(__ptr);
          lVar9 = lVar9 + 1;
        } while (lVar9 < *piVar7);
      }
      *piVar7 = 0;
      *(undefined1 *)(param_1 + 0xe8) = 0;
    }
  }
  return;
}

