
int FUN_01065e00(long *param_1,long *param_2,long param_3,undefined8 param_4,char *param_5,
                long *param_6)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 local_a0 [8];
  long *local_80;
  long *local_78;
  
  lVar5 = *param_1;
  if (param_1 == (long *)0x0) {
    iVar2 = 0x21;
                    /* catch() { ... } // from try @ 01065e84 with catch @ 01065f18 */
    if (param_2 == (long *)0x0) {
      return 0x21;
    }
  }
  else {
    if (param_2 == (long *)0x0) {
      return 6;
    }
    plVar3 = (long *)(**(code **)(lVar5 + 8))(lVar5,0x50);
                    /* try { // try from 01065e54 to 01165e83 has its CatchHandler @ 01065e54
                       catch() { ... } // from try @ 01065e54 with catch @ 01065e54
                       catch() { ... } // from try @ 01065ea4 with catch @ 01065e54 */
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)param_2;
      plVar3[1] = param_3;
      plVar3[2] = 0;
      plVar3[8] = 0;
      plVar3[7] = 0;
      plVar3[6] = 0;
      plVar3[5] = 0;
      plVar3[4] = 0;
      plVar3[3] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
                    /* try { // try from 01065e84 to 01165e93 has its CatchHandler @ 01065f18 */
      plVar3[5] = 0;
      plVar3[6] = (long)FUN_01065f74;
      local_a0[0] = 2;
      local_80 = plVar3;
      if (param_5 != (char *)0x0) {
                    /* try { // try from 01065e94 to 01165ea3 has its CatchHandler @ 01065ee8 */
        local_a0[0] = 10;
        uVar1 = *(uint *)((long)param_1 + 0x14);
        if (uVar1 != 0) {
                    /* try { // try from 01065ea4 to 01165f33 has its CatchHandler @ 01065e54 */
          plVar7 = param_1 + 3;
          do {
            plVar6 = plVar7 + 1;
            plVar7 = (long *)*plVar7;
            iVar2 = strcmp(*(char **)(*plVar7 + 0x10),param_5);
            local_78 = plVar7;
            if (iVar2 == 0) goto LAB_01065ed8;
            plVar7 = plVar6;
          } while (plVar6 < param_1 + (ulong)uVar1 + 3);
        }
        local_78 = (long *)0x0;
      }
LAB_01065ed8:
                    /* catch() { ... } // from try @ 01065e94 with catch @ 01065ee8 */
      iVar2 = FT_Open_Face(param_1,local_a0,param_4,param_6);
      if (iVar2 == 0) {
                    /* try { // try from 01065f6c to 01165f7b has its CatchHandler @ 01066008 */
        *(ulong *)(*param_6 + 0x10) = *(ulong *)(*param_6 + 0x10) & 0xfffffffffffffbff;
        return 0;
      }
      if ((code *)plVar3[6] != (code *)0x0) {
        (*(code *)plVar3[6])(plVar3);
      }
      pcVar4 = *(code **)(lVar5 + 0x10);
      param_2 = plVar3;
      goto LAB_01065f38;
    }
    iVar2 = 0x40;
  }
  pcVar4 = *(code **)(lVar5 + 0x10);
                    /* try { // try from 01065f34 to 01165f6b has its CatchHandler @ 01065f34
                       catch() { ... } // from try @ 01065f34 with catch @ 01065f34
                       catch() { ... } // from try @ 01065f90 with catch @ 01065f34 */
LAB_01065f38:
  (*pcVar4)(lVar5,param_2);
  return iVar2;
}

