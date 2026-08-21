
undefined8 FT_Get_Advance(long param_1,uint param_2,uint param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059904 with catch @ 01059924
                        */
  if (param_1 == 0) {
    uVar4 = 0x23;
  }
  else if (param_4 == (long *)0x0) {
    uVar4 = 6;
  }
  else if (param_2 < *(uint *)(param_1 + 0x20)) {
    pcVar5 = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xa8);
                    /* try { // try from 01059960 to 0115996f has its CatchHandler @ 01059988 */
    if ((pcVar5 == (code *)0x0) || (((param_3 & 3) == 0 && ((param_3 & 0xf0000) != 0x10000)))) {
LAB_0105998c:
      uVar4 = FT_Get_Advances(param_1,param_2,1,param_3,param_4);
      return uVar4;
    }
    uVar4 = (*pcVar5)(param_1,param_2,1,param_3,param_4);
    if ((uint)uVar4 == 0) {
      if ((param_3 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0xa0);
        if (lVar7 == 0) {
          uVar4 = 0x24;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010599c4 with catch @ 010599ec
                        */
          plVar3 = (long *)(lVar7 + 0x20);
          if ((param_3 & 0x10) != 0) {
            plVar3 = (long *)(lVar7 + 0x28);
          }
          lVar8 = *plVar3;
          lVar6 = *param_4;
          uVar4 = 0;
                    /* catch() { ... } // from try @ 01059a38 with catch @ 01059a00 */
          lVar7 = -lVar8;
          if (-1 < lVar8) {
            lVar7 = lVar8;
          }
          lVar2 = -lVar6;
          if (-1 < lVar6) {
            lVar2 = lVar6;
          }
          lVar1 = lVar2 * lVar7 + 0x20;
          lVar7 = lVar2 * lVar7 + 0x5f;
          if (-1 < lVar1) {
            lVar7 = lVar1;
          }
          lVar7 = lVar7 >> 6;
                    /* try { // try from 01059a30 to 01159a37 has its CatchHandler @ 01059aec */
          if (lVar8 < 0) {
            lVar8 = lVar7;
            if (-1 < lVar6) {
              lVar8 = -lVar7;
            }
          }
          else {
            lVar8 = -lVar7;
            if (-1 < lVar6) {
              lVar8 = lVar7;
            }
          }
          *param_4 = lVar8;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059960 with catch @ 01059988
                        */
      if (((uint)uVar4 & 0xff) == 7) goto LAB_0105998c;
    }
  }
  else {
    uVar4 = 0x10;
  }
                    /* try { // try from 010599c4 to 011599d3 has its CatchHandler @ 010599ec */
  return uVar4;
}

