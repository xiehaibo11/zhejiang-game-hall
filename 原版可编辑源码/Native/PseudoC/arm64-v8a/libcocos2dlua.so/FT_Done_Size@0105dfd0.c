
undefined8 FT_Done_Size(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    if (lVar7 == 0) {
      return 0x23;
    }
                    /* catch() { ... } // from try @ 0105df5c with catch @ 0105dff0 */
    lVar6 = *(long *)(lVar7 + 0xb0);
    if (lVar6 == 0) {
      return 0x22;
    }
    lVar5 = *(long *)(lVar6 + 0x10);
    for (plVar3 = *(long **)(lVar7 + 200); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      if ((long *)plVar3[2] == param_1) {
        lVar2 = *plVar3;
        plVar3 = (long *)plVar3[1];
        puVar1 = (undefined8 *)(lVar2 + 8);
        if (lVar2 == 0) {
          puVar1 = (undefined8 *)(lVar7 + 200);
        }
        *puVar1 = plVar3;
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)(lVar7 + 0xd0);
        }
        *plVar3 = lVar2;
        (**(code **)(lVar5 + 0x10))(lVar5);
        if (*(long **)(lVar7 + 0xa0) == param_1) {
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          if (*(long *)(lVar7 + 200) != 0) {
            *(undefined8 *)(lVar7 + 0xa0) = *(undefined8 *)(*(long *)(lVar7 + 200) + 0x10);
          }
        }
        if ((code *)param_1[2] != (code *)0x0) {
          (*(code *)param_1[2])(param_1);
        }
        pcVar4 = *(code **)(*(long *)(lVar6 + 0x18) + 0x78);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(param_1);
        }
        if (param_1[10] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        param_1[10] = 0;
        (**(code **)(lVar5 + 0x10))(lVar5,param_1);
        return 0;
      }
    }
  }
  return 0x24;
}

