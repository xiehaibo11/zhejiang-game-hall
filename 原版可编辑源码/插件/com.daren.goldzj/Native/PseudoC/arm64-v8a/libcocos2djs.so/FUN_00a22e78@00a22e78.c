
void FUN_00a22e78(long param_1,uint param_2,void *param_3,size_t param_4,long param_5)

{
  long lVar1;
  size_t __size;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  code *pcVar5;
  char acStack_e8 [160];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((param_5 == 0) || (*(char *)(param_1 + 0x610) == '\0')) || (*(long *)(param_5 + 200) == 0))
  goto switchD_00a22eec_default;
  pcVar3 = "Data";
  pcVar4 = "from";
  switch(param_2) {
  case 1:
    pcVar3 = "Header";
    pcVar4 = "from";
    break;
  case 2:
    pcVar3 = "Header";
  case 4:
    pcVar4 = "to";
    break;
  case 3:
    break;
  default:
    goto switchD_00a22eec_default;
  }
  FUN_00a0e7c4(acStack_e8,0xa0,"[%s %s %s]",pcVar3,pcVar4);
  __size = strlen(acStack_e8);
  if (*(code **)(param_1 + 0x2e8) == (code *)0x0) {
    fwrite(&DAT_01891b7b,2,1,*(FILE **)(param_1 + 0x220));
    fwrite(acStack_e8,__size,1,*(FILE **)(param_1 + 0x220));
    pcVar5 = *(code **)(param_1 + 0x2e8);
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x2e8))
                      (param_1,0,acStack_e8,__size,*(undefined8 *)(param_1 + 0x228));
    if ((int)uVar2 != 0) goto LAB_00a22ff4;
switchD_00a22eec_default:
    pcVar5 = *(code **)(param_1 + 0x2e8);
  }
  if (pcVar5 == (code *)0x0) {
    if (param_2 < 3) {
      fwrite(&DAT_01891b7b + (ulong)param_2 + (ulong)param_2 * 2,2,1,*(FILE **)(param_1 + 0x220));
      fwrite(param_3,param_4,1,*(FILE **)(param_1 + 0x220));
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (*pcVar5)(param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x228));
  }
LAB_00a22ff4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

