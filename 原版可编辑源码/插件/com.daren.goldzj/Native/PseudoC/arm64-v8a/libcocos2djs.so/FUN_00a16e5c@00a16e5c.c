
undefined8 FUN_00a16e5c(long param_1,long *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_68 [24];
  
  lVar10 = *param_2;
  lVar7 = *(long *)(lVar10 + 0xad0);
  if (lVar7 == 0) {
LAB_00a16f18:
    puVar8 = (undefined4 *)(*(code *)PTR_malloc_01d1b740)(0x18);
    if (puVar8 == (undefined4 *)0x0) {
      return 0x1b;
    }
    *(undefined8 *)(puVar8 + 2) = 0;
    *puVar8 = 0;
    lVar7 = FUN_00a33f88(FUN_00a17258);
    *(long *)(puVar8 + 4) = lVar7;
    if (lVar7 != 0) {
      if (*(char *)((long)param_2 + 0x3bf) == '\0') {
        if (*(char *)((long)param_2 + 0x3be) == '\0') {
          if (*(char *)((long)param_2 + 0x3bb) == '\0') {
            plVar6 = param_2 + 0x18;
          }
          else {
            plVar6 = param_2 + 0x1d;
          }
        }
        else {
          plVar6 = param_2 + 0x2d;
        }
      }
      else {
        plVar6 = param_2 + 0x25;
      }
      pcVar2 = (char *)FUN_00a0e870("%s:%d",*plVar6,param_2[0x33]);
      if (pcVar2 == (char *)0x0) {
        if (*(long *)(puVar8 + 4) != 0) {
          FUN_00a34128(*(long *)(puVar8 + 4),0);
          *(undefined8 *)(puVar8 + 4) = 0;
        }
      }
      else {
        uVar9 = *(undefined8 *)(lVar10 + 0xad0);
        sVar3 = strlen(pcVar2);
        lVar7 = FUN_00a3447c(uVar9,pcVar2,sVar3,puVar8);
        (*(code *)PTR_free_01d1b748)(pcVar2);
        puVar4 = puVar8;
        if (lVar7 != 0) goto LAB_00a16fe0;
        if (*(long *)(puVar8 + 4) != 0) {
          FUN_00a34128(*(long *)(puVar8 + 4),0);
          *(undefined8 *)(puVar8 + 4) = 0;
        }
      }
    }
    (*(code *)PTR_free_01d1b748)(puVar8);
  }
  else {
    if (*(char *)((long)param_2 + 0x3bf) == '\0') {
      if (*(char *)((long)param_2 + 0x3be) == '\0') {
        if (*(char *)((long)param_2 + 0x3bb) == '\0') {
          plVar6 = param_2 + 0x18;
        }
        else {
          plVar6 = param_2 + 0x1d;
        }
      }
      else {
        plVar6 = param_2 + 0x2d;
      }
    }
    else {
      plVar6 = param_2 + 0x25;
    }
    pcVar2 = (char *)FUN_00a0e870("%s:%d",*plVar6,param_2[0x33]);
    if (pcVar2 == (char *)0x0) goto LAB_00a16f18;
    sVar3 = strlen(pcVar2);
    puVar4 = (undefined4 *)FUN_00a34664(lVar7,pcVar2,sVar3);
    (*(code *)PTR_free_01d1b748)(pcVar2);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00a16f18;
    puVar8 = (undefined4 *)0x0;
LAB_00a16fe0:
    iVar1 = FUN_00a33fc4(*(long *)(puVar4 + 4),*(undefined8 *)(*(long *)(puVar4 + 4) + 8),param_2);
    if (iVar1 != 0) {
      param_2[0xe3] = (long)puVar4;
      *(long *)(puVar4 + 2) = *(long *)(puVar4 + 2) + 1;
      lVar7 = *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x38) = lVar7 + 1;
      param_2[10] = lVar7;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      return 0;
    }
    if ((puVar8 != (undefined4 *)0x0) && (lVar7 = *(long *)(lVar10 + 0xad0), lVar7 != 0)) {
      FUN_00a34954(lVar7,auStack_68);
      do {
        puVar5 = (undefined8 *)FUN_00a34964(auStack_68);
        if (puVar5 == (undefined8 *)0x0) {
          return 0x1b;
        }
      } while ((undefined4 *)*puVar5 != puVar8);
      FUN_00a345c4(lVar7,puVar5[1],puVar5[2]);
    }
  }
  return 0x1b;
}

