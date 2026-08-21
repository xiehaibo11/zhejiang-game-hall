
char * FUN_00164d18(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *local_38;
  
  *(undefined1 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar9 = param_2 + 1;
  uVar12 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar12 = *(ulong *)(param_2 + 1);
    puVar9 = param_2 + 3;
    pbVar1 = (byte *)(uVar12 + (long)puVar9);
  }
  else {
    pbVar1 = (byte *)((long)puVar9 + uVar12);
  }
  if (uVar12 == 0) {
    pcVar8 = (char *)0x0;
  }
  else if (*puVar9 == 0) {
    uVar4 = puVar9[1];
    if ((byte)((byte)uVar4 | 2) == 3) {
      pbVar17 = (byte *)((long)puVar9 + 5);
      pbVar10 = pbVar17;
      do {
        local_38 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar10 = local_38;
      } while (bVar2 != 0);
      uVar6 = FUN_00163954(&local_38,pbVar1);
      uVar12 = 0;
      uVar13 = 0;
      *(undefined4 *)(param_3 + 5) = uVar6;
      pbVar10 = local_38;
      pbVar15 = local_38;
      do {
        pbVar11 = pbVar10;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar16 = pbVar15 + 1;
        bVar2 = *pbVar15;
        pbVar10 = pbVar11 + 1;
        uVar3 = uVar12 & 0x3f;
        uVar12 = uVar12 + 7;
        uVar13 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar13;
        pbVar15 = pbVar16;
      } while ((char)bVar2 < '\0');
      uVar14 = (uint)(-1L << (uVar12 & 0x3f));
      if (((int)uVar12 - 7U < 0x39 & bVar2 >> 6) == 0) {
        uVar14 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar13 | uVar14;
      if ((byte)uVar4 == 1) {
        local_38 = pbVar11 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar16;
        bVar2 = *pbVar17;
      }
      else {
        local_38 = pbVar10;
        uVar5 = FUN_00163954(&local_38,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar5;
        bVar2 = *pbVar17;
      }
      if (bVar2 == 0x7a) {
        FUN_00163954(&local_38,pbVar1);
LAB_00164ec0:
        switch(*pbVar17) {
        case 0x42:
          *(undefined1 *)((long)param_3 + 0x33) = 1;
          break;
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x51:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
          break;
        case 0x4c:
          pbVar17 = pbVar17 + 1;
          *(byte *)((long)param_3 + 0x19) = *local_38;
          local_38 = local_38 + 1;
          goto LAB_00164ec0;
        case 0x50:
          bVar2 = *local_38;
          *(byte *)((long)param_3 + 0x1a) = bVar2;
          *(char *)((long)param_3 + 0x1b) = (char)(local_38 + 1) - (char)param_2;
          local_38 = local_38 + 1;
          lVar7 = FUN_00163640(param_1,&local_38,pbVar1,bVar2,0);
          param_3[4] = lVar7;
          pbVar17 = pbVar17 + 1;
          goto LAB_00164ec0;
        case 0x52:
          pbVar17 = pbVar17 + 1;
          *(byte *)(param_3 + 3) = *local_38;
          local_38 = local_38 + 1;
          goto LAB_00164ec0;
        case 0x53:
          *(undefined1 *)(param_3 + 6) = 1;
          pbVar17 = pbVar17 + 1;
          goto LAB_00164ec0;
        case 0x7a:
          goto code_r0x00164f68;
        default:
          if (*pbVar17 == 0) goto LAB_00164f78;
        }
        pbVar17 = pbVar17 + 1;
        goto LAB_00164ec0;
      }
LAB_00164f78:
      pcVar8 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_38;
    }
    else {
      pcVar8 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar8 = "CIE ID is not zero";
  }
  return pcVar8;
code_r0x00164f68:
  *(undefined1 *)((long)param_3 + 0x31) = 1;
  pbVar17 = pbVar17 + 1;
  goto LAB_00164ec0;
}

