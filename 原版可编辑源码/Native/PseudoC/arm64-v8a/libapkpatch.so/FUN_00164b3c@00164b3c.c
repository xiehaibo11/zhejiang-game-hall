
undefined8
FUN_00164b3c(undefined8 param_1,ulong param_2,char *param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  char *local_68;
  
  local_68 = param_3 + 1;
  if (*param_3 == '\x01') {
    local_68 = param_3 + 4;
    cVar2 = param_3[2];
    cVar3 = param_3[3];
    pcVar1 = param_3 + (param_4 & 0xffffffff);
    FUN_00163640(param_1,&local_68,pcVar1,param_3[1],param_3);
    if (cVar2 != -1) {
      uVar6 = FUN_00163640(param_1,&local_68,pcVar1,cVar2,param_3);
      pcVar4 = local_68;
      if (uVar6 == 0) {
        return 0;
      }
      lVar7 = FUN_00164fe0(cVar3);
      lVar12 = 0;
      do {
        if (uVar6 < 2) {
          pcVar10 = pcVar4 + lVar12 * lVar7;
          break;
        }
        uVar11 = uVar6 >> 1;
        pcVar10 = pcVar4 + (uVar11 + lVar12) * lVar7;
        local_68 = pcVar10;
        uVar8 = FUN_00163640(param_1,&local_68,pcVar1,cVar3,param_3);
        uVar6 = uVar6 - uVar11;
        lVar5 = uVar11 + lVar12;
        if (param_2 <= uVar8) {
          uVar6 = uVar11;
          lVar5 = lVar12;
        }
        lVar12 = lVar5;
      } while (uVar8 != param_2);
      local_68 = pcVar10;
      FUN_00163640(param_1,&local_68,pcVar1,cVar3,param_3);
      uVar9 = FUN_00163640(param_1,&local_68,pcVar1,cVar3,param_3);
      lVar12 = FUN_001619b4(param_1,uVar9,param_5,param_6);
      if (((lVar12 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
         (param_2 < *(ulong *)(param_5 + 0x20))) {
        return 1;
      }
    }
  }
  else {
    fwrite("libunwind: Unsupported .eh_frame_hdr version\n",0x2d,1,(FILE *)0x16d358);
  }
  return 0;
}

