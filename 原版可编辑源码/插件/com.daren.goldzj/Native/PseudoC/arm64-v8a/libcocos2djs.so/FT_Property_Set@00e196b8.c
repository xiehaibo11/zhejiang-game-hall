
undefined8 FT_Property_Set(long param_1,char *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  if (param_1 == 0) {
    uVar2 = 0x21;
  }
  else {
    uVar2 = 6;
    if (((param_2 != (char *)0x0) && (param_3 != 0)) && (param_4 != 0)) {
      puVar5 = (undefined8 *)(param_1 + 0x18);
      puVar3 = puVar5 + *(uint *)(param_1 + 0x14);
      if (*(uint *)(param_1 + 0x14) != 0) {
        do {
          iVar1 = strcmp(*(char **)(*(long *)*puVar5 + 0x10),param_2);
          if (iVar1 == 0) break;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar3);
      }
      if (puVar5 == puVar3) {
        uVar2 = 0xb;
      }
      else {
        pcVar4 = *(code **)(*(long *)*puVar5 + 0x40);
        if (((pcVar4 != (code *)0x0) &&
            (puVar3 = (undefined8 *)(*pcVar4)((long *)*puVar5,"properties"),
            puVar3 != (undefined8 *)0x0)) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e19774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)*puVar3)(*puVar5,param_3,param_4,0);
          return uVar2;
        }
        uVar2 = 7;
      }
    }
  }
  return uVar2;
}

