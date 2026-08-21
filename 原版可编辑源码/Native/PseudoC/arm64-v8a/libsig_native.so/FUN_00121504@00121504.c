
void FUN_00121504(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (param_1[1] - (long)pcVar1 != 1)) && (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0011d7cc(param_1);
      if (((lVar3 != 0) && (lVar4 = FUN_0011d7cc(param_1), lVar4 != 0)) &&
         (lVar6 = FUN_00121504(param_1), lVar6 != 0)) {
        pvVar8 = (void *)param_1[0x25c];
        lVar7 = *(long *)((long)pvVar8 + 8);
        puVar5 = pvVar8;
        if (0xfef < lVar7 + 0x30U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) {
LAB_0012172c:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x30;
        *(undefined ***)((long)puVar5 + lVar7 + 0x10) = &PTR_FUN_00137b18;
        *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010143;
        *(long *)((long)puVar5 + lVar7 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(long *)((long)puVar5 + lVar7 + 0x30) = lVar6;
      }
    }
    else if (cVar2 == 'x') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0011d7cc(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_00121504(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x25c];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = pvVar8;
        if (0xfef < lVar6 + 0x30U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_0012172c;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_00137aa8;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010142;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 1;
      }
    }
    else {
      if (cVar2 != 'i') goto LAB_001215e0;
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_001235e8(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_00121504(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x25c];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = pvVar8;
        if (0xfef < lVar6 + 0x30U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_0012172c;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_00137aa8;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010142;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 0;
      }
    }
    return;
  }
LAB_001215e0:
  FUN_0011d7cc(param_1);
  return;
}

