
char * FUN_001619b4(undefined8 param_1,uint *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *local_48;
  
  puVar10 = param_2 + 1;
  uVar9 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar9 = *(ulong *)(param_2 + 1);
    puVar10 = param_2 + 3;
  }
  if (uVar9 == 0) {
    pcVar4 = "FDE has zero length";
  }
  else if (*puVar10 == 0) {
    pcVar4 = "FDE is really a CIE";
  }
  else {
    local_48 = puVar10;
    pcVar4 = (char *)FUN_00164d18(param_1,(long)puVar10 - (ulong)*puVar10,param_4);
    if (pcVar4 == (char *)0x0) {
      lVar1 = (long)puVar10 + uVar9;
      local_48 = puVar10 + 1;
      lVar5 = FUN_00163640(param_1,&local_48,lVar1,*(undefined1 *)(param_4 + 0x18),0);
      lVar6 = FUN_00163640(param_1,&local_48,lVar1,*(byte *)(param_4 + 0x18) & 0xf,0);
      cVar2 = *(char *)(param_4 + 0x31);
      param_3[5] = 0;
      puVar10 = local_48;
      if (cVar2 != '\0') {
        lVar7 = FUN_00163954(&local_48,lVar1);
        puVar3 = local_48;
        puVar10 = (uint *)((long)local_48 + lVar7);
        if ((*(byte *)(param_4 + 0x19) != 0xff) &&
           (lVar7 = FUN_00163640(param_1,&local_48,lVar1,*(byte *)(param_4 + 0x19) & 0xf,0),
           lVar7 != 0)) {
          local_48 = puVar3;
          uVar8 = FUN_00163640(param_1,&local_48,lVar1,*(undefined1 *)(param_4 + 0x19),0);
          param_3[5] = uVar8;
        }
      }
      pcVar4 = (char *)0x0;
      param_3[2] = puVar10;
      param_3[3] = lVar5;
      *param_3 = param_2;
      param_3[1] = lVar1 - (long)param_2;
      param_3[4] = lVar6 + lVar5;
    }
  }
  return pcVar4;
}

