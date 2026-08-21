
undefined8 FT_Match_Size(long param_1,int *param_2,char param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 0x23;
  }
  if (*param_2 != 0) {
    return 7;
  }
                    /* try { // try from 0105e108 to 0115e143 has its CatchHandler @ 0105e108
                       catch(type#1 @ 00000000) { ... } // from try @ 0105e108 with catch @ 0105e108
                       catch(type#1 @ 00000000) { ... } // from try @ 0105e188 with catch @ 0105e108
                        */
  lVar4 = *(long *)(param_2 + 2);
  lVar5 = lVar4;
  if (param_2[6] != 0) {
    lVar5 = (long)(lVar4 * (ulong)(uint)param_2[6] + 0x24) / 0x48;
  }
  lVar3 = *(long *)(param_2 + 4);
                    /* try { // try from 0105e144 to 0115e14f has its CatchHandler @ 0105e15c */
  lVar6 = lVar3;
  if (param_2[7] != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105e144 with catch @ 0105e15c
                        */
    lVar6 = (long)(lVar3 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
                    /* try { // try from 0105e178 to 0115e187 has its CatchHandler @ 0105e198 */
  iVar2 = *(int *)(param_1 + 0x38);
  lVar1 = lVar5;
  if (lVar3 != 0) {
    lVar1 = lVar6;
  }
  if (lVar4 != 0) {
    lVar6 = lVar1;
    lVar1 = lVar5;
  }
                    /* try { // try from 0105e188 to 0115e1ab has its CatchHandler @ 0105e108 */
  if (0 < iVar2) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105e178 with catch @ 0105e198
                        */
    lVar5 = 0;
    if (param_3 == '\0') {
                    /* try { // try from 0105e1dc to 0115e1df has its CatchHandler @ 0105e218 */
      plVar7 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
                    /* try { // try from 0105e1f8 to 0115e207 has its CatchHandler @ 0105e22c */
      while ((0x3f < (*plVar7 + 0x20U ^ lVar6 + 0x20U) ||
             (0x3f < (plVar7[-1] + 0x20U ^ lVar1 + 0x20U)))) {
        lVar5 = lVar5 + 1;
        plVar7 = plVar7 + 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105e1dc with catch @ 0105e218
                        */
        if (iVar2 <= lVar5) {
          return 0x17;
        }
      }
LAB_0105e220:
      if (param_4 != (long *)0x0) {
        *param_4 = lVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105e1f8 with catch @ 0105e22c
                        */
        return 0;
      }
      return 0;
    }
    plVar7 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
    do {
      if ((*plVar7 + 0x20U ^ lVar6 + 0x20U) < 0x40) goto LAB_0105e220;
      lVar5 = lVar5 + 1;
      plVar7 = plVar7 + 4;
    } while (lVar5 < iVar2);
  }
  return 0x17;
}

