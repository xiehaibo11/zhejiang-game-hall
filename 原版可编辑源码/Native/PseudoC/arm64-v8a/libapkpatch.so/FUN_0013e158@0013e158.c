
/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_0013e158(long *param_1,long param_2,int param_3,int param_4,long *param_5,int *param_6)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  bool bVar9;
  
  bVar9 = false;
  plVar8 = param_1 + 3;
  *plVar8 = param_2;
  *(int *)(param_1 + 4) = param_3 - (int)param_2;
  bVar3 = false;
LAB_0013e1b0:
  while( true ) {
    bVar2 = bVar3;
    uVar6 = param_1[2];
    lVar1 = uVar6 - *(uint *)(param_1 + 7);
    if (!bVar2 && (uVar6 < *(uint *)(param_1 + 7) || lVar1 == 0)) break;
    if (lVar1 != 0) {
      iVar4 = (**(code **)(*param_1 + 0x18))(*param_1,*param_5,param_1[1],param_1[1] + lVar1);
      if (iVar4 == 0) {
        *param_6 = 1;
        goto LAB_0013e264;
      }
      *param_5 = *param_5 + lVar1;
      uVar6 = param_1[2];
    }
    *(int *)(param_1 + 7) = (int)uVar6;
    param_1[6] = param_1[1];
    bVar3 = false;
    if (bVar2) {
      return 1;
    }
  }
  bVar3 = bVar2;
  if ((int)param_1[4] == 0) {
    if (!bVar9) {
      bVar9 = true;
      if (param_4 == 0) {
        return 1;
      }
      goto LAB_0013e1b0;
    }
    uVar5 = FUN_0012e9fc(plVar8,4);
    bVar9 = true;
    pcVar7 = "deflate() Z_FINISH";
    bVar3 = uVar5 == 1;
    if (uVar5 < 2) goto LAB_0013e1b0;
  }
  else {
    iVar4 = FUN_0012e9fc(plVar8,0);
    pcVar7 = "deflate()";
    if (iVar4 == 0) goto LAB_0013e1b0;
  }
  if (*param_6 == 0) {
    printf("  (NOTICE: _zlib_compress_part() is canceled, %s ERROR!)\n",pcVar7);
    return 0;
  }
LAB_0013e264:
  puts("  (NOTICE: _zlib_compress_part() is canceled, warning.)");
  return 0;
}

