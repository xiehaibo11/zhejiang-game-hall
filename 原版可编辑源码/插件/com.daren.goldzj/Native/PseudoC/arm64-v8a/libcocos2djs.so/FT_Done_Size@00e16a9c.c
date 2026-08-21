
undefined8 FT_Done_Size(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == (long *)0x0) {
    return 0x24;
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return 0x23;
  }
  lVar7 = *(long *)(lVar8 + 0xb0);
  if (lVar7 == 0) {
    return 0x22;
  }
  lVar6 = *(long *)(lVar7 + 0x10);
  plVar4 = *(long **)(lVar8 + 200);
  if (plVar4 != (long *)0x0) {
    do {
      if ((long *)plVar4[2] == param_1) {
        lVar3 = *plVar4;
        plVar4 = (long *)plVar4[1];
        puVar1 = (undefined8 *)(lVar8 + 200);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 8);
        }
        *puVar1 = plVar4;
        plVar2 = (long *)(lVar8 + 0xd0);
        if (plVar4 != (long *)0x0) {
          plVar2 = plVar4;
        }
        *plVar2 = lVar3;
        (**(code **)(lVar6 + 0x10))(lVar6);
        if (*(long **)(lVar8 + 0xa0) == param_1) {
          *(undefined8 *)(lVar8 + 0xa0) = 0;
          if (*(long *)(lVar8 + 200) != 0) {
            *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(*(long *)(lVar8 + 200) + 0x10);
          }
        }
        if ((code *)param_1[2] != (code *)0x0) {
          (*(code *)param_1[2])(param_1);
        }
        pcVar5 = *(code **)(*(long *)(lVar7 + 0x18) + 0x78);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1);
        }
        if (param_1[10] != 0) {
          (**(code **)(lVar6 + 0x10))(lVar6);
        }
        param_1[10] = 0;
        (**(code **)(lVar6 + 0x10))(lVar6,param_1);
        return 0;
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
    return 0x24;
  }
  return 0x24;
}

