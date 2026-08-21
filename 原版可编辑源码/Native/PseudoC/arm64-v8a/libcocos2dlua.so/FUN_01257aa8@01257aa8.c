
undefined8 * FUN_01257aa8(long *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined1 auVar9 [16];
  long local_38;
  
  pcVar5 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (pcVar1 == pcVar5) {
LAB_01257b20:
    puVar4 = (undefined8 *)FUN_012557ec(param_1);
    return puVar4;
  }
  cVar2 = *pcVar5;
  if (cVar2 == 'J') {
    pcVar5 = pcVar5 + 1;
    *param_1 = (long)pcVar5;
    lVar6 = param_1[2];
    lVar7 = param_1[3];
    if (pcVar5 == pcVar1) goto LAB_01257b94;
    while (*pcVar5 != 'E') {
LAB_01257b94:
      do {
        local_38 = FUN_01257aa8(param_1);
        if (local_38 == 0) {
          return (undefined8 *)0x0;
        }
        FUN_01257c80(param_1 + 2,&local_38);
        pcVar5 = (char *)*param_1;
      } while (pcVar5 == (char *)param_1[1]);
    }
    lVar6 = (lVar7 - lVar6 >> 3) * 8;
    *param_1 = (long)(pcVar5 + 1);
    auVar9 = FUN_0125f2dc(param_1,param_1[2] + lVar6,param_1[3]);
    pvVar8 = (void *)param_1[0x25c];
    param_1[3] = param_1[2] + lVar6;
    lVar6 = *(long *)((long)pvVar8 + 8);
    puVar4 = pvVar8;
    if (0xfef < lVar6 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = 0;
      *puVar4 = pvVar8;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
    *puVar3 = &PTR_FUN_01736e58;
    *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x101011c;
    *(undefined1 (*) [16])((long)puVar4 + lVar6 + 0x20) = auVar9;
  }
  else {
    if (cVar2 == 'L') {
      if (((ulong)((long)pcVar1 - (long)pcVar5) < 2) || (pcVar5[1] != 'Z')) {
        puVar4 = (undefined8 *)FUN_0125b848(param_1);
        return puVar4;
      }
      *param_1 = (long)(pcVar5 + 2);
      puVar3 = (undefined8 *)FUN_01254ca4(param_1);
    }
    else {
      if (cVar2 != 'X') goto LAB_01257b20;
      *param_1 = (long)(pcVar5 + 1);
      puVar3 = (undefined8 *)FUN_01259b70(param_1);
    }
    if (puVar3 != (undefined8 *)0x0) {
      pcVar5 = (char *)*param_1;
      if ((pcVar5 == (char *)param_1[1]) || (*pcVar5 != 'E')) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        *param_1 = (long)(pcVar5 + 1);
      }
    }
  }
  return puVar3;
}

