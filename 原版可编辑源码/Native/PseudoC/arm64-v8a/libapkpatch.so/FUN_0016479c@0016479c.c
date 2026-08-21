
undefined8 FUN_0016479c(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  char *local_68;
  
  uVar15 = (ulong)(ushort)param_1[3];
  if (uVar15 != 0) {
    uVar9 = param_3[2];
    uVar16 = *param_1;
    if (uVar16 <= uVar9) {
      uVar7 = param_1[2];
      lVar12 = 0;
      do {
        if (*(int *)(uVar7 + lVar12) == 1) {
          uVar11 = *(long *)(uVar7 + lVar12 + 0x10) + uVar16;
          if ((uVar11 <= uVar9) &&
             (uVar13 = *(ulong *)(uVar7 + lVar12 + 0x28), uVar9 < uVar13 + uVar11)) {
            puVar10 = (ulong *)param_3[1];
            uVar9 = uVar15 + 0xffffffff;
            *puVar10 = uVar11;
            puVar10[1] = uVar13;
            uVar11 = uVar9 & 0xffffffff;
            iVar3 = *(int *)(uVar7 + uVar11 * 0x38);
            while( true ) {
              if (iVar3 == 0x6474e550) {
                lVar8 = uVar7 + uVar11 * 0x38;
                uVar2 = *param_3;
                lVar12 = param_3[1];
                uVar14 = *(undefined8 *)(lVar8 + 0x28);
                pcVar1 = (char *)(*(long *)(lVar8 + 0x10) + uVar16);
                local_68 = pcVar1 + 1;
                *(char **)(lVar12 + 0x20) = pcVar1;
                *(undefined8 *)(lVar12 + 0x28) = uVar14;
                if (*pcVar1 == '\x01') {
                  cVar4 = pcVar1[2];
                  local_68 = pcVar1 + 4;
                  uVar6 = FUN_00163640(uVar2,&local_68,uVar14,pcVar1[1],pcVar1);
                  if (cVar4 != -1) {
                    FUN_00163640(uVar2,&local_68,uVar14,cVar4,pcVar1);
                  }
                  lVar12 = param_3[1];
                  *(undefined8 *)(lVar12 + 0x10) = uVar6;
                  *(undefined8 *)(lVar12 + 0x18) = 0xffffffffffffffff;
                  return 1;
                }
                fwrite("libunwind: Unsupported .eh_frame_hdr version\n",0x2d,1,(FILE *)0x16d358);
              }
              uVar5 = (int)uVar15 - 1;
              uVar15 = (ulong)uVar5;
              if ((uVar5 & 0xffff) == 0) break;
              uVar7 = param_1[2];
              uVar9 = uVar9 - 1;
              uVar11 = uVar9 & 0xffffffff;
              iVar3 = *(int *)(uVar7 + uVar11 * 0x38);
            }
            return 0;
          }
        }
        lVar12 = lVar12 + 0x38;
      } while (uVar15 * 0x38 - lVar12 != 0);
    }
  }
  return 0;
}

