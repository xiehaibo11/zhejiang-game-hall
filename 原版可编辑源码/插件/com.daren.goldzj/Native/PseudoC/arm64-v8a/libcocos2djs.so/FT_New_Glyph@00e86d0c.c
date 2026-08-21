
int FT_New_Glyph(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  int local_24;
  
  iVar4 = 6;
  if ((param_1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    if ((int)param_2 == 0x62697473) {
      puVar5 = &DAT_01c97fb0;
    }
    else if ((int)param_2 == 0x6f75746c) {
      puVar5 = &DAT_01c97ff0;
    }
    else {
      lVar1 = FUN_00e18ad8(param_1,param_2,0);
      if (lVar1 == 0) {
        return 0x12;
      }
      puVar5 = (undefined8 *)(lVar1 + 0x28);
    }
    uVar2 = *param_1;
    *param_3 = 0;
    plVar3 = (long *)FUN_00e1388c(uVar2,*puVar5,&local_24);
    iVar4 = local_24;
    if (local_24 == 0) {
      *plVar3 = (long)param_1;
      plVar3[1] = (long)puVar5;
      *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(puVar5 + 1);
      *param_3 = plVar3;
    }
  }
  return iVar4;
}

