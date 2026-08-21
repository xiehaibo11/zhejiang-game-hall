
void FUN_01842054(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (param_1[1] - (long)pcVar1 != 1)) && (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0183e610(param_1);
      if (((lVar3 != 0) && (lVar4 = FUN_0183e610(param_1), lVar4 != 0)) &&
         (lVar7 = FUN_01842054(param_1), lVar7 != 0)) {
        pvVar9 = (void *)param_1[0x25c];
        plVar6 = (long *)((long)pvVar9 + 8);
        lVar8 = *plVar6;
        puVar5 = pvVar9;
        if (0xfef < lVar8 + 0x30U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) {
LAB_018422a0:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar8 = 0;
          *puVar5 = pvVar9;
          plVar6 = puVar5 + 1;
          *plVar6 = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *plVar6 = lVar8 + 0x30;
        *(undefined ***)((long)puVar5 + lVar8 + 0x10) = &PTR_FUN_01ce0690;
        *(undefined4 *)((long)puVar5 + lVar8 + 0x18) = 0x1010142;
        *(long *)((long)puVar5 + lVar8 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar8 + 0x28) = lVar4;
        *(long *)((long)puVar5 + lVar8 + 0x30) = lVar7;
      }
    }
    else if (cVar2 == 'x') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0183e610(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_01842054(param_1), lVar4 != 0)) {
        pvVar9 = (void *)param_1[0x25c];
        plVar6 = (long *)((long)pvVar9 + 8);
        lVar7 = *plVar6;
        puVar5 = pvVar9;
        if (0xfef < lVar7 + 0x30U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_018422a0;
          lVar7 = 0;
          *puVar5 = pvVar9;
          plVar6 = puVar5 + 1;
          *plVar6 = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *plVar6 = lVar7 + 0x30;
        *(undefined ***)((long)puVar5 + lVar7 + 0x10) = &PTR_FUN_01ce0620;
        *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010141;
        *(long *)((long)puVar5 + lVar7 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar7 + 0x30) = 1;
      }
    }
    else {
      if (cVar2 != 'i') goto LAB_0184213c;
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_01844a14(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_01842054(param_1), lVar4 != 0)) {
        pvVar9 = (void *)param_1[0x25c];
        plVar6 = (long *)((long)pvVar9 + 8);
        lVar7 = *plVar6;
        puVar5 = pvVar9;
        if (0xfef < lVar7 + 0x30U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_018422a0;
          lVar7 = 0;
          *puVar5 = pvVar9;
          plVar6 = puVar5 + 1;
          *plVar6 = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *plVar6 = lVar7 + 0x30;
        *(undefined ***)((long)puVar5 + lVar7 + 0x10) = &PTR_FUN_01ce0620;
        *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010141;
        *(long *)((long)puVar5 + lVar7 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar7 + 0x30) = 0;
      }
    }
    return;
  }
LAB_0184213c:
  FUN_0183e610(param_1);
  return;
}

