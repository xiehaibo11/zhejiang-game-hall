
ulong FUN_00c2e88c(long param_1,FILE *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  double *pdVar10;
  uint uVar11;
  ulong *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  double local_8;
  
  iVar3 = (int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) - param_3;
  clearerr(param_2);
  if (iVar3 == 0) {
    iVar14 = param_3 + 1;
    uVar2 = FUN_00c2e4b0(param_1,param_2);
LAB_00c2e8ec:
    iVar3 = ferror(param_2);
    if (iVar3 != 0) {
LAB_00c2eb9c:
      uVar9 = luaL_fileresult(param_1,0,0);
      return uVar9;
    }
    if (uVar2 != 0) goto LAB_00c2e8fc;
  }
  else {
    uVar9 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
    luaL_checkstack(param_1,iVar3 + 0x14,"too many arguments");
    uVar2 = 1;
    iVar4 = param_3 + 1;
LAB_00c2e9dc:
    do {
      iVar14 = iVar4;
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + uVar9);
      uVar11 = (uint)((long)uVar6 >> 0x2f);
      if (uVar11 == 0xfffffffb) {
        uVar6 = uVar6 & 0x7fffffffffff;
        if (*(char *)(uVar6 + 0x18) != '*') {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb458(param_1,iVar14,0x48c);
        }
        bVar1 = *(byte *)(uVar6 + 0x19);
        if (bVar1 == 0x6e) {
          iVar4 = fscanf(param_2,"%lf",&local_8);
          if (iVar4 == 1) {
            if ((local_8 == (double)(int)local_8) && (local_8 != -0.0)) {
              piVar13 = *(int **)(param_1 + 0x28);
              uVar2 = 1;
              *(int **)(param_1 + 0x28) = piVar13 + 2;
              *piVar13 = (int)local_8;
              piVar13[1] = -0x70000;
            }
            else {
              pdVar10 = *(double **)(param_1 + 0x28);
              uVar2 = 1;
              *(double **)(param_1 + 0x28) = pdVar10 + 1;
              *pdVar10 = local_8;
            }
          }
          else {
            puVar8 = *(undefined8 **)(param_1 + 0x28);
            uVar2 = 0;
            *(undefined8 **)(param_1 + 0x28) = puVar8 + 1;
            *puVar8 = 0xffffffffffffffff;
          }
        }
        else {
          if ((bVar1 & 0xdf) != 0x4c) {
            if (bVar1 != 0x61) {
                    /* WARNING: Subroutine does not return */
              FUN_00bfb458(param_1,iVar14,0x4af);
            }
            uVar11 = 0x400;
            uVar15 = 0;
            while( true ) {
              uVar16 = uVar11;
              lVar7 = FUN_00c1a5a8(param_1,uVar16);
              sVar5 = fread((void *)(lVar7 + (ulong)uVar15),1,(ulong)(uVar16 - uVar15),param_2);
              if (uVar16 != uVar15 + (int)sVar5) break;
              uVar11 = uVar16 << 1;
              uVar15 = uVar16;
            }
            puVar12 = *(ulong **)(param_1 + 0x28);
            *(ulong **)(param_1 + 0x28) = puVar12 + 1;
            uVar6 = FUN_00bfba1c(param_1,lVar7);
            *puVar12 = uVar6 | 0xfffd800000000000;
            if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <=
                *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)) {
              FUN_00c19f80(param_1);
            }
            if (iVar14 == iVar3 + param_3) goto LAB_00c2e8ec;
            uVar9 = uVar9 + 8;
            iVar4 = iVar14 + 1;
            goto LAB_00c2e9dc;
          }
          uVar2 = FUN_00c2e4b0(param_1,param_2,bVar1 == 0x6c);
        }
      }
      else {
        if (0xfffffff2 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb458(param_1,iVar14,0x48c);
        }
        uVar2 = FUN_00c29cf0();
        if (uVar2 == 0) {
          iVar4 = getc(param_2);
          ungetc(iVar4,param_2);
          puVar12 = *(ulong **)(param_1 + 0x28);
          *(ulong **)(param_1 + 0x28) = puVar12 + 1;
          uVar2 = (uint)(iVar4 != -1);
          *puVar12 = *(long *)(param_1 + 0x10) + 0xa8U | 0xfffd800000000000;
        }
        else {
          __ptr = (void *)FUN_00c1a5a8(param_1,uVar2);
          sVar5 = fread(__ptr,1,(ulong)uVar2,param_2);
          puVar12 = *(ulong **)(param_1 + 0x28);
          *(ulong **)(param_1 + 0x28) = puVar12 + 1;
          uVar6 = FUN_00bfba1c(param_1,__ptr,sVar5 & 0xffffffff);
          *puVar12 = uVar6 | 0xfffd800000000000;
          if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <=
              *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)) {
            FUN_00c19f80(param_1);
          }
          uVar2 = (uint)((int)sVar5 != 0);
        }
      }
      if (iVar14 == iVar3 + param_3) goto LAB_00c2e8ec;
      uVar9 = uVar9 + 8;
      iVar4 = iVar14 + 1;
    } while (uVar2 != 0);
    iVar3 = ferror(param_2);
    if (iVar3 != 0) goto LAB_00c2eb9c;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
LAB_00c2e8fc:
  return (ulong)(iVar14 - param_3);
}

