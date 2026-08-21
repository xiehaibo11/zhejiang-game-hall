
/* WARNING: Type propagation algorithm not settling */

long * FUN_01836094(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 == 0xff) {
    return (long *)0x0;
  }
  if (0xc < (param_2 & 0xf)) {
switchD_018360cc_caseD_5:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (uint *)*param_1;
  switch(param_2 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    puVar7 = puVar8 + 2;
    plVar4 = *(long **)puVar8;
    break;
  case 1:
    uVar9 = 0;
    plVar4 = (long *)0x0;
    puVar6 = puVar8;
    do {
      puVar7 = (uint *)((long)puVar6 + 1);
      uVar3 = *puVar6;
      plVar4 = (long *)(((ulong)(byte)uVar3 & 0x7f) << (uVar9 & 0x3f) | (ulong)plVar4);
      uVar9 = uVar9 + 7;
      puVar6 = puVar7;
    } while ((char)(byte)uVar3 < '\0');
    break;
  case 2:
    puVar7 = (uint *)((long)puVar8 + 2);
    plVar4 = (long *)(ulong)(ushort)*puVar8;
    break;
  case 3:
    puVar7 = puVar8 + 1;
    plVar4 = (long *)(ulong)*puVar8;
    break;
  default:
    goto switchD_018360cc_caseD_5;
  case 9:
    uVar9 = 0;
    uVar5 = 0;
    puVar6 = puVar8;
    do {
      puVar7 = (uint *)((long)puVar6 + 1);
      bVar2 = (byte)*puVar6;
      uVar5 = ((ulong)bVar2 & 0x7f) << (uVar9 & 0x3f) | uVar5;
      uVar9 = uVar9 + 7;
      puVar6 = puVar7;
    } while ((char)bVar2 < '\0');
    uVar10 = -1L << (uVar9 & 0x3f);
    if (((uint)(uVar9 < 0x40) & (bVar2 & 0x40) >> 6) == 0) {
      uVar10 = 0;
    }
    plVar4 = (long *)(uVar5 | uVar10);
    break;
  case 10:
    puVar7 = (uint *)((long)puVar8 + 2);
    plVar4 = (long *)(long)(short)*puVar8;
    break;
  case 0xb:
    puVar7 = puVar8 + 1;
    plVar4 = (long *)(long)(int)*puVar8;
  }
  uVar3 = uVar1 >> 4 & 7;
  if (uVar3 != 0) {
    if (uVar3 != 1) goto switchD_018360cc_caseD_5;
    if (plVar4 == (long *)0x0) goto LAB_01836134;
    plVar4 = (long *)((long)plVar4 + (long)puVar8);
  }
  if ((plVar4 != (long *)0x0) && (uVar1 >> 7 != 0)) {
    plVar4 = (long *)*plVar4;
  }
LAB_01836134:
  *param_1 = puVar7;
  return plVar4;
}

