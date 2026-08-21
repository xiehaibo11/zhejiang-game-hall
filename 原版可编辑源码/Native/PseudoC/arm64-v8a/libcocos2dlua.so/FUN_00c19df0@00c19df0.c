
void FUN_00c19df0(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar8 + 0x168) != 0) {
    lVar3 = *(long *)(*(long *)(lVar8 + 0x168) + 0x20);
    *(undefined8 *)(lVar3 + 0x20) = 0;
    uVar7 = (ulong)*(uint *)(lVar3 + 0x34);
    plVar6 = (long *)(*(long *)(lVar3 + 0x28) + (ulong)*(uint *)(lVar3 + 0x34) * 0x18);
    do {
      if ((*plVar6 != -1) && ((int)(plVar6[1] >> 0x2f) == -0xb)) {
        uVar4 = plVar6[1] & 0x7fffffffffff;
        *(byte *)(uVar4 + 8) = *(byte *)(lVar8 + 0x30) & 3 | *(byte *)(uVar4 + 8) & 0xe8;
        lVar3 = *plVar6;
        *plVar6 = -1;
        bVar1 = *(byte *)(lVar8 + 0xc1);
        uVar9 = *(undefined8 *)(lVar8 + 0x28);
        *(byte *)(lVar8 + 0xc1) = bVar1 | 0x50;
        *(undefined8 *)(lVar8 + 0x28) = 0x800000000000;
        plVar5 = *(long **)(param_1 + 0x28);
        *plVar5 = lVar3;
        plVar5[1] = -1;
        plVar5[2] = uVar4 | (ulong)~(uint)*(byte *)(uVar4 + 9) << 0x2f;
        *(long **)(param_1 + 0x28) = plVar5 + 3;
        iVar2 = FUN_00c175a0(param_1,plVar5 + 2,1,0xffffffffffffffff);
        *(undefined8 *)(lVar8 + 0x28) = uVar9;
        *(byte *)(lVar8 + 0xc1) = bVar1 & 0xf0 | *(byte *)(lVar8 + 0xc1) & 0xf;
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfa980(param_1);
        }
      }
      uVar7 = uVar7 - 1;
      plVar6 = plVar6 + -3;
    } while (uVar7 != 0xffffffffffffffff);
  }
  return;
}

