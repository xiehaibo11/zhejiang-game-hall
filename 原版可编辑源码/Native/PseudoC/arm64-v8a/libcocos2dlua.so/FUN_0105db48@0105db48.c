
void FUN_0105db48(long param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xe0) != (code *)0x0) {
    (**(code **)(param_2 + 0xe0))(*(undefined8 *)(param_2 + 0xd8));
  }
  lVar6 = *(long *)(param_2 + 0x98);
  do {
    if (lVar6 == 0) {
      if (param_1 != 0) {
        lVar6 = *(long *)(param_2 + 200);
        while (lVar6 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105dc00 with catch @ 0105dc18
                        */
          lVar3 = *(long *)(lVar6 + 8);
          lVar5 = *(long *)(lVar6 + 0x10);
          if (*(code **)(lVar5 + 0x10) != (code *)0x0) {
            (**(code **)(lVar5 + 0x10))(lVar5);
          }
          pcVar2 = *(code **)(*(long *)(param_3 + 0x18) + 0x78);
                    /* try { // try from 0105dc34 to 0115dc43 has its CatchHandler @ 0105dc54 */
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(lVar5);
          }
                    /* try { // try from 0105dc44 to 0115dc67 has its CatchHandler @ 0105dbc4 */
          if (*(long *)(lVar5 + 0x50) != 0) {
            (**(code **)(param_1 + 0x10))(param_1);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105dc34 with catch @ 0105dc54
                        */
          *(undefined8 *)(lVar5 + 0x50) = 0;
          (**(code **)(param_1 + 0x10))(param_1,lVar5);
          (**(code **)(param_1 + 0x10))(param_1,lVar6);
          lVar6 = lVar3;
        }
        *(long *)(param_2 + 200) = 0;
        *(undefined8 *)(param_2 + 0xd0) = 0;
      }
      *(undefined8 *)(param_2 + 0xa0) = 0;
      if (*(code **)(param_2 + 0x60) != (code *)0x0) {
        (**(code **)(param_2 + 0x60))(param_2);
      }
                    /* try { // try from 0105dc98 to 0115dc9b has its CatchHandler @ 0105dcd4 */
      if (0 < *(int *)(param_2 + 0x48)) {
        lVar6 = 0;
        do {
          plVar1 = *(long **)(*(long *)(param_2 + 0x50) + lVar6 * 8);
                    /* try { // try from 0105dcb4 to 0115dcc3 has its CatchHandler @ 0105dce8 */
          lVar3 = *(long *)(*plVar1 + 0xb8);
          if (*(code **)(plVar1[2] + 0x10) != (code *)0x0) {
            (**(code **)(plVar1[2] + 0x10))(plVar1);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105dc98 with catch @ 0105dcd4
                        */
          (**(code **)(lVar3 + 0x10))(lVar3,plVar1);
          *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar6 * 8) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105dcb4 with catch @ 0105dce8
                        */
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_2 + 0x48));
      }
      if (*(long *)(param_2 + 0x50) != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
      }
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined4 *)(param_2 + 0x48) = 0;
      pcVar2 = *(code **)(lVar9 + 0x68);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_2);
      }
      lVar9 = *(long *)(param_2 + 0xc0);
      if (lVar9 != 0) {
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        lVar6 = *(long *)(lVar9 + 0x38);
        if (*(code **)(lVar9 + 0x30) != (code *)0x0) {
          (**(code **)(lVar9 + 0x30))(lVar9);
        }
        if (((uint)uVar8 >> 10 & 1) == 0) {
          (**(code **)(lVar6 + 0x10))(lVar6,lVar9);
        }
      }
                    /* catch() { ... } // from try @ 0105dd88 with catch @ 0105dd50 */
      *(undefined8 *)(param_2 + 0xc0) = 0;
      if (*(long *)(param_2 + 0xf0) != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
        *(undefined8 *)(param_2 + 0xf0) = 0;
      }
                    /* try { // try from 0105dd80 to 0115dd87 has its CatchHandler @ 0105de14 */
                    /* try { // try from 0105dd88 to 0115de2f has its CatchHandler @ 0105dd50 */
                    /* WARNING: Could not recover jumptable at 0x0105dd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x10))(param_1,param_2);
      return;
    }
    plVar1 = (long *)(*(long *)(lVar6 + 8) + 0x98);
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0xb0) + 0x10);
    lVar5 = 0;
    do {
      lVar4 = lVar3;
      if (lVar4 == lVar6) {
                    /* try { // try from 0105dbc4 to 0115dbff has its CatchHandler @ 0105dbc4
                       catch(type#1 @ 00000000) { ... } // from try @ 0105dbc4 with catch @ 0105dbc4
                       catch(type#1 @ 00000000) { ... } // from try @ 0105dc44 with catch @ 0105dbc4
                        */
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 0x10);
        }
        *plVar1 = *(long *)(lVar6 + 0x10);
        if (*(code **)(lVar6 + 0x28) != (code *)0x0) {
          (**(code **)(lVar6 + 0x28))(lVar6);
        }
        FUN_0105c1d8(lVar6);
        (**(code **)(lVar7 + 0x10))(lVar7,lVar6);
                    /* try { // try from 0105dc00 to 0115dc0b has its CatchHandler @ 0105dc18 */
        lVar6 = *(long *)(param_2 + 0x98);
        break;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 0x10) != 0);
  } while( true );
}

