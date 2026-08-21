
void FUN_017e1250(LiftoffAssembler *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  byte *pbVar12;
  
  lVar3 = *(long *)(param_1 + 0x1c8);
  lVar4 = *(long *)(param_1 + 0x1d0);
  cVar7 = *(char *)(lVar4 + -0xc);
  uVar10 = param_2 & 0xffffffff;
  pcVar11 = (char *)(lVar3 + (param_2 & 0xffffffff) * 0xc);
  if (cVar7 == '\0') {
    pbVar12 = (byte *)(lVar3 + uVar10 * 0xc + 1);
    bVar6 = *pbVar12;
    if (*pcVar11 == '\x01') {
      uVar8 = (ulong)*(byte *)(lVar3 + uVar10 * 0xc + 4);
      if (*(int *)(param_1 + uVar8 * 4 + 0x248) + -1 == 0) {
        v8::internal::wasm::LiftoffAssembler::Fill(param_1,uVar8,*(undefined4 *)(lVar4 + -4),bVar6);
        goto joined_r0x017e1448;
      }
      *(int *)(param_1 + uVar8 * 4 + 0x248) = *(int *)(param_1 + uVar8 * 4 + 0x248) + -1;
      *pcVar11 = '\0';
    }
    puVar2 = &DAT_01a634d8;
    if (1 < bVar6 - 3) {
      puVar2 = &DAT_01a634d0;
    }
    uVar8 = *puVar2 & (*(ulong *)(param_1 + 0x240) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      uVar8 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(param_1,*puVar2,0);
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
    }
    v8::internal::wasm::LiftoffAssembler::Fill
              (param_1,uVar8 & 0xff,*(undefined4 *)(lVar4 + -4),(uint)bVar6);
    *pcVar11 = '\x01';
    *pbVar12 = bVar6;
    *(char *)(lVar3 + uVar10 * 0xc + 4) = (char)uVar8;
    *(ulong *)(param_1 + 0x240) = *(ulong *)(param_1 + 0x240) | 1L << (uVar8 & 0x3f);
    *(int *)(param_1 + (uVar8 & 0xff) * 4 + 0x248) =
         *(int *)(param_1 + (uVar8 & 0xff) * 4 + 0x248) + 1;
  }
  else if (cVar7 == '\x02') {
    if (*pcVar11 == '\x01') {
      uVar8 = (ulong)*(byte *)(lVar3 + uVar10 * 0xc + 4);
      iVar5 = *(int *)(param_1 + uVar8 * 4 + 0x248);
      *(int *)(param_1 + uVar8 * 4 + 0x248) = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        *(ulong *)(param_1 + 0x240) =
             *(ulong *)(param_1 + 0x240) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    uVar9 = *(undefined8 *)(lVar4 + -0xc);
    uVar1 = (uint)uVar9 & 0xff;
    *pcVar11 = (char)uVar9;
    *(char *)(lVar3 + uVar10 * 0xc + 1) = (char)((ulong)uVar9 >> 8);
    if (uVar1 == 2) {
      *(int *)(lVar3 + uVar10 * 0xc + 4) = (int)((ulong)uVar9 >> 0x20);
    }
    else if (uVar1 == 1) {
      *(char *)(lVar3 + uVar10 * 0xc + 4) = (char)((ulong)uVar9 >> 0x20);
    }
  }
  else if (cVar7 == '\x01') {
    if (*pcVar11 == '\x01') {
      uVar8 = (ulong)*(byte *)(lVar3 + uVar10 * 0xc + 4);
      iVar5 = *(int *)(param_1 + uVar8 * 4 + 0x248);
      *(int *)(param_1 + uVar8 * 4 + 0x248) = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        *(ulong *)(param_1 + 0x240) =
             *(ulong *)(param_1 + 0x240) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    uVar9 = *(undefined8 *)(lVar4 + -0xc);
    uVar1 = (uint)uVar9 & 0xff;
    *pcVar11 = (char)uVar9;
    *(char *)(lVar3 + uVar10 * 0xc + 1) = (char)((ulong)uVar9 >> 8);
    if (uVar1 == 2) {
      *(int *)(lVar3 + uVar10 * 0xc + 4) = (int)((ulong)uVar9 >> 0x20);
    }
    else if (uVar1 == 1) {
      *(char *)(lVar3 + uVar10 * 0xc + 4) = (char)((ulong)uVar9 >> 0x20);
    }
    if ((param_3 & 1) != 0) {
      uVar10 = (ulong)*(byte *)(lVar3 + uVar10 * 0xc + 4);
      *(ulong *)(param_1 + 0x240) = 1L << (uVar10 & 0x3f) | *(ulong *)(param_1 + 0x240);
      *(int *)(param_1 + uVar10 * 4 + 0x248) = *(int *)(param_1 + uVar10 * 4 + 0x248) + 1;
      return;
    }
    goto LAB_017e14f4;
  }
joined_r0x017e1448:
  if ((param_3 & 1) != 0) {
    return;
  }
LAB_017e14f4:
  *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + -0xc;
  return;
}

