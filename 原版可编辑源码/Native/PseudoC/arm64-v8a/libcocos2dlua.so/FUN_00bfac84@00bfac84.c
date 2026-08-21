
void FUN_00bfac84(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long lVar5;
  
  if (*(char *)(param_1 + 0xb) != '\x06') {
    puVar8 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar8 + 1;
    uVar1 = FUN_00bfab64(param_1,0);
    *puVar8 = uVar1 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
    FUN_00bfa980(param_1,4);
  }
  lVar2 = FUN_00c1745c(*(undefined8 *)(param_1 + 0x50),4);
  lVar6 = *(long *)(lVar2 + 0x38);
  uVar1 = *(ulong *)(lVar2 + 0x50);
  puVar8 = (ulong *)(*(long *)(lVar2 + 0x20) - 8);
  do {
    while( true ) {
      if ((uVar1 == 0) || (puVar8 <= (ulong *)(lVar6 + 8U))) goto LAB_00bfae1c;
      while ((*(int *)((uVar1 & 0xfffffffffffffffc) + 200) < 0 &&
             (puVar8 < (ulong *)(lVar6 + -*(int *)(uVar1 + 200))))) {
        iVar3 = *(int *)(uVar1 + 0xc4);
        if (-1 < iVar3) goto LAB_00bfadb8;
        uVar1 = *(ulong *)(uVar1 + 0xa0);
        if (uVar1 == 0) goto LAB_00bfae1c;
      }
      uVar7 = *puVar8;
      uVar4 = (uVar7 & 7) - 1;
      if (uVar4 < 7) break;
switchD_00bfad88_caseD_3:
      puVar8 = puVar8 + -((ulong)*(byte *)(uVar7 - 3) + 2);
    }
    switch(uVar4 & 0xffffffff) {
    case 0:
switchD_00bfad88_caseD_0:
      uVar1 = *(ulong *)(uVar1 + 0xa0);
      break;
    case 1:
      if (puVar8[-3] == 1) goto switchD_00bfad88_caseD_0;
      break;
    case 2:
      break;
    default:
      goto switchD_00bfad88_caseD_3;
    case 4:
      if ((uVar1 & 1) != 0) goto LAB_00bfae1c;
      iVar3 = *(int *)(uVar1 + 0xc4);
      if (-1 < iVar3) {
LAB_00bfadb8:
        lVar5 = (long)iVar3;
        goto LAB_00bfadbc;
      }
      break;
    case 5:
    case 6:
      if (*(char *)((*(ulong *)((long)puVar8 + (~uVar7 & 0xfffffffffffffff8)) & 0x7fffffffffff) + 10
                   ) == '\x15') {
        lVar5 = (long)puVar8 + ((8 - (uVar7 & 0xfffffffffffffff8)) - lVar6);
LAB_00bfadbc:
        if (lVar5 != 0) {
          puVar9 = *(undefined8 **)(lVar2 + 0x28);
          if (((int)((long)*(undefined8 *)(lVar5 + lVar6) >> 0x2f) != -9) ||
             (*(char *)(lVar2 + 0xb) == '\x05')) {
            uVar1 = FUN_00bfab64(lVar2,0x12);
            puVar9[-1] = uVar1 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
            FUN_00bfa980(lVar2,5);
          }
          *(undefined1 *)(lVar2 + 0xb) = 5;
          puVar9[1] = puVar9[-1];
          puVar9[-1] = *(undefined8 *)(lVar5 + lVar6);
          *puVar9 = 0xffffffffffffffff;
          *(undefined8 **)(lVar2 + 0x28) = puVar9 + 2;
          FUN_00c175d8(lVar2,puVar9 + 1,2);
        }
      }
LAB_00bfae1c:
                    /* WARNING: Subroutine does not return */
      FUN_00bfa980(lVar2,2);
    }
    puVar8 = (ulong *)((long)puVar8 - (uVar7 & 0xfffffffffffffff8));
  } while( true );
}

