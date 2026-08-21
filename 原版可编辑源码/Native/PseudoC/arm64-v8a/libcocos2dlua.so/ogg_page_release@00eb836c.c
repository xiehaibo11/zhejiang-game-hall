
undefined8 ogg_page_release(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (param_1 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb83e8 with catch @ 00eb8378
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb8418 with catch @ 00eb8378
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb8448 with catch @ 00eb8378
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb8470 with catch @ 00eb8378
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb849c with catch @ 00eb8378
                        */
    plVar7 = (long *)*param_1;
    while (plVar4 = plVar7, plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      plVar7 = (long *)plVar4[3];
      plVar3 = *(long **)(lVar2 + 0x18);
      iVar1 = *(int *)(lVar2 + 0x10) + -1;
      *(int *)(lVar2 + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        *(long *)(lVar2 + 0x18) = *plVar3;
        *plVar3 = lVar2;
      }
                    /* try { // try from 00eb83e0 to 00fb83e7 has its CatchHandler @ 00eb84dc */
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
                    /* try { // try from 00eb83e8 to 00fb840b has its CatchHandler @ 00eb8378 */
      plVar4[3] = plVar3[1];
      plVar3[1] = (long)plVar4;
      if (*(int *)((long)plVar3 + 0x14) != 0) {
        puVar5 = (undefined8 *)*plVar3;
        if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
          do {
                    /* try { // try from 00eb8418 to 00fb843f has its CatchHandler @ 00eb8378 */
            puVar8 = (undefined8 *)puVar5[3];
            if ((void *)*puVar5 != (void *)0x0) {
              free((void *)*puVar5);
            }
                    /* try { // try from 00eb840c to 00fb8417 has its CatchHandler @ 00eb84dc */
            free(puVar5);
            puVar5 = puVar8;
          } while (puVar8 != (undefined8 *)0x0);
          *plVar3 = 0;
          goto joined_r0x00eb8430;
        }
        *plVar3 = 0;
        do {
          plVar6 = (long *)plVar4[3];
          free(plVar4);
                    /* try { // try from 00eb8440 to 00fb8447 has its CatchHandler @ 00eb84d8 */
          plVar4 = plVar6;
joined_r0x00eb8430:
        } while (plVar4 != (long *)0x0);
                    /* try { // try from 00eb8448 to 00fb8467 has its CatchHandler @ 00eb8378 */
        plVar3[1] = 0;
        if ((int)plVar3[2] == 0) {
          free(plVar3);
        }
      }
    }
    plVar7 = (long *)param_1[2];
    while (plVar4 = plVar7, plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
                    /* try { // try from 00eb8468 to 00fb846f has its CatchHandler @ 00eb84d8 */
      plVar7 = (long *)plVar4[3];
                    /* try { // try from 00eb8470 to 00fb848f has its CatchHandler @ 00eb8378 */
      plVar3 = *(long **)(lVar2 + 0x18);
      iVar1 = *(int *)(lVar2 + 0x10) + -1;
      *(int *)(lVar2 + 0x10) = iVar1;
      if (iVar1 == 0) {
                    /* try { // try from 00eb8490 to 00fb849b has its CatchHandler @ 00eb84d8 */
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
        *(long *)(lVar2 + 0x18) = *plVar3;
        *plVar3 = lVar2;
      }
                    /* try { // try from 00eb849c to 00fb84df has its CatchHandler @ 00eb8378 */
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
      plVar4[3] = plVar3[1];
      plVar3[1] = (long)plVar4;
      if (*(int *)((long)plVar3 + 0x14) != 0) {
        puVar5 = (undefined8 *)*plVar3;
        if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
          do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb83e0 with catch @ 00eb84dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb840c with catch @ 00eb84dc
                        */
            puVar8 = (undefined8 *)puVar5[3];
                    /* catch() { ... } // from try @ 00eb8510 with catch @ 00eb84e4 */
            if ((void *)*puVar5 != (void *)0x0) {
              free((void *)*puVar5);
            }
            free(puVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb8440 with catch @ 00eb84d8
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb8468 with catch @ 00eb84d8
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb8490 with catch @ 00eb84d8
                        */
            puVar5 = puVar8;
          } while (puVar8 != (undefined8 *)0x0);
          *plVar3 = 0;
          goto joined_r0x00eb84f4;
        }
        *plVar3 = 0;
        do {
          plVar6 = (long *)plVar4[3];
          free(plVar4);
                    /* try { // try from 00eb8508 to 00fb850f has its CatchHandler @ 00eb85b4 */
          plVar4 = plVar6;
joined_r0x00eb84f4:
        } while (plVar4 != (long *)0x0);
                    /* try { // try from 00eb8510 to 00fb85cf has its CatchHandler @ 00eb84e4 */
        plVar3[1] = 0;
        if ((int)plVar3[2] == 0) {
          free(plVar3);
        }
      }
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return 0;
}

