
/* WARNING: Removing unreachable block (ram,0x00ddd3a8) */
/* WARNING: Removing unreachable block (ram,0x00ddd3e8) */

undefined8 FUN_00ddd330(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  
  piVar9 = *(int **)(param_1 + 0x350);
  iVar7 = *piVar9;
  if (iVar7 == -1) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x76) | (uint)*(ushort *)(param_1 + 0x74) << 6 |
            (uint)*(ushort *)(param_1 + 0x82) << 3;
    if (uVar2 < 0x409) {
      if ((uVar2 != 0x209) && (uVar2 != 0x20c)) goto LAB_00ddd404;
      iVar7 = 3;
      *piVar9 = 3;
    }
    else if ((uVar2 - 0x409 < 4) && (uVar2 - 0x409 != 2)) {
      iVar7 = 1;
      *piVar9 = 1;
    }
    else {
      if (uVar2 == 0x80b) {
        *piVar9 = 0;
        goto LAB_00ddd410;
      }
LAB_00ddd404:
      iVar7 = -1;
      *piVar9 = -1;
    }
LAB_00ddd354:
    if (iVar7 == 3) {
      iVar7 = 1;
    }
    else {
      if (iVar7 != 1) {
        uVar5 = *(undefined8 *)(param_1 + 0x3b8);
        pcVar6 = "No support for converting user data format to LogL";
        goto LAB_00ddd478;
      }
      iVar7 = 2;
    }
  }
  else {
    if (iVar7 != 0) goto LAB_00ddd354;
LAB_00ddd410:
    iVar7 = 4;
  }
  piVar9[2] = iVar7;
  puVar1 = (uint *)(param_1 + 0x58);
  puVar3 = (uint *)(param_1 + 0x84);
  if ((*(uint *)(param_1 + 0x10) & 0x400) != 0) {
    puVar1 = (uint *)(param_1 + 100);
    puVar3 = (uint *)(param_1 + 0x68);
  }
  lVar8 = (ulong)*puVar3 * (ulong)*puVar1;
  *(long *)(piVar9 + 6) = lVar8;
  if (lVar8 != 0) {
    pvVar4 = _TIFFmalloc(lVar8 * 2);
    *(void **)(piVar9 + 4) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      return 1;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x3b8);
  pcVar6 = "No space for SGILog translation buffer";
LAB_00ddd478:
  TIFFErrorExt(uVar5,"LogL16InitState",pcVar6);
  return 0;
}

