
undefined8
FT_Raccess_Get_DataOffsets
          (long *param_1,long *param_2,ulong param_3,long param_4,ulong param_5,char param_6,
          undefined8 *param_7,size_t *param_8)

{
  long lVar1;
  undefined2 *__s;
  long lVar2;
  void *__s_00;
  ulong uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  size_t sVar6;
  code *pcVar7;
  ulong uVar8;
  undefined2 uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  undefined2 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined1 local_68 [4];
  byte local_64 [4];
  
  lVar12 = *param_1;
  if ((code *)param_2[5] == (code *)0x0) {
                    /* catch() { ... } // from try @ 01062ba4 with catch @ 01062c44 */
    uVar3 = param_2[1];
    if (uVar3 < param_3) {
      return 0x55;
    }
  }
  else {
    lVar1 = (*(code *)param_2[5])(param_2,param_3,0,0);
                    /* catch() { ... } // from try @ 01062b48 with catch @ 01062c34 */
    if (lVar1 != 0) {
      return 0x55;
    }
    uVar3 = param_2[1];
  }
  puVar17 = (ulong *)(param_2 + 1);
  param_2[2] = param_3;
  if (uVar3 <= param_3 + 1) {
    return 0x55;
  }
  if ((code *)param_2[5] == (code *)0x0) {
    puVar5 = (undefined1 *)(*param_2 + param_3);
    uVar3 = param_3;
    if (puVar5 == (undefined1 *)0x0) {
      uVar11 = 0;
      goto LAB_01062ccc;
    }
  }
  else {
                    /* try { // try from 01062c70 to 01162d37 has its CatchHandler @ 01062c70
                       catch() { ... } // from try @ 01062c70 with catch @ 01062c70
                       catch() { ... } // from try @ 01062d4c with catch @ 01062c70 */
    lVar1 = (*(code *)param_2[5])(param_2,param_3,local_68,2);
    if (lVar1 != 2) {
      return 0x55;
    }
    puVar5 = local_68;
    uVar3 = param_2[2];
  }
  uVar11 = (uint)CONCAT11(*puVar5,puVar5[1]);
LAB_01062ccc:
  lVar1 = uVar3 + 2;
  param_2[2] = lVar1;
  iVar13 = -1;
  do {
    uVar3 = *puVar17;
    if (uVar3 <= lVar1 + 3U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      pbVar4 = (byte *)(*param_2 + lVar1);
      if (pbVar4 != (byte *)0x0) goto LAB_01062d14;
      uVar15 = 0;
    }
    else {
      lVar1 = (*(code *)param_2[5])(param_2,lVar1,local_64,4);
      if (lVar1 != 4) {
        return 0x55;
      }
      uVar3 = param_2[1];
      lVar1 = param_2[2];
      pbVar4 = local_64;
LAB_01062d14:
      uVar15 = (ulong)*pbVar4 << 0x18 | (ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[2] << 8 |
               (ulong)pbVar4[3];
    }
                    /* try { // try from 01062d38 to 01162d4b has its CatchHandler @ 01062dcc */
    lVar2 = lVar1 + 4;
    param_2[2] = lVar2;
    if (uVar3 <= lVar1 + 5U) {
      return 0x55;
    }
                    /* try { // try from 01062d4c to 01162de7 has its CatchHandler @ 01062c70 */
    if ((code *)param_2[5] == (code *)0x0) {
      puVar5 = (undefined1 *)(*param_2 + lVar2);
      if (puVar5 != (undefined1 *)0x0) goto LAB_01062d84;
      sVar6 = 1;
    }
    else {
      lVar1 = (*(code *)param_2[5])(param_2,lVar2,local_68,2);
      if (lVar1 != 2) {
        return 0x55;
      }
      uVar3 = param_2[1];
      lVar2 = param_2[2];
      puVar5 = local_68;
LAB_01062d84:
      sVar6 = (ulong)CONCAT11(*puVar5,puVar5[1]) + 1;
    }
    lVar1 = lVar2 + 2;
    param_2[2] = lVar1;
    if (uVar3 <= lVar2 + 3U) {
      return 0x55;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      puVar5 = (undefined1 *)(*param_2 + lVar1);
      uVar3 = 0;
      if (puVar5 != (undefined1 *)0x0) goto LAB_01062de0;
    }
    else {
      lVar1 = (*(code *)param_2[5])(param_2,lVar1,local_68,2);
      if (lVar1 != 2) {
        return 0x55;
      }
      lVar1 = param_2[2];
                    /* catch() { ... } // from try @ 01062d38 with catch @ 01062dcc */
      puVar5 = local_68;
LAB_01062de0:
      uVar3 = (ulong)CONCAT11(*puVar5,puVar5[1]);
    }
    lVar1 = lVar1 + 2;
    param_2[2] = lVar1;
    if (uVar15 == param_5) {
      *param_8 = sVar6;
      uVar3 = uVar3 + param_3;
      if ((code *)param_2[5] == (code *)0x0) {
        if (*puVar17 < uVar3) {
          return 0x55;
        }
      }
      else {
        lVar1 = (*(code *)param_2[5])(param_2,uVar3,0,0);
        if (lVar1 != 0) {
          return 0x55;
        }
      }
      param_2[2] = uVar3;
      sVar6 = *param_8;
      if ((long)sVar6 < 0) {
        return 6;
      }
      if (sVar6 == 0) {
        __s = (undefined2 *)0x0;
        sVar6 = 0;
        goto joined_r0x01062ed4;
      }
      if (0x7ffffff < (long)sVar6) {
        return 10;
      }
      sVar6 = sVar6 << 4;
      __s = (undefined2 *)(**(code **)(lVar12 + 8))(lVar12,sVar6);
      if (__s == (undefined2 *)0x0) {
        return 0x40;
      }
      memset(__s,0,sVar6);
      memset(__s,0,sVar6);
      sVar6 = *param_8;
      if ((long)sVar6 < 1) goto joined_r0x01062ed4;
      uVar3 = param_2[2];
      lVar1 = 0;
      puVar14 = __s;
      break;
    }
    iVar13 = iVar13 + 1;
    if ((int)uVar11 <= iVar13) {
      return 1;
    }
  } while( true );
  do {
    if (*puVar17 <= uVar3 + 1) {
LAB_010631a8:
      *puVar14 = 0;
LAB_010631ac:
      uVar16 = 0x55;
      goto LAB_010631b4;
    }
    if ((code *)param_2[5] == (code *)0x0) {
      puVar5 = (undefined1 *)(*param_2 + uVar3);
      pcVar7 = (code *)0x0;
      if (puVar5 != (undefined1 *)0x0) goto LAB_01062fc4;
      uVar9 = 0;
    }
    else {
      lVar2 = (*(code *)param_2[5])(param_2,uVar3,local_68,2);
      if (lVar2 != 2) goto LAB_010631a8;
      uVar3 = param_2[2];
      pcVar7 = (code *)param_2[5];
      puVar5 = local_68;
LAB_01062fc4:
      uVar9 = CONCAT11(*puVar5,puVar5[1]);
    }
    uVar15 = uVar3 + 4;
    param_2[2] = uVar3 + 2;
    *puVar14 = uVar9;
    if (pcVar7 == (code *)0x0) {
      uVar8 = *puVar17;
      if (uVar15 <= uVar8) goto LAB_01063014;
      goto LAB_010631ac;
    }
    lVar2 = (*pcVar7)(param_2,uVar15,0,0);
    if (lVar2 != 0) goto LAB_010631ac;
    uVar8 = *puVar17;
LAB_01063014:
    param_2[2] = uVar15;
    if (uVar8 <= uVar3 + 7) goto LAB_010631ac;
    if ((code *)param_2[5] != (code *)0x0) {
      lVar2 = (*(code *)param_2[5])(param_2,uVar15,local_64,4);
      if (lVar2 == 4) {
        uVar15 = param_2[2];
        pcVar7 = (code *)param_2[5];
        pbVar4 = local_64;
        goto LAB_01063068;
      }
      goto LAB_010631ac;
    }
    pbVar4 = (byte *)(*param_2 + uVar15);
    if (pbVar4 == (byte *)0x0) {
      uVar8 = 0;
      lVar2 = uVar3 + 8;
      uVar3 = uVar3 + 0xc;
      param_2[2] = lVar2;
LAB_010630c8:
      if (*puVar17 < uVar3) goto LAB_010631ac;
    }
    else {
      pcVar7 = (code *)0x0;
LAB_01063068:
                    /* try { // try from 01063080 to 011630d7 has its CatchHandler @ 01063080
                       catch() { ... } // from try @ 01063080 with catch @ 01063080
                       catch() { ... } // from try @ 01063128 with catch @ 01063080 */
      uVar8 = (ulong)pbVar4[2] << 8 | (ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[3];
      uVar3 = uVar15 + 8;
      param_2[2] = uVar15 + 4;
      if (pcVar7 == (code *)0x0) goto LAB_010630c8;
      lVar2 = (*pcVar7)(param_2,uVar3,0,0);
      if (lVar2 != 0) goto LAB_010631ac;
    }
                    /* try { // try from 010630d8 to 011630df has its CatchHandler @ 01063160 */
    param_2[2] = uVar3;
    *(ulong *)(puVar14 + 4) = uVar8;
    sVar6 = *param_8;
    lVar1 = lVar1 + 1;
    puVar14 = puVar14 + 8;
  } while (lVar1 < (long)sVar6);
joined_r0x01062ed4:
  if (param_6 != '\0') {
    qsort(__s,sVar6,0x10,FUN_01063288);
    sVar6 = *param_8;
  }
  if ((long)sVar6 < 0) {
    uVar16 = 6;
    goto joined_r0x010631a0;
  }
  if (sVar6 == 0) {
    __s_00 = (void *)0x0;
  }
  else {
    if (0xfffffff < (long)sVar6) {
      uVar16 = 10;
      goto joined_r0x010631a0;
    }
                    /* try { // try from 01063128 to 0116317b has its CatchHandler @ 01063080 */
    sVar6 = sVar6 << 3;
    __s_00 = (void *)(**(code **)(lVar12 + 8))(lVar12,sVar6);
                    /* catch() { ... } // from try @ 010630f8 with catch @ 01063140 */
    if (__s_00 == (void *)0x0) {
      uVar16 = 0x40;
      goto joined_r0x010631a0;
    }
    memset(__s_00,0,sVar6);
                    /* catch() { ... } // from try @ 010630d8 with catch @ 01063160
                       catch() { ... } // from try @ 01063104 with catch @ 01063160 */
    memset(__s_00,0,sVar6);
  }
  if (0 < (long)*param_8) {
    lVar1 = 0;
    plVar10 = (long *)(__s + 4);
    do {
      *(long *)((long)__s_00 + lVar1 * 8) = *plVar10 + param_4;
      lVar1 = lVar1 + 1;
      plVar10 = plVar10 + 2;
    } while (lVar1 < (long)*param_8);
  }
  uVar16 = 0;
  *param_7 = __s_00;
joined_r0x010631a0:
  if (__s == (undefined2 *)0x0) {
    return uVar16;
  }
LAB_010631b4:
  (**(code **)(lVar12 + 0x10))(lVar12,__s);
  return uVar16;
}

