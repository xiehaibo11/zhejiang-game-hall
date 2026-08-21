
void FUN_0165447c(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  size_t __n;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  Zone *this;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar9 = (ulong *)param_1[2];
  if (puVar9 != (ulong *)param_1[3]) goto LAB_01654650;
  puVar12 = (ulong *)*param_1;
  puVar4 = (ulong *)param_1[1];
  if (puVar12 <= puVar4 && (long)puVar4 - (long)puVar12 != 0) {
    lVar10 = (long)puVar4 - (long)puVar12 >> 3;
    lVar1 = lVar10 + 2;
    if (-1 < lVar10 + 1) {
      lVar1 = lVar10 + 1;
    }
    __n = (long)puVar9 - (long)puVar4;
    puVar9 = puVar4 + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(puVar9,puVar4,__n);
      puVar4 = (ulong *)param_1[1];
    }
    puVar9 = puVar9 + ((long)__n >> 3);
    param_1[1] = (ulong)(puVar4 + -(lVar1 >> 1));
    param_1[2] = (ulong)puVar9;
    goto LAB_01654650;
  }
  puVar3 = (ulong *)param_1[5];
  lVar1 = (long)param_1[3] - (long)puVar12;
  uVar11 = lVar1 >> 2;
  if (lVar1 == 0) {
    uVar11 = 1;
  }
  uVar13 = uVar11 >> 2;
  if ((puVar3 == (ulong *)0x0) || (puVar3[1] < uVar11)) {
    this = (Zone *)param_1[4];
    uVar5 = uVar11 * 8;
    puVar3 = *(ulong **)(this + 0x10);
    if (uVar5 < (ulong)(*(long *)(this + 0x18) - (long)puVar3) ||
        uVar5 - (*(long *)(this + 0x18) - (long)puVar3) == 0) {
      *(ulong **)(this + 0x10) = puVar3 + uVar11;
    }
    else {
      puVar3 = (ulong *)v8::internal::Zone::NewExpand(this,uVar5);
    }
    puVar4 = (ulong *)param_1[1];
    puVar12 = (ulong *)param_1[2];
  }
  else {
    param_1[5] = *puVar3;
    puVar12 = puVar9;
  }
  puVar2 = puVar3 + uVar13;
  puVar9 = puVar2;
  if (puVar4 != puVar12) {
    uVar7 = (ulong)((long)puVar12 + (-8 - (long)puVar4)) >> 3;
    uVar5 = uVar7 + 1;
    puVar8 = puVar2;
    if ((3 < uVar5) && ((puVar4 + uVar7 + 1 <= puVar2 || (puVar3 + uVar13 + uVar7 + 1 <= puVar4))))
    {
      uVar7 = uVar5 & 0x3ffffffffffffffc;
      puVar9 = puVar4 + 2;
      puVar4 = puVar4 + uVar7;
      puVar8 = puVar3 + uVar13 + 2;
      uVar13 = uVar7;
      do {
        puVar6 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar13 = uVar13 - 4;
        puVar8[-1] = *puVar6;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + 4;
      } while (uVar13 != 0);
      puVar8 = puVar2 + uVar7;
      puVar9 = puVar2 + uVar7;
      if (uVar5 == uVar7) goto LAB_01654604;
    }
    do {
      puVar6 = puVar4 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = *puVar4;
      puVar4 = puVar6;
      puVar8 = puVar9;
    } while (puVar12 != puVar6);
  }
LAB_01654604:
  puVar4 = (ulong *)*param_1;
  uVar13 = param_1[3];
  *param_1 = (ulong)puVar3;
  param_1[1] = (ulong)puVar2;
  param_1[2] = (ulong)puVar9;
  param_1[3] = (ulong)(puVar3 + uVar11);
  if ((puVar4 != (ulong *)0x0) && (0xf < uVar13 - (long)puVar4)) {
    uVar11 = (long)(uVar13 - (long)puVar4) >> 3;
    if ((param_1[5] == 0) || (*(ulong *)(param_1[5] + 8) <= uVar11)) {
      puVar4[1] = uVar11;
      *puVar4 = param_1[5];
      puVar9 = (ulong *)param_1[2];
      param_1[5] = (ulong)puVar4;
    }
  }
LAB_01654650:
  *puVar9 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}

