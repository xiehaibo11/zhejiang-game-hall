
/* v8::internal::RegisterConfiguration::RegisterConfiguration(int, int, int, int, int const*, int
   const*, v8::internal::RegisterConfiguration::AliasingKind) */

void __thiscall
v8::internal::RegisterConfiguration::RegisterConfiguration
          (RegisterConfiguration *this,undefined4 param_1,int param_2,uint param_3,uint param_4,
          uint *param_5,uint *param_6,int param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  long lVar10;
  
  *(undefined4 *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x1c) = 0;
  *(uint *)(this + 0x20) = param_4;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(uint **)(this + 0x38) = param_5;
  *(uint **)(this + 0xc0) = param_6;
  *(undefined ***)this = &PTR__RegisterConfiguration_01cc6818;
  *(int *)(this + 0x148) = param_8;
  if (0 < (int)param_3) {
    uVar5 = 0;
    uVar7 = (ulong)param_3;
    do {
      uVar7 = uVar7 - 1;
      uVar5 = uVar5 | 1 << (ulong)(*param_5 & 0x1f);
      *(uint *)(this + 0x28) = uVar5;
      param_5 = param_5 + 1;
    } while (uVar7 != 0);
  }
  if ((int)param_4 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar7 = (ulong)param_4;
    puVar9 = param_6;
    do {
      uVar7 = uVar7 - 1;
      uVar5 = uVar5 | 1 << (ulong)(*puVar9 & 0x1f);
      *(uint *)(this + 0x30) = uVar5;
      puVar9 = puVar9 + 1;
    } while (uVar7 != 0);
  }
  if (param_8 != 1) {
    *(int *)(this + 0x14) = param_2;
    *(int *)(this + 0xc) = param_2;
    *(uint *)(this + 0x24) = param_4;
    *(uint *)(this + 0x1c) = param_4;
    if (0 < (int)param_4) {
      uVar1 = *param_6;
      *(uint *)(this + 200) = uVar1;
      *(uint *)(this + 0x40) = uVar1;
      if (param_4 != 1) {
        lVar6 = 0;
        do {
          lVar10 = lVar6 * 4;
          lVar6 = lVar6 + 1;
          uVar2 = *(undefined4 *)(*(long *)(this + 0xc0) + lVar10 + 4);
          *(undefined4 *)(this + lVar10 + 0xcc) = uVar2;
          *(undefined4 *)(this + lVar10 + 0x44) = uVar2;
        } while ((ulong)param_4 - 1 != lVar6);
      }
    }
    *(uint *)(this + 0x34) = uVar5;
    *(uint *)(this + 0x2c) = uVar5;
    return;
  }
  iVar4 = param_2 << 1;
  if (0x10 < param_2) {
    iVar4 = 0x20;
  }
  *(int *)(this + 0xc) = iVar4;
  *(undefined4 *)(this + 0x1c) = 0;
  if ((int)param_4 < 1) {
    if (param_2 < 0) {
      param_2 = param_2 + 1;
    }
    *(int *)(this + 0x14) = param_2 >> 1;
    *(undefined4 *)(this + 0x24) = 0;
  }
  else {
    lVar6 = 0;
    while( true ) {
      if ((int)param_6[lVar6] < 0x10) {
        iVar4 = *(int *)(this + 0x1c);
        uVar5 = param_6[lVar6] << 1;
        *(int *)(this + 0x1c) = iVar4 + 1;
        *(uint *)(this + (long)iVar4 * 4 + 0x40) = uVar5;
        iVar4 = *(int *)(this + 0x1c);
        *(int *)(this + 0x1c) = iVar4 + 1;
        *(uint *)(this + (long)iVar4 * 4 + 0x40) = uVar5 | 1;
        param_4 = *(uint *)(this + 0x20);
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 3 << (ulong)(uVar5 & 0x1f);
      }
      lVar6 = lVar6 + 1;
      if ((int)param_4 <= lVar6) break;
      param_6 = *(uint **)(this + 0xc0);
    }
    iVar4 = *(int *)(this + 0x10);
    piVar8 = *(int **)(this + 0xc0);
    *(undefined4 *)(this + 0x24) = 0;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    *(int *)(this + 0x14) = iVar4 >> 1;
    if (1 < (int)param_4) {
      iVar4 = *piVar8;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      lVar6 = 1;
      uVar5 = iVar4 >> 1;
      while( true ) {
        iVar4 = piVar8[lVar6];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        if (uVar5 == iVar4 >> 1) {
          iVar3 = *(int *)(this + 0x24);
          *(int *)(this + 0x24) = iVar3 + 1;
          *(uint *)(this + (long)iVar3 * 4 + 200) = uVar5;
          param_4 = *(uint *)(this + 0x20);
          *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 1 << (ulong)(uVar5 & 0x1f);
        }
        lVar6 = lVar6 + 1;
        if ((int)param_4 <= lVar6) break;
        piVar8 = *(int **)(this + 0xc0);
        uVar5 = iVar4 >> 1;
      }
    }
  }
  return;
}

