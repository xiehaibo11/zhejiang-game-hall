
undefined8 FUN_00a44288(char *param_1,char *param_2)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_00a4a0f8(&DAT_013c86f0,param_2);
    if (iVar2 != 0) {
      return 1;
    }
    sVar3 = strlen(param_2);
    pcVar4 = strchr(param_1,0x3a);
    if (pcVar4 == (char *)0x0) {
      uVar6 = strlen(param_1);
    }
    else {
      uVar6 = (long)pcVar4 - (long)param_1;
    }
    if (sVar3 != 0) {
      uVar5 = 0;
      if (sVar3 != 0) goto LAB_00a4438c;
LAB_00a443a4:
      uVar1 = uVar5;
      if (uVar5 != sVar3) {
                    /* try { // try from 00a443b8 to 00b443eb has its CatchHandler @ 00a4443c */
        while ((uVar1 < sVar3 &&
               ((0x3f < (ulong)(byte)param_2[uVar1] ||
                ((1L << ((ulong)(byte)param_2[uVar1] & 0x3f) & 0x100100000001U) == 0))))) {
          uVar1 = uVar1 + 1;
        }
        if (param_2[uVar5] == '.') {
          uVar5 = uVar5 + 1;
        }
        uVar7 = uVar1 - uVar5;
        if (uVar7 <= uVar6) {
          iVar2 = FUN_00a4a220(param_2 + uVar5,param_1 + (uVar6 - uVar7),uVar7);
          if (iVar2 != 0) {
            if (uVar7 == uVar6) {
              return 1;
            }
                    /* try { // try from 00a4436c to 00b4439f has its CatchHandler @ 00a4446c */
            if ((param_1 + (uVar6 - uVar7))[-1] == '.') {
              return 1;
            }
          }
        }
        uVar5 = uVar1 + 1;
        if (sVar3 <= uVar5) {
          return 0;
        }
        for (; uVar5 < sVar3; uVar5 = uVar5 + 1) {
LAB_00a4438c:
                    /* try { // try from 00a443a0 to 00b443b3 has its CatchHandler @ 00a44438 */
          if ((0x3f < (ulong)(byte)param_2[uVar5]) ||
             ((1L << ((ulong)(byte)param_2[uVar5] & 0x3f) & 0x100100000001U) == 0)) break;
        }
        goto LAB_00a443a4;
      }
    }
  }
                    /* try { // try from 00a443ec to 00b44487 has its CatchHandler @ 00a44284 */
  return 0;
}

