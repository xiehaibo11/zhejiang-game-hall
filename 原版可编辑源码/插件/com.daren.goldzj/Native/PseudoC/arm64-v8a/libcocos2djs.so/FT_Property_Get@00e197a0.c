
undefined8 FT_Property_Get(long param_1,char *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    uVar3 = 0x21;
  }
  else {
    uVar3 = 6;
    if (((param_2 != (char *)0x0) && (param_3 != 0)) && (param_4 != 0)) {
      puVar6 = (undefined8 *)(param_1 + 0x18);
      puVar1 = puVar6 + *(uint *)(param_1 + 0x14);
      if (*(uint *)(param_1 + 0x14) != 0) {
        do {
          iVar2 = strcmp(*(char **)(*(long *)*puVar6 + 0x10),param_2);
          if (iVar2 == 0) break;
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar1);
      }
      if (puVar6 == puVar1) {
        uVar3 = 0xb;
      }
      else {
        pcVar5 = *(code **)(*(long *)*puVar6 + 0x40);
        if (((pcVar5 != (code *)0x0) &&
            (lVar4 = (*pcVar5)((long *)*puVar6,"properties"), lVar4 != 0)) &&
           (*(code **)(lVar4 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e19858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(lVar4 + 8))(*puVar6,param_3,param_4);
          return uVar3;
        }
        uVar3 = 7;
      }
    }
  }
  return uVar3;
}

