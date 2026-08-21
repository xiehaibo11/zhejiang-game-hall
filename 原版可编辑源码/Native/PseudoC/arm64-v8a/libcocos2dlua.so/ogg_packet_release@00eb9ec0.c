
undefined8 ogg_packet_release(long *param_1)

{
  int iVar1;
  long lVar2;
  long *__ptr;
  long *__ptr_00;
  undefined8 *__ptr_01;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
                    /* try { // try from 00eb9ec0 to 00fb9edf has its CatchHandler @ 00eb9dc8 */
  if (param_1 != (long *)0x0) {
    plVar4 = (long *)*param_1;
                    /* try { // try from 00eb9ee0 to 00fb9eeb has its CatchHandler @ 00eb9f28 */
    while (__ptr_00 = plVar4, __ptr_00 != (long *)0x0) {
                    /* try { // try from 00eb9eec to 00fb9f2f has its CatchHandler @ 00eb9dc8 */
      lVar2 = *__ptr_00;
      plVar4 = (long *)__ptr_00[3];
      __ptr = *(long **)(lVar2 + 0x18);
      iVar1 = *(int *)(lVar2 + 0x10) + -1;
      *(int *)(lVar2 + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(int *)(__ptr + 2) = (int)__ptr[2] + -1;
        *(long *)(lVar2 + 0x18) = *__ptr;
        *__ptr = lVar2;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb9e90 with catch @ 00eb9f28
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb9eb8 with catch @ 00eb9f28
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb9ee0 with catch @ 00eb9f28
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb9e30 with catch @ 00eb9f2c
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb9e5c with catch @ 00eb9f2c
                        */
      *(int *)(__ptr + 2) = (int)__ptr[2] + -1;
      __ptr_00[3] = __ptr[1];
      __ptr[1] = (long)__ptr_00;
      if (*(int *)((long)__ptr + 0x14) != 0) {
        __ptr_01 = (undefined8 *)*__ptr;
        if ((undefined8 *)*__ptr != (undefined8 *)0x0) {
          do {
            puVar5 = (undefined8 *)__ptr_01[3];
            if ((void *)*__ptr_01 != (void *)0x0) {
              free((void *)*__ptr_01);
            }
            free(__ptr_01);
            __ptr_01 = puVar5;
          } while (puVar5 != (undefined8 *)0x0);
          *__ptr = 0;
          goto joined_r0x00eb9f7c;
        }
        *__ptr = 0;
        do {
          plVar3 = (long *)__ptr_00[3];
          free(__ptr_00);
          __ptr_00 = plVar3;
joined_r0x00eb9f7c:
        } while (__ptr_00 != (long *)0x0);
        __ptr[1] = 0;
        if ((int)__ptr[2] == 0) {
          free(__ptr);
        }
      }
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return 0;
}

