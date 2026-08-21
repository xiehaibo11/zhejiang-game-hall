
void FUN_0107b060(long param_1,long *param_2)

{
  long *plVar1;
  void *__src;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  size_t __n;
  void *__dest;
  long lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long lVar8;
  int local_64;
  
                    /* catch() { ... } // from try @ 0107b02c with catch @ 0107b068 */
  lVar5 = param_2[4];
  puVar7 = *(undefined8 **)(param_1 + 0x308);
  (*(code *)param_2[7])(param_2);
  if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == '[')) {
    (*(code *)param_2[8])(param_2);
    (*(code *)param_2[7])(param_2);
    if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == ']')) {
      return;
    }
LAB_0107b344:
    local_64 = 3;
  }
  else {
    uVar2 = (*(code *)param_2[9])(param_2);
    (*(code *)param_2[8])(param_2);
    if ((int)param_2[3] != 0) {
      return;
    }
    plVar1 = param_2 + 0x4b;
    (*(code *)param_2[7])(param_2);
    if ((int)param_2[0x4a] != 0) goto LAB_0107b130;
    local_64 = (**(code **)*puVar7)(plVar1,uVar2,lVar5);
    while (local_64 == 0) {
LAB_0107b130:
      do {
                    /* try { // try from 0107b140 to 0117b1a3 has its CatchHandler @ 0107b140
                       catch(type#1 @ 00000000) { ... } // from try @ 0107b140 with catch @ 0107b140
                       catch(type#1 @ 00000000) { ... } // from try @ 0107b27c with catch @ 0107b140
                        */
        if (((char *)param_2[2] <= (char *)*param_2 + 4) ||
           (iVar3 = strncmp((char *)*param_2,"dup",3), iVar3 != 0)) {
          if ((int)param_2[0x4a] != 0) {
            return;
          }
          *(undefined4 *)(param_2 + 0x4a) = uVar2;
          return;
        }
        (*(code *)param_2[8])(param_2);
        uVar4 = (*(code *)param_2[9])(param_2);
        pbVar6 = (byte *)param_2[2];
        lVar8 = *(long *)(*(long *)(param_1 + 0xf0) + 0x60);
        (*(code *)param_2[7])(param_2);
                    /* try { // try from 0107b1a4 to 0117b1cf has its CatchHandler @ 0107b3ac */
        if ((pbVar6 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_0107b340:
          if (lVar8 != 0) {
            return;
          }
          goto LAB_0107b344;
        }
        __n = (*(code *)param_2[9])(param_2);
        (*(code *)param_2[8])(param_2);
        if ((long)__n < 0) goto LAB_0107b340;
        __src = (void *)(*param_2 + 1);
        if ((long)pbVar6 - (long)__src <= (long)__n) goto LAB_0107b340;
        *param_2 = *param_2 + __n + 1;
                    /* try { // try from 0107b1ec to 0117b1f3 has its CatchHandler @ 0107b3f8 */
        if ((int)param_2[3] != 0) {
          return;
        }
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) {
          return;
        }
        (*(code *)param_2[7])(param_2);
        if (((char *)*param_2 + 4 < (char *)param_2[2]) &&
           (iVar3 = strncmp((char *)*param_2,"put",3), iVar3 == 0)) {
          (*(code *)param_2[8])(param_2);
                    /* try { // try from 0107b244 to 0117b247 has its CatchHandler @ 0107b3a8 */
          (*(code *)param_2[7])(param_2);
        }
      } while ((int)param_2[0x4a] != 0);
      if (*(int *)(param_1 + 0x13c) < 0) {
        local_64 = (*(code *)param_2[0x55])(plVar1,uVar4,__src,__n);
        if (local_64 != 0) break;
        goto LAB_0107b130;
      }
      if ((long)__n < (long)*(int *)(param_1 + 0x13c)) {
        local_64 = 3;
        break;
      }
                    /* try { // try from 0107b26c to 0117b27b has its CatchHandler @ 0107b3bc */
      __dest = (void *)ft_mem_alloc(lVar5,__n,&local_64);
                    /* try { // try from 0107b27c to 0117b4db has its CatchHandler @ 0107b140 */
      if (local_64 != 0) break;
      memcpy(__dest,__src,__n);
      (*(code *)puVar7[4])(__dest,__n,0x10ea);
      local_64 = (*(code *)param_2[0x55])
                           (plVar1,uVar4,(long)__dest + (long)*(int *)(param_1 + 0x13c),
                            __n - (long)*(int *)(param_1 + 0x13c));
      ft_mem_free(lVar5,__dest);
    }
  }
  *(int *)(param_2 + 3) = local_64;
  return;
}

