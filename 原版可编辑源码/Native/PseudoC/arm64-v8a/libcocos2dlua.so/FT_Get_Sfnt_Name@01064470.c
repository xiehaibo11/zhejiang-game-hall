
undefined8 FT_Get_Sfnt_Name(long param_1,uint param_2,undefined2 *param_3)

{
  long *plVar1;
  undefined2 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  void *__s;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  
                    /* try { // try from 01064498 to 011644a3 has its CatchHandler @ 010645e4 */
  if (param_1 == 0) {
    return 6;
  }
  if (param_3 == (undefined2 *)0x0) {
    return 6;
  }
  if (((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) || (*(ushort *)(param_1 + 0x230) <= param_2)) {
    return 6;
  }
                    /* try { // try from 010644b4 to 011644db has its CatchHandler @ 01064624 */
  lVar8 = *(long *)(param_1 + 0x248);
  puVar2 = (undefined2 *)(lVar8 + (ulong)param_2 * 0x20);
  puVar9 = puVar2 + 4;
  uVar7 = (ulong)*puVar9;
  plVar1 = (long *)(puVar2 + 0xc);
  if ((uVar7 == 0) || (*plVar1 != 0)) goto LAB_010645e8;
  lVar3 = *(long *)(param_1 + 0xb8);
  plVar4 = *(long **)(param_1 + 0xc0);
                    /* try { // try from 010644e4 to 011644eb has its CatchHandler @ 010645f0 */
  __s = (void *)(**(code **)(lVar3 + 8))(lVar3,uVar7);
                    /* try { // try from 010644f0 to 01164507 has its CatchHandler @ 01064648 */
  if (__s == (void *)0x0) {
                    /* try { // try from 01064554 to 0116455f has its CatchHandler @ 0106463c */
    *plVar1 = 0;
  }
  else {
    memset(__s,0,uVar7);
    memset(__s,0,uVar7);
    *plVar1 = (long)__s;
    uVar7 = *(ulong *)(lVar8 + (ulong)param_2 * 0x20 + 0x10);
    if ((code *)plVar4[5] == (code *)0x0) {
      uVar6 = plVar4[1];
                    /* try { // try from 01064560 to 011646ab has its CatchHandler @ 010641e0 */
      if (uVar7 <= uVar6) goto LAB_01064568;
    }
    else {
      lVar8 = (*(code *)plVar4[5])(plVar4,uVar7,0,0);
      if (lVar8 == 0) {
        __s = (void *)*plVar1;
        uVar6 = plVar4[1];
LAB_01064568:
        uVar5 = uVar6 - uVar7;
        plVar4[2] = uVar7;
        if (uVar7 <= uVar6 && uVar5 != 0) {
          uVar6 = (ulong)*puVar9;
          if ((code *)plVar4[5] == (code *)0x0) {
            __n = uVar6;
            if (uVar5 <= uVar6) {
              __n = uVar5;
            }
            memcpy(__s,(void *)(*plVar4 + uVar7),__n);
          }
          else {
            __n = (*(code *)plVar4[5])(plVar4,uVar7,__s,uVar6);
          }
          plVar4[2] = __n + uVar7;
          if (uVar6 <= __n) {
                    /* catch() { ... } // from try @ 01064310 with catch @ 01064634
                       catch() { ... } // from try @ 010643e0 with catch @ 01064634 */
            uVar7 = (ulong)*puVar9;
                    /* catch() { ... } // from try @ 010642e4 with catch @ 01064638 */
            goto LAB_010645e8;
          }
        }
      }
    }
    if (*plVar1 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
  }
  uVar7 = 0;
  *plVar1 = 0;
                    /* catch() { ... } // from try @ 01064498 with catch @ 010645e4 */
  *puVar9 = 0;
LAB_010645e8:
                    /* catch() { ... } // from try @ 01064450 with catch @ 010645e8 */
                    /* catch() { ... } // from try @ 010643fc with catch @ 010645ec */
                    /* catch() { ... } // from try @ 010644e4 with catch @ 010645f0 */
  *param_3 = *puVar2;
                    /* catch() { ... } // from try @ 0106437c with catch @ 010645f4 */
                    /* catch() { ... } // from try @ 01064360 with catch @ 010645f8 */
  param_3[1] = puVar2[1];
                    /* catch() { ... } // from try @ 0106433c with catch @ 01064600 */
  param_3[2] = puVar2[2];
                    /* catch() { ... } // from try @ 010642d4 with catch @ 01064604 */
  param_3[3] = puVar2[3];
                    /* catch() { ... } // from try @ 01064260 with catch @ 0106460c */
  lVar8 = *plVar1;
  *(int *)(param_3 + 8) = (int)uVar7;
                    /* catch() { ... } // from try @ 01064250 with catch @ 01064614 */
  *(long *)(param_3 + 4) = lVar8;
                    /* catch() { ... } // from try @ 010644b4 with catch @ 01064624 */
  return 0;
}

