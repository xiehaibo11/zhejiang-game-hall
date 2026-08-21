
undefined8 FUN_00ddd878(long param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  piVar2 = *(int **)(param_1 + 0x350);
  lVar6 = 0;
  if ((long)piVar2[2] != 0) {
    lVar6 = param_3 / (long)piVar2[2];
  }
  puVar7 = param_2;
  if (*piVar2 != 2) {
    puVar7 = *(undefined4 **)(piVar2 + 4);
    (**(code **)(piVar2 + 8))(piVar2,param_2,lVar6);
  }
  lVar5 = *(long *)(param_1 + 0x370);
  puVar4 = *(undefined1 **)(param_1 + 0x388);
  lVar3 = lVar5 - *(long *)(param_1 + 0x390);
  if (lVar6 != 0) {
    do {
      if (lVar3 < 3) {
        *(undefined1 **)(param_1 + 0x388) = puVar4;
        *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x370) - lVar3;
        iVar1 = TIFFFlushData1(param_1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        puVar4 = *(undefined1 **)(param_1 + 0x388);
        lVar3 = *(long *)(param_1 + 0x370) - *(long *)(param_1 + 0x390);
      }
      lVar6 = lVar6 + -1;
      lVar3 = lVar3 + -3;
      *puVar4 = (char)*(undefined2 *)((long)puVar7 + 2);
      puVar4[1] = (char)((uint)*puVar7 >> 8);
      puVar4[2] = (char)*puVar7;
      puVar4 = puVar4 + 3;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
    lVar5 = *(long *)(param_1 + 0x370);
  }
  *(undefined1 **)(param_1 + 0x388) = puVar4;
  *(long *)(param_1 + 0x390) = lVar5 - lVar3;
  return 1;
}

