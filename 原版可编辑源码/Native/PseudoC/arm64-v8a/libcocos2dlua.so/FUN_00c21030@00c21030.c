
uint * FUN_00c21030(long *param_1,long param_2,double *param_3,long *param_4,uint *param_5)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  double dVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint local_c;
  ulong local_8;
  
  lVar11 = *param_1;
  lVar2 = (ulong)*(ushort *)(param_2 + 10) * 0x18;
  uVar3 = *(uint *)(lVar11 + lVar2);
  if ((uVar3 & 0xf0800000) == 0x20800000) {
    puVar13 = *(uint **)(param_2 + 0x10);
    lVar2 = (ulong)(ushort)uVar3 * 0x18;
    uVar3 = *(uint *)(lVar11 + lVar2);
  }
  else {
    puVar13 = (uint *)(param_2 + 0x10);
  }
  puVar12 = (uint *)(lVar11 + lVar2);
  uVar7 = (ulong)uVar3;
  uVar3 = uVar3 >> 0x1c;
  if (uVar3 == 8) goto LAB_00c21148;
  do {
    dVar8 = *param_3;
    uVar10 = (uint)((long)dVar8 >> 0x2f);
    uVar6 = (uint)uVar7;
    if (uVar10 == 0xfffffff2) {
      local_8 = (ulong)*(int *)param_3;
      uVar3 = uVar6 >> 0x1d;
joined_r0x00c21230:
      if (uVar3 == 1) {
        iVar4 = FUN_00c0eb90(param_1,(short)uVar6);
        if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb3a0(param_1[2],0xb92);
        }
        uVar3 = *puVar12;
        if (uVar3 >> 0x1c == 2) {
          if (puVar12[1] == 4) {
            puVar13 = (uint *)(ulong)*puVar13;
          }
          else {
            puVar13 = *(uint **)puVar13;
          }
        }
        else if ((uVar3 & 0xc000000) != 0) {
          if ((uVar3 >> 0x1a & 1) != 0) {
            local_8 = local_8 & 1;
          }
          *param_5 = *param_5 | 0x2000000;
        }
        *param_4 = (long)((long)puVar13 + (long)iVar4 * local_8);
        return puVar12;
      }
LAB_00c210e0:
      uVar3 = (uint)(uVar7 >> 0x1c);
    }
    else {
      if (uVar10 < 0xfffffff2) {
        local_8 = (ulong)*param_3;
LAB_00c210d4:
        uVar6 = (uint)uVar7;
        uVar3 = (uint)(uVar7 >> 0x1d);
        goto joined_r0x00c21230;
      }
      if (uVar10 != 0xfffffff5) {
        if (uVar10 != 0xfffffffb) goto LAB_00c210e4;
        uVar9 = (ulong)dVar8 & 0x7fffffffffff;
        if (uVar3 != 1) {
          if ((uVar6 & 0xf4000000) == 0x34000000) {
            if (*(int *)(uVar9 + 0x10) == 2) {
              *param_5 = *param_5 | 0x2000000;
              if (*(char *)(uVar9 + 0x18) == 'r') {
                if (*(char *)(uVar9 + 0x19) == 'e') {
                  *param_4 = (long)puVar13;
                  return puVar12;
                }
              }
              else if ((*(char *)(uVar9 + 0x18) == 'i') && (*(char *)(uVar9 + 0x19) == 'm')) {
                *param_4 = (long)puVar13 + (ulong)(puVar12[1] >> 1);
                return puVar12;
              }
              goto LAB_00c21218;
            }
          }
          else if (*(short *)(param_2 + 10) == 0x15) {
            lVar2 = (ulong)*puVar13 * 0x18;
            uVar6 = *(uint *)(lVar11 + lVar2);
            while( true ) {
              uVar3 = uVar6 >> 0x1c;
              uVar7 = (ulong)uVar6;
              if (uVar3 != 8) break;
              lVar2 = (uVar7 & 0xffff) * 0x18;
              uVar6 = *(uint *)(lVar11 + lVar2);
            }
            puVar12 = (uint *)(lVar11 + lVar2);
            if (uVar3 == 2) {
              do {
                lVar2 = (uVar7 & 0xffff) * 0x18;
                puVar12 = (uint *)(lVar11 + lVar2);
                uVar6 = *(uint *)(lVar11 + lVar2);
                uVar7 = (ulong)uVar6;
                uVar3 = uVar6 >> 0x1c;
                if (uVar3 != 8) break;
                lVar2 = (ulong)(ushort)uVar6 * 0x18;
                puVar12 = (uint *)(lVar11 + lVar2);
                uVar3 = *(uint *)(lVar11 + lVar2);
                uVar7 = (ulong)uVar3;
                uVar3 = uVar3 >> 0x1c;
              } while (uVar3 == 8);
            }
            if (uVar3 == 1) {
              puVar5 = (uint *)FUN_00c0e9cc(param_1,puVar12,uVar9,&local_c,0);
              if ((puVar5 != (uint *)0x0) && (*puVar5 >> 0x1c == 0xb)) {
                return puVar5;
              }
              goto LAB_00c21218;
            }
          }
          goto LAB_00c210e4;
        }
        puVar5 = (uint *)FUN_00c0e9cc(param_1,puVar12,uVar9,&local_c,param_5);
        if (puVar5 != (uint *)0x0) {
          *param_4 = (long)puVar13 + (ulong)local_c;
          return puVar5;
        }
LAB_00c21218:
        uVar7 = (ulong)*puVar12;
        goto LAB_00c210e0;
      }
      uVar1 = *(ushort *)(((ulong)dVar8 & 0x7fffffffffff) + 10);
      do {
        lVar2 = (ulong)uVar1 * 0x18;
        uVar6 = *(uint *)(lVar11 + lVar2) >> 0x1c;
        uVar1 = (ushort)*(uint *)(lVar11 + lVar2);
      } while (uVar6 == 8);
      if (uVar6 == 5) {
        lVar2 = (ulong)uVar1 * 0x18;
      }
      if ((*(uint *)(lVar11 + lVar2) & 0xfc000000) == 0) {
        FUN_00c21820(param_1,lVar11 + 0x108,(uint *)(lVar11 + lVar2),&local_8,
                     ((ulong)dVar8 & 0x7fffffffffff) + 0x10,0);
        uVar7 = (ulong)*puVar12;
        goto LAB_00c210d4;
      }
    }
LAB_00c210e4:
    if (uVar3 != 2) {
LAB_00c21318:
      *param_5 = *param_5 | 1;
      return puVar12;
    }
    lVar11 = *param_1;
    uVar9 = uVar7;
    do {
      uVar3 = *(uint *)(lVar11 + (uVar9 & 0xffff) * 0x18);
      uVar9 = (ulong)uVar3;
      uVar3 = uVar3 >> 0x1c;
    } while (uVar3 == 8);
    if (uVar3 != 1) goto LAB_00c21318;
    if (puVar12[1] == 4) {
      puVar13 = (uint *)(ulong)*puVar13;
    }
    else {
      puVar13 = *(uint **)puVar13;
    }
    while( true ) {
      puVar12 = (uint *)(lVar11 + (uVar7 & 0xffff) * 0x18);
      uVar7 = (ulong)*puVar12;
      uVar3 = *puVar12 >> 0x1c;
      if (uVar3 != 8) break;
LAB_00c21148:
      if (((uint)(uVar7 >> 0x10) & 0xff) == 1) {
        *param_5 = *param_5 | puVar12[1];
        uVar7 = (ulong)*puVar12;
      }
    }
  } while( true );
}

