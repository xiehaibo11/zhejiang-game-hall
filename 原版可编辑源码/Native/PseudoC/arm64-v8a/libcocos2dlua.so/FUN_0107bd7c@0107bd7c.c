
void FUN_0107bd7c(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int local_2b4;
  undefined1 local_2b0 [8];
  long alStack_2a8 [59];
  int local_cc;
  long local_c8 [12];
  int local_64;
  
  local_64 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  (*(code *)param_2[0xf])(param_2,local_c8,4,&local_cc);
  if (local_cc < 0) {
    local_64 = 0xa2;
  }
  else if ((local_cc == 0) || (4 < local_cc)) {
LAB_0107bf2c:
    local_64 = 3;
  }
  else {
    lVar5 = *param_2;
    lVar8 = param_2[2];
    local_64 = FUN_0107c1f0(param_1,0);
    if (local_64 == 0) {
      if (local_cc < 1) {
        local_64 = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x348);
        lVar9 = 0;
        do {
          lVar1 = local_c8[lVar9 * 3 + 1];
          *param_2 = local_c8[lVar9 * 3];
                    /* try { // try from 0107be40 to 0117be77 has its CatchHandler @ 0107be40
                       catch(type#1 @ 00000000) { ... } // from try @ 0107be40 with catch @ 0107be40
                       catch(type#1 @ 00000000) { ... } // from try @ 0107bf84 with catch @ 0107be40
                        */
          param_2[2] = lVar1;
          (*(code *)param_2[0xf])(param_2,local_2b0,0x14,&local_2b4);
          if (0x13 < local_2b4 - 1U) goto LAB_0107bf2c;
          lVar1 = ft_mem_realloc(uVar3,8,0,(long)local_2b4 << 1,0,&local_64);
                    /* try { // try from 0107be78 to 0117be8f has its CatchHandler @ 0107c1c8 */
          plVar11 = (long *)(lVar4 + lVar9 * 0x18 + 0xb0);
          *plVar11 = lVar1;
          if (local_64 != 0) goto LAB_0107bf34;
          lVar6 = lVar4 + lVar9 * 0x18;
          plVar7 = (long *)(lVar6 + 0xb8);
          *plVar7 = lVar1 + (long)local_2b4 * 8;
          *(char *)(lVar6 + 0xa8) = (char)local_2b4;
          if (0 < local_2b4) {
                    /* try { // try from 0107beac to 0117bed7 has its CatchHandler @ 0107c0b4 */
            lVar1 = 0;
            plVar10 = alStack_2a8;
            do {
              *param_2 = plVar10[-1] + 1;
              param_2[2] = *plVar10 + -1;
              uVar2 = (*(code *)param_2[9])(param_2);
              lVar6 = lVar1 * 8;
              *(undefined8 *)(*plVar11 + lVar6) = uVar2;
              uVar2 = (*(code *)param_2[10])(param_2,0);
                    /* try { // try from 0107bef4 to 0117befb has its CatchHandler @ 0107c100 */
              lVar1 = lVar1 + 1;
              *(undefined8 *)(*plVar7 + lVar6) = uVar2;
              plVar10 = plVar10 + 3;
            } while (lVar1 < local_2b4);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < local_cc);
      }
      *param_2 = lVar5;
      param_2[2] = lVar8;
    }
  }
LAB_0107bf34:
  *(int *)(param_2 + 3) = local_64;
                    /* try { // try from 0107bf4c to 0117bf4f has its CatchHandler @ 0107c0b0 */
  return;
}

