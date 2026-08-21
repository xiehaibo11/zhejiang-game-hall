
void FUN_00bfacdc(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar4;
  
  lVar6 = *(long *)(param_1 + 0x38);
  uVar1 = *(ulong *)(param_1 + 0x50);
  puVar5 = (ulong *)(*(long *)(param_1 + 0x20) - 8);
  do {
    while( true ) {
      if ((uVar1 == 0) || (puVar5 <= (ulong *)(lVar6 + 8U))) goto LAB_00bfae1c;
      while ((*(int *)((uVar1 & 0xfffffffffffffffc) + 200) < 0 &&
             (puVar5 < (ulong *)(lVar6 + -*(int *)(uVar1 + 200))))) {
        iVar2 = *(int *)(uVar1 + 0xc4);
        if (-1 < iVar2) goto LAB_00bfadb8;
        uVar1 = *(ulong *)(uVar1 + 0xa0);
        if (uVar1 == 0) goto LAB_00bfae1c;
      }
      uVar7 = *puVar5;
      uVar3 = (uVar7 & 7) - 1;
      if (uVar3 < 7) break;
switchD_00bfad88_caseD_3:
      puVar5 = puVar5 + -((ulong)*(byte *)(uVar7 - 3) + 2);
    }
    switch(uVar3 & 0xffffffff) {
    case 0:
switchD_00bfad88_caseD_0:
      uVar1 = *(ulong *)(uVar1 + 0xa0);
      break;
    case 1:
      if (puVar5[-3] == 1) goto switchD_00bfad88_caseD_0;
      break;
    case 2:
      break;
    default:
      goto switchD_00bfad88_caseD_3;
    case 4:
      if ((uVar1 & 1) != 0) goto LAB_00bfae1c;
      iVar2 = *(int *)(uVar1 + 0xc4);
      if (-1 < iVar2) {
LAB_00bfadb8:
        lVar4 = (long)iVar2;
        goto LAB_00bfadbc;
      }
      break;
    case 5:
    case 6:
      if (*(char *)((*(ulong *)((long)puVar5 + (~uVar7 & 0xfffffffffffffff8)) & 0x7fffffffffff) + 10
                   ) == '\x15') {
        lVar4 = (long)puVar5 + ((8 - (uVar7 & 0xfffffffffffffff8)) - lVar6);
LAB_00bfadbc:
        if (lVar4 != 0) {
          puVar8 = *(undefined8 **)(param_1 + 0x28);
          if (((int)((long)*(undefined8 *)(lVar4 + lVar6) >> 0x2f) != -9) ||
             (*(char *)(param_1 + 0xb) == '\x05')) {
            uVar1 = FUN_00bfab64(param_1,0x12);
            puVar8[-1] = uVar1 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
            FUN_00bfa980(param_1,5);
          }
          *(undefined1 *)(param_1 + 0xb) = 5;
          puVar8[1] = puVar8[-1];
          puVar8[-1] = *(undefined8 *)(lVar4 + lVar6);
          *puVar8 = 0xffffffffffffffff;
          *(undefined8 **)(param_1 + 0x28) = puVar8 + 2;
          FUN_00c175d8(param_1,puVar8 + 1,2);
        }
      }
LAB_00bfae1c:
                    /* WARNING: Subroutine does not return */
      FUN_00bfa980(param_1,2);
    }
    puVar5 = (ulong *)((long)puVar5 - (uVar7 & 0xfffffffffffffff8));
  } while( true );
}

