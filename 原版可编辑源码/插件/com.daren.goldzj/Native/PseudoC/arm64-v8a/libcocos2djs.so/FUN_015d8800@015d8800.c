
void FUN_015d8800(long param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  Zone *this;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar2 = *(undefined1 **)(param_1 + 0xd0);
  puVar5 = *(undefined1 **)(param_1 + 0xd8);
  if (puVar2 == puVar5) {
    bVar4 = false;
  }
  else {
    bVar4 = puVar5[-0x78] != '\0';
  }
  iVar3 = (int)((ulong)(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0)) >> 3) * -0x55555555;
  if (puVar5 < *(undefined1 **)(param_1 + 0xe0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *puVar5 = param_2;
    *(int *)(puVar5 + 4) = iVar3;
    puVar5[0x10] = bVar4;
    *(undefined4 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined4 *)(puVar5 + 0x40) = 0;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    puVar5[0x60] = 0;
    *(undefined8 *)(puVar5 + 0x70) = 0;
    *(undefined8 *)(puVar5 + 0x78) = 0;
    *(undefined8 *)(puVar5 + 0x68) = 0;
    puVar5[0x38] = bVar4 ^ 1;
    *(undefined8 *)(puVar5 + 8) = uVar6;
    *(undefined4 *)(puVar5 + 0x80) = 0xffffffff;
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 0x88;
  }
  else {
    lVar9 = (long)puVar5 - (long)puVar2 >> 3;
    uVar1 = lVar9 * -0xf0f0f0f0f0f0f0f + 1;
    if (0xf0f0f0 < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar7 = (long)*(undefined1 **)(param_1 + 0xe0) - (long)puVar2 >> 3;
    uVar8 = lVar7 * -0x1e1e1e1e1e1e1e1e;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x787877 < (ulong)(lVar7 * -0xf0f0f0f0f0f0f0f)) {
      uVar1 = 0xf0f0f0;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      this = *(Zone **)(param_1 + 0xe8);
      uVar8 = uVar1 * 0x88;
      lVar7 = *(long *)(this + 0x10);
      if (uVar8 < (ulong)(*(long *)(this + 0x18) - lVar7) ||
          uVar8 - (*(long *)(this + 0x18) - lVar7) == 0) {
        *(ulong *)(this + 0x10) = lVar7 + uVar8;
      }
      else {
        lVar7 = v8::internal::Zone::NewExpand(this,uVar8);
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = (undefined1 *)(lVar7 + lVar9 * 8);
    *puVar5 = param_2;
    *(int *)(puVar5 + 4) = iVar3;
    puVar5[0x10] = bVar4;
    *(undefined4 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    puVar5[0x38] = bVar4 ^ 1;
    *(undefined4 *)(puVar5 + 0x40) = 0;
    *(undefined8 *)(puVar5 + 0x48) = 0;
    puVar5[0x60] = 0;
    *(undefined8 *)(puVar5 + 0x70) = 0;
    *(undefined8 *)(puVar5 + 0x78) = 0;
    *(undefined8 *)(puVar5 + 0x68) = 0;
    *(undefined4 *)(puVar5 + 0x80) = 0xffffffff;
    *(undefined8 *)(puVar5 + 8) = uVar6;
    lVar9 = *(long *)(param_1 + 0xd0);
    puVar2 = puVar5;
    for (lVar10 = *(long *)(param_1 + 0xd8); lVar10 != lVar9; lVar10 = lVar10 + -0x88) {
      uVar6 = *(undefined8 *)(lVar10 + -0x88);
      *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(lVar10 + -0x80);
      *(undefined8 *)(puVar2 + -0x88) = uVar6;
      uVar6 = *(undefined8 *)(lVar10 + -0x48);
      uVar12 = *(undefined8 *)(lVar10 + -0x50);
      uVar11 = *(undefined8 *)(lVar10 + -0x58);
      uVar14 = *(undefined8 *)(lVar10 + -0x60);
      uVar13 = *(undefined8 *)(lVar10 + -0x68);
      uVar16 = *(undefined8 *)(lVar10 + -0x70);
      uVar15 = *(undefined8 *)(lVar10 + -0x78);
      *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(lVar10 + -0x40);
      *(undefined8 *)(puVar2 + -0x48) = uVar6;
      *(undefined8 *)(puVar2 + -0x50) = uVar12;
      *(undefined8 *)(puVar2 + -0x58) = uVar11;
      *(undefined8 *)(puVar2 + -0x60) = uVar14;
      *(undefined8 *)(puVar2 + -0x68) = uVar13;
      *(undefined8 *)(puVar2 + -0x70) = uVar16;
      *(undefined8 *)(puVar2 + -0x78) = uVar15;
      uVar11 = *(undefined8 *)(lVar10 + -0x30);
      uVar6 = *(undefined8 *)(lVar10 + -0x38);
      uVar13 = *(undefined8 *)(lVar10 + -0x20);
      uVar12 = *(undefined8 *)(lVar10 + -0x28);
      uVar15 = *(undefined8 *)(lVar10 + -0x10);
      uVar14 = *(undefined8 *)(lVar10 + -0x18);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(lVar10 + -8);
      *(undefined8 *)(puVar2 + -0x10) = uVar15;
      *(undefined8 *)(puVar2 + -0x18) = uVar14;
      *(undefined8 *)(puVar2 + -0x20) = uVar13;
      *(undefined8 *)(puVar2 + -0x28) = uVar12;
      *(undefined8 *)(puVar2 + -0x30) = uVar11;
      *(undefined8 *)(puVar2 + -0x38) = uVar6;
      puVar2 = puVar2 + -0x88;
    }
    *(undefined1 **)(param_1 + 0xd0) = puVar2;
    *(undefined1 **)(param_1 + 0xd8) = puVar5 + 0x88;
    *(ulong *)(param_1 + 0xe0) = lVar7 + uVar1 * 0x88;
  }
  return;
}

