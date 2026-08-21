
undefined8 * FUN_0183c2cc(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  size_t __n;
  long lVar9;
  void *pvVar10;
  long *__src;
  undefined1 auVar11 [16];
  
  pcVar7 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (pcVar1 == pcVar7) {
LAB_0183c328:
    puVar5 = (undefined8 *)FUN_01839ba0(param_1);
    return puVar5;
  }
  cVar3 = *pcVar7;
  if (cVar3 == 'J') {
    lVar9 = param_1[2];
    lVar2 = param_1[3];
    pcVar7 = pcVar7 + 1;
    *param_1 = (long)pcVar7;
    if (pcVar7 == pcVar1) goto LAB_0183c3d8;
    while (*pcVar7 != 'E') {
LAB_0183c3d8:
      do {
        lVar6 = FUN_0183c2cc(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        plVar8 = (long *)param_1[3];
        if (plVar8 == (long *)param_1[4]) {
          __src = (long *)param_1[2];
          __n = (long)plVar8 - (long)__src;
          if (param_1 + 5 == __src) {
            pvVar10 = malloc(__n * 2);
            if (pvVar10 == (void *)0x0) goto LAB_0183c530;
            if (__n != 0) {
              memmove(pvVar10,__src,__n);
            }
            param_1[2] = (long)pvVar10;
          }
          else {
            pvVar10 = realloc(__src,__n * 2);
            param_1[2] = (long)pvVar10;
            if (pvVar10 == (void *)0x0) goto LAB_0183c530;
          }
          plVar8 = (long *)((long)pvVar10 + ((long)__n >> 3) * 8);
          param_1[3] = (long)plVar8;
          param_1[4] = (long)((long)pvVar10 + ((long)__n >> 2) * 8);
        }
        param_1[3] = (long)(plVar8 + 1);
        *plVar8 = lVar6;
        pcVar7 = (char *)*param_1;
      } while (pcVar7 == (char *)param_1[1]);
    }
    lVar9 = (lVar2 - lVar9 >> 3) * 8;
    *param_1 = (long)(pcVar7 + 1);
    auVar11 = FUN_01844294(param_1,param_1[2] + lVar9,param_1[3]);
    pvVar10 = (void *)param_1[0x25c];
    param_1[3] = param_1[2] + lVar9;
    plVar8 = (long *)((long)pvVar10 + 8);
    lVar9 = *plVar8;
    puVar5 = pvVar10;
    if (0xfef < lVar9 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) {
LAB_0183c530:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar9 = 0;
      *puVar5 = pvVar10;
      plVar8 = puVar5 + 1;
      *plVar8 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    *plVar8 = lVar9 + 0x20;
    puVar4 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
    *puVar4 = &PTR_FUN_01ce0fc0;
    *(undefined4 *)((long)puVar5 + lVar9 + 0x18) = 0x101011c;
    *(undefined1 (*) [16])((long)puVar5 + lVar9 + 0x20) = auVar11;
  }
  else {
    if (cVar3 == 'L') {
      if (((ulong)((long)pcVar1 - (long)pcVar7) < 2) || (pcVar7[1] != 'Z')) {
        puVar5 = (undefined8 *)FUN_01840864(param_1);
        return puVar5;
      }
      *param_1 = (long)(pcVar7 + 2);
      puVar4 = (undefined8 *)FUN_01838d94(param_1);
    }
    else {
      if (cVar3 != 'X') goto LAB_0183c328;
      *param_1 = (long)(pcVar7 + 1);
      puVar4 = (undefined8 *)FUN_0183e610(param_1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      pcVar7 = (char *)*param_1;
      if ((pcVar7 == (char *)param_1[1]) || (*pcVar7 != 'E')) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        *param_1 = (long)(pcVar7 + 1);
      }
    }
  }
  return puVar4;
}

