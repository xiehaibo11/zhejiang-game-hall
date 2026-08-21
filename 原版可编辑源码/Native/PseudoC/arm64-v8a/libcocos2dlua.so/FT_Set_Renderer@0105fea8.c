
undefined8 FT_Set_Renderer(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  code *pcVar6;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if ((param_2 != 0) && ((param_3 == 0 || (param_4 != (undefined8 *)0x0)))) {
    for (plVar2 = *(long **)(param_1 + 0x118); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
                    /* try { // try from 0105fedc to 0115feeb has its CatchHandler @ 0105fefc */
      if (plVar2[2] == param_2) {
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          plVar5 = (long *)plVar2[1];
          *(long **)(lVar3 + 8) = plVar5;
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)(param_1 + 0x120);
          }
          *plVar5 = lVar3;
          *plVar2 = 0;
          puVar4 = *(undefined8 **)(param_1 + 0x118);
          plVar2[1] = (long)puVar4;
                    /* try { // try from 0105ff38 to 0115ff47 has its CatchHandler @ 0105ff60 */
          *puVar4 = plVar2;
          *(long **)(param_1 + 0x118) = plVar2;
        }
        if (*(int *)(param_2 + 0x20) == 0x6f75746c) {
          *(long *)(param_1 + 0x128) = param_2;
        }
        if (param_3 == 0) {
          return 0;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105ff38 with catch @ 0105ff60
                        */
        pcVar6 = *(code **)(*(long *)(param_2 + 0x18) + 0x68);
        do {
          uVar1 = (*pcVar6)(param_2,*param_4,param_4[1]);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
                    /* catch() { ... } // from try @ 0105ffe8 with catch @ 0105ff74 */
          param_3 = param_3 + -1;
          param_4 = param_4 + 2;
        } while (param_3 != 0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105fedc with catch @ 0105fefc
                        */
        return uVar1;
      }
    }
  }
  return 6;
}

