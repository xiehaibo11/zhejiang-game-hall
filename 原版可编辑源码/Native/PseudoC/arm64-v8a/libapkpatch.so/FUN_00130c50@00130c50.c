
int FUN_00130c50(long param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  
  if (param_3 == (char *)0x0) {
    iVar1 = -6;
  }
  else {
    iVar1 = -6;
    if ((*param_3 == '1') && (param_4 == 0x70)) {
      if (param_1 == 0) {
        iVar1 = -2;
      }
      else {
        pcVar3 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar3 == (code *)0x0) {
          pcVar3 = FUN_001327f0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(code **)(param_1 + 0x40) = FUN_001327f0;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(code **)(param_1 + 0x48) = FUN_001327f8;
        }
        plVar2 = (long *)(*pcVar3)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
        if (plVar2 == (long *)0x0) {
          iVar1 = -4;
        }
        else {
          *(long **)(param_1 + 0x38) = plVar2;
          *plVar2 = param_1;
          plVar2[9] = 0;
          *(undefined4 *)(plVar2 + 1) = 0x3f34;
          iVar1 = FUN_00130ba8(param_1,param_2);
          if (iVar1 != 0) {
            (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2);
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
        }
      }
    }
  }
  return iVar1;
}

