
undefined8 * FUN_0183ca54(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  byte *pbVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  size_t __n;
  long *plVar11;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar1 == pbVar2) {
    return (undefined8 *)0x0;
  }
  if (*pbVar1 != 0x53) {
    return (undefined8 *)0x0;
  }
  pbVar7 = pbVar1 + 1;
  *param_1 = (long)pbVar7;
  if (pbVar2 == pbVar7) {
    iVar4 = islower(0);
  }
  else {
    iVar4 = islower((uint)*pbVar7);
  }
  if (iVar4 == 0) {
    if ((pbVar7 != pbVar2) && (*pbVar7 == 0x5f)) {
      *param_1 = (long)(pbVar1 + 2);
      if ((undefined8 *)param_1[0x25] == (undefined8 *)param_1[0x26]) {
        return (undefined8 *)0x0;
      }
      return *(undefined8 **)param_1[0x25];
    }
    if (pbVar2 == pbVar7) {
      return (undefined8 *)0x0;
    }
    bVar3 = *pbVar7;
    if (bVar3 < 0x30) {
      return (undefined8 *)0x0;
    }
    if ((0x39 < bVar3) && (0x19 < (byte)(bVar3 + 0xbf))) {
      return (undefined8 *)0x0;
    }
    lVar6 = 0;
    pbVar1 = pbVar1 + 2;
    do {
      pbVar7 = pbVar1;
      if (bVar3 < 0x3a) {
        lVar9 = -0x30;
      }
      else {
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          pbVar7 = pbVar7 + -1;
          break;
        }
        lVar9 = -0x37;
      }
      lVar6 = lVar9 + (ulong)bVar3 + lVar6 * 0x24;
      *param_1 = (long)pbVar7;
      if (pbVar2 == pbVar7) break;
      bVar3 = *pbVar7;
      pbVar1 = pbVar7 + 1;
    } while (0x2f < bVar3);
    if (pbVar7 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar7 != 0x5f) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar7 + 1);
    if ((ulong)(param_1[0x26] - param_1[0x25] >> 3) <= lVar6 + 1U) {
      return (undefined8 *)0x0;
    }
    return *(undefined8 **)(param_1[0x25] + (lVar6 + 1U) * 8);
  }
  if (pbVar2 == pbVar7) {
    return (undefined8 *)0x0;
  }
  switch(*pbVar7) {
  case 0x61:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    plVar11 = puVar10 + 1;
    lVar6 = *plVar11;
    if (lVar6 + 0x10U < 0xff0) {
      uVar8 = 0;
    }
    else {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183cea4;
      uVar8 = 0;
      *puVar5 = puVar10;
      plVar11 = puVar5 + 1;
      *plVar11 = 0;
      param_1[0x25c] = (long)puVar5;
LAB_0183cd48:
      lVar6 = 0;
      puVar10 = puVar5;
    }
    break;
  case 0x62:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    plVar11 = puVar10 + 1;
    lVar6 = *plVar11;
    if (0xfef < lVar6 + 0x10U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0183cea4;
      *puVar5 = puVar10;
      plVar11 = puVar5 + 1;
      *plVar11 = 0;
      param_1[0x25c] = (long)puVar5;
      uVar8 = 1;
      goto LAB_0183cd48;
    }
    uVar8 = 1;
    break;
  default:
    goto switchD_0183cad0_caseD_63;
  case 100:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    plVar11 = puVar10 + 1;
    lVar6 = *plVar11;
    if (0xfef < lVar6 + 0x10U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0183cea4;
      *puVar5 = puVar10;
      plVar11 = puVar5 + 1;
      *plVar11 = 0;
      uVar8 = 5;
      param_1[0x25c] = (long)puVar5;
      goto LAB_0183cd48;
    }
    uVar8 = 5;
    break;
  case 0x69:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    plVar11 = puVar10 + 1;
    lVar6 = *plVar11;
    if (0xfef < lVar6 + 0x10U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0183cea4;
      *puVar5 = puVar10;
      plVar11 = puVar5 + 1;
      *plVar11 = 0;
      param_1[0x25c] = (long)puVar5;
      uVar8 = 3;
      goto LAB_0183cd48;
    }
    uVar8 = 3;
    break;
  case 0x6f:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    plVar11 = puVar10 + 1;
    lVar6 = *plVar11;
    if (0xfef < lVar6 + 0x10U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0183cea4;
      *puVar5 = puVar10;
      plVar11 = puVar5 + 1;
      *plVar11 = 0;
      param_1[0x25c] = (long)puVar5;
      uVar8 = 4;
      goto LAB_0183cd48;
    }
    uVar8 = 4;
    break;
  case 0x73:
    puVar10 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pbVar1 + 2);
    plVar11 = puVar10 + 1;
    lVar6 = *plVar11;
    if (0xfef < lVar6 + 0x10U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_0183cea4;
      *puVar5 = puVar10;
      plVar11 = puVar5 + 1;
      *plVar11 = 0;
      param_1[0x25c] = (long)puVar5;
      uVar8 = 2;
      goto LAB_0183cd48;
    }
    uVar8 = 2;
  }
  *plVar11 = lVar6 + 0x10;
  puVar5 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
  *puVar5 = &PTR_FUN_01ce0d90;
  *(undefined4 *)((long)puVar10 + lVar6 + 0x18) = 0x1010124;
  *(undefined4 *)((long)puVar10 + lVar6 + 0x1c) = uVar8;
  if (puVar5 == (undefined8 *)0x0) {
switchD_0183cad0_caseD_63:
    return (undefined8 *)0x0;
  }
  puVar10 = (undefined8 *)FUN_0183db08(param_1,puVar5);
  if (puVar10 == puVar5) {
    return puVar5;
  }
  puVar5 = (undefined8 *)param_1[0x26];
  if (puVar5 == (undefined8 *)param_1[0x27]) {
    plVar11 = (long *)param_1[0x25];
    __n = (long)puVar5 - (long)plVar11;
    if (param_1 + 0x28 == plVar11) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_0183cea4;
      if (__n != 0) {
        memmove(__dest,plVar11,__n);
      }
      param_1[0x25] = (long)__dest;
    }
    else {
      __dest = realloc(plVar11,__n * 2);
      param_1[0x25] = (long)__dest;
      if (__dest == (void *)0x0) {
LAB_0183cea4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar5 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    param_1[0x26] = (long)puVar5;
    param_1[0x27] = (long)((long)__dest + ((long)__n >> 2) * 8);
  }
  param_1[0x26] = (long)(puVar5 + 1);
  *puVar5 = puVar10;
  return puVar10;
}

