
/* v8::internal::compiler::RegisterAllocationData::RegisterAllocationData(v8::internal::RegisterConfiguration
   const*, v8::internal::Zone*, v8::internal::compiler::Frame*,
   v8::internal::compiler::InstructionSequence*,
   v8::base::Flags<v8::internal::compiler::RegisterAllocationFlag, int>, v8::internal::TickCounter*,
   char const*) */

void __thiscall
v8::internal::compiler::RegisterAllocationData::RegisterAllocationData
          (RegisterAllocationData *this,undefined8 param_1,Zone *param_2,undefined8 param_3,
          long param_4,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  Zone *pZVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  *(Zone **)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(long *)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x18) = param_8;
  *(undefined8 *)(this + 0x30) = 0;
  *(Zone **)(this + 0x38) = param_2;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x20) = param_1;
  *(RegisterAllocationData **)(this + 0x28) = this + 0x30;
  lVar11 = **(long **)(param_4 + 0x10);
  lVar3 = (*(long **)(param_4 + 0x10))[1];
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  uVar10 = lVar3 - lVar11;
  *(undefined8 *)(this + 0x58) = 0;
  *(Zone **)(this + 0x60) = param_2;
  pZVar6 = param_2;
  if ((int)(uVar10 >> 3) != 0) {
    uVar10 = (long)(uVar10 * 0x20000000) >> 0x20;
    if (uVar10 >> 0x1c != 0) goto LAB_01658d64;
    puVar8 = *(undefined8 **)(param_2 + 0x10);
    uVar9 = uVar10 * 8;
    if (uVar9 < (ulong)(*(long *)(param_2 + 0x18) - (long)puVar8) ||
        uVar9 - (*(long *)(param_2 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(param_2 + 0x10) = puVar8 + uVar10;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(param_2,uVar9);
    }
    *(undefined8 **)(this + 0x48) = puVar8;
    *(undefined8 **)(this + 0x50) = puVar8;
    *(undefined8 **)(this + 0x58) = puVar8 + uVar10;
    do {
      *puVar8 = 0;
      uVar10 = uVar10 - 1;
      puVar8 = (undefined8 *)(*(long *)(this + 0x50) + 8);
      *(undefined8 **)(this + 0x50) = puVar8;
    } while (uVar10 != 0);
    pZVar6 = *(Zone **)this;
  }
  lVar11 = **(long **)(param_4 + 0x10);
  lVar3 = (*(long **)(param_4 + 0x10))[1];
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(Zone **)(this + 0x80) = pZVar6;
  uVar10 = lVar3 - lVar11;
  if ((int)(uVar10 >> 3) != 0) {
    uVar10 = (long)(uVar10 * 0x20000000) >> 0x20;
    if (uVar10 >> 0x1c != 0) goto LAB_01658d64;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar9 = uVar10 * 8;
    if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar9 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar10;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar9);
    }
    *(undefined8 **)(this + 0x68) = puVar8;
    *(undefined8 **)(this + 0x70) = puVar8;
    *(undefined8 **)(this + 0x78) = puVar8 + uVar10;
    do {
      *puVar8 = 0;
      uVar10 = uVar10 - 1;
      puVar8 = (undefined8 *)(*(long *)(this + 0x70) + 8);
      *(undefined8 **)(this + 0x70) = puVar8;
    } while (uVar10 != 0);
    pZVar6 = *(Zone **)this;
  }
  iVar5 = *(int *)(param_4 + 0xd0);
  uVar10 = (ulong)iVar5;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(Zone **)(this + 0xa0) = pZVar6;
  if (iVar5 != 0) {
    lVar11 = uVar10 << 1;
    if (((uVar10 & 0x7fffffffffffffff) >> 0x1b & 0xf) != 0) goto LAB_01658d64;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar9 = uVar10 * 0x10;
    if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar9 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar10 * 2;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar9);
    }
    *(undefined8 **)(this + 0x88) = puVar8;
    *(undefined8 **)(this + 0x90) = puVar8;
    *(undefined8 **)(this + 0x98) = puVar8 + uVar10 * 2;
    do {
      *puVar8 = 0;
      lVar11 = lVar11 + -1;
      puVar8 = (undefined8 *)(*(long *)(this + 0x90) + 8);
      *(undefined8 **)(this + 0x90) = puVar8;
    } while (lVar11 != 0);
    pZVar6 = *(Zone **)this;
  }
  lVar11 = *(long *)(this + 0x20);
  iVar5 = *(int *)(lVar11 + 8);
  uVar10 = (ulong)iVar5;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(Zone **)(this + 0xc0) = pZVar6;
  if (iVar5 != 0) {
    lVar11 = uVar10 << 1;
    if (((uVar10 & 0x7fffffffffffffff) >> 0x1b & 0xf) != 0) goto LAB_01658d64;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar9 = uVar10 * 0x10;
    if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar9 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar10 * 2;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar9);
    }
    *(undefined8 **)(this + 0xa8) = puVar8;
    *(undefined8 **)(this + 0xb0) = puVar8;
    *(undefined8 **)(this + 0xb8) = puVar8 + uVar10 * 2;
    do {
      *puVar8 = 0;
      lVar11 = lVar11 + -1;
      puVar8 = (undefined8 *)(*(long *)(this + 0xb0) + 8);
      *(undefined8 **)(this + 0xb0) = puVar8;
    } while (lVar11 != 0);
    pZVar6 = *(Zone **)this;
    lVar11 = *(long *)(this + 0x20);
  }
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(Zone **)(this + 0xe0) = pZVar6;
  iVar5 = *(int *)(lVar11 + 0x10);
  uVar10 = (ulong)iVar5;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(Zone **)(this + 0x100) = pZVar6;
  if (iVar5 != 0) {
    lVar11 = uVar10 << 1;
    if (((uVar10 & 0x7fffffffffffffff) >> 0x1b & 0xf) != 0) goto LAB_01658d64;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar9 = uVar10 * 0x10;
    if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar9 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar10 * 2;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar9);
    }
    *(undefined8 **)(this + 0xe8) = puVar8;
    *(undefined8 **)(this + 0xf0) = puVar8;
    *(undefined8 **)(this + 0xf8) = puVar8 + uVar10 * 2;
    do {
      *puVar8 = 0;
      lVar11 = lVar11 + -1;
      puVar8 = (undefined8 *)(*(long *)(this + 0xf0) + 8);
      *(undefined8 **)(this + 0xf0) = puVar8;
    } while (lVar11 != 0);
    pZVar6 = *(Zone **)this;
  }
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(Zone **)(this + 0x120) = pZVar6;
  iVar5 = *(int *)(param_4 + 0xd0);
  uVar10 = (ulong)iVar5;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(Zone **)(this + 0x140) = pZVar6;
  if (iVar5 != 0) {
    if ((uVar10 >> 0x1c & 0xf) != 0) goto LAB_01658d64;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar9 = uVar10 * 8;
    if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar9 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar10;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar9);
    }
    *(undefined8 **)(this + 0x128) = puVar8;
    *(undefined8 **)(this + 0x130) = puVar8;
    *(undefined8 **)(this + 0x138) = puVar8 + uVar10;
    do {
      *puVar8 = 0;
      uVar10 = uVar10 - 1;
      puVar8 = (undefined8 *)(*(long *)(this + 0x130) + 8);
      *(undefined8 **)(this + 0x130) = puVar8;
    } while (uVar10 != 0);
    pZVar6 = *(Zone **)this;
  }
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(Zone **)(this + 0x160) = pZVar6;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  uVar4 = *(undefined4 *)(param_4 + 0xd0);
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(Zone **)(this + 0x1a8) = param_2;
  *(undefined4 *)(this + 0x188) = uVar4;
  lVar11 = **(long **)(param_4 + 0x10);
  lVar3 = (*(long **)(param_4 + 0x10))[1];
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(Zone **)(this + 0x1c8) = param_2;
  uVar10 = lVar3 - lVar11;
  if ((int)(uVar10 >> 3) != 0) {
    uVar10 = (long)(uVar10 * 0x20000000) >> 0x20;
    if (uVar10 >> 0x1a != 0) {
LAB_01658d64:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar8 = *(undefined8 **)(param_2 + 0x10);
    uVar9 = uVar10 * 0x20;
    if (uVar9 < (ulong)(*(long *)(param_2 + 0x18) - (long)puVar8) ||
        uVar9 - (*(long *)(param_2 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(param_2 + 0x10) = puVar8 + uVar10 * 4;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(param_2,uVar9);
    }
    *(undefined8 **)(this + 0x1b0) = puVar8;
    *(undefined8 **)(this + 0x1b8) = puVar8;
    *(undefined8 **)(this + 0x1c0) = puVar8 + uVar10 * 4;
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = param_2;
      uVar10 = uVar10 - 1;
      puVar8 = (undefined8 *)(*(long *)(this + 0x1b8) + 0x20);
      *(undefined8 **)(this + 0x1b8) = puVar8;
    } while (uVar10 != 0);
  }
  *(undefined4 *)(this + 0x1d0) = param_6;
  *(undefined8 *)(this + 0x1d8) = param_7;
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  piVar7 = *(int **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)piVar7) < 0x10) {
    piVar7 = (int *)Zone::NewExpand(pZVar6,0x10);
  }
  else {
    *(int **)(pZVar6 + 0x10) = piVar7 + 4;
  }
  iVar5 = *(int *)(*(long *)(this + 0x20) + 8);
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  *piVar7 = iVar5;
  if (iVar5 < 0x41) {
    piVar7[1] = 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
  }
  else {
    iVar2 = iVar5 + 0x3e;
    if (-1 < iVar5 + -1) {
      iVar2 = iVar5 + -1;
    }
    uVar1 = (iVar2 >> 6) + 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[1] = uVar1;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar10 = (ulong)uVar1 * 8;
    if (uVar10 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar10 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar1;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar10);
    }
    *(undefined8 **)(piVar7 + 2) = puVar8;
    if (piVar7[1] == 1) {
      piVar7[2] = 0;
      piVar7[3] = 0;
    }
    else if ((0 < piVar7[1]) && (*puVar8 = 0, 1 < piVar7[1])) {
      lVar11 = 1;
      do {
        *(undefined8 *)(*(long *)(piVar7 + 2) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < piVar7[1]);
    }
  }
  *(int **)(this + 0x168) = piVar7;
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  piVar7 = *(int **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)piVar7) < 0x10) {
    piVar7 = (int *)Zone::NewExpand(pZVar6,0x10);
  }
  else {
    *(int **)(pZVar6 + 0x10) = piVar7 + 4;
  }
  iVar5 = *(int *)(*(long *)(this + 0x20) + 0x10);
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  *piVar7 = iVar5;
  if (iVar5 < 0x41) {
    piVar7[1] = 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
  }
  else {
    iVar2 = iVar5 + 0x3e;
    if (-1 < iVar5 + -1) {
      iVar2 = iVar5 + -1;
    }
    uVar1 = (iVar2 >> 6) + 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[1] = uVar1;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar10 = (ulong)uVar1 * 8;
    if (uVar10 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar10 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar1;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar10);
    }
    *(undefined8 **)(piVar7 + 2) = puVar8;
    if (piVar7[1] == 1) {
      piVar7[2] = 0;
      piVar7[3] = 0;
    }
    else if ((0 < piVar7[1]) && (*puVar8 = 0, 1 < piVar7[1])) {
      lVar11 = 1;
      do {
        *(undefined8 *)(*(long *)(piVar7 + 2) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < piVar7[1]);
    }
  }
  *(int **)(this + 0x170) = piVar7;
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  piVar7 = *(int **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)piVar7) < 0x10) {
    piVar7 = (int *)Zone::NewExpand(pZVar6,0x10);
  }
  else {
    *(int **)(pZVar6 + 0x10) = piVar7 + 4;
  }
  iVar5 = *(int *)(*(long *)(this + 0x20) + 8);
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  *piVar7 = iVar5;
  if (iVar5 < 0x41) {
    piVar7[1] = 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
  }
  else {
    iVar2 = iVar5 + 0x3e;
    if (-1 < iVar5 + -1) {
      iVar2 = iVar5 + -1;
    }
    uVar1 = (iVar2 >> 6) + 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[1] = uVar1;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar10 = (ulong)uVar1 * 8;
    if (uVar10 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar10 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar1;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar10);
    }
    *(undefined8 **)(piVar7 + 2) = puVar8;
    if (piVar7[1] == 1) {
      piVar7[2] = 0;
      piVar7[3] = 0;
    }
    else if ((0 < piVar7[1]) && (*puVar8 = 0, 1 < piVar7[1])) {
      lVar11 = 1;
      do {
        *(undefined8 *)(*(long *)(piVar7 + 2) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < piVar7[1]);
    }
  }
  *(int **)(this + 0x178) = piVar7;
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  piVar7 = *(int **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)piVar7) < 0x10) {
    piVar7 = (int *)Zone::NewExpand(pZVar6,0x10);
  }
  else {
    *(int **)(pZVar6 + 0x10) = piVar7 + 4;
  }
  iVar5 = *(int *)(*(long *)(this + 0x20) + 0x10);
  pZVar6 = *(Zone **)(*(long *)(this + 0x10) + 8);
  *piVar7 = iVar5;
  if (iVar5 < 0x41) {
    piVar7[1] = 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
  }
  else {
    iVar2 = iVar5 + 0x3e;
    if (-1 < iVar5 + -1) {
      iVar2 = iVar5 + -1;
    }
    uVar1 = (iVar2 >> 6) + 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[1] = uVar1;
    puVar8 = *(undefined8 **)(pZVar6 + 0x10);
    uVar10 = (ulong)uVar1 * 8;
    if (uVar10 < (ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar8) ||
        uVar10 - (*(long *)(pZVar6 + 0x18) - (long)puVar8) == 0) {
      *(undefined8 **)(pZVar6 + 0x10) = puVar8 + uVar1;
    }
    else {
      puVar8 = (undefined8 *)Zone::NewExpand(pZVar6,uVar10);
    }
    *(undefined8 **)(piVar7 + 2) = puVar8;
    if (piVar7[1] == 1) {
      piVar7[2] = 0;
      piVar7[3] = 0;
    }
    else if ((0 < piVar7[1]) && (*puVar8 = 0, 1 < piVar7[1])) {
      lVar11 = 1;
      do {
        *(undefined8 *)(*(long *)(piVar7 + 2) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < piVar7[1]);
    }
  }
  *(int **)(this + 0x180) = piVar7;
  *(undefined8 *)(*(long *)(this + 8) + 0x10) = *(undefined8 *)(this + 0x168);
  *(undefined8 *)(*(long *)(this + 8) + 0x18) = *(undefined8 *)(this + 0x170);
  return;
}

