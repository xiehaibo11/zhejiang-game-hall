
char * FUN_00bfca0c(long param_1,uint *param_2,uint param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  
  puVar1 = (uint *)(param_1 + 0x68);
  do {
    lVar6 = FUN_00bfc354(*(undefined8 *)(param_1 + 0x60),(ulong)((long)param_2 - (long)puVar1) >> 2,
                         param_3);
    if (lVar6 != 0) {
      *param_4 = lVar6;
      return "local";
    }
    do {
      while( true ) {
        puVar9 = param_2;
        param_2 = puVar9 + -1;
        if (param_2 <= puVar1) {
          return (char *)0x0;
        }
        uVar3 = *param_2;
        uVar2 = uVar3 & 0xff;
        uVar5 = uVar3 >> 8 & 0xff;
        if ((*(ushort *)(&DAT_01411070 + (ulong)uVar2 * 2) & 7) != 2) break;
        if (uVar5 <= param_3) {
          if (uVar2 != 0x2c) {
            return (char *)0x0;
          }
          if (param_3 <= uVar3 >> 0x10) {
            return (char *)0x0;
          }
        }
      }
    } while (((*(ushort *)(&DAT_01411070 + (ulong)uVar2 * 2) & 7) != 1) || (param_3 != uVar5));
    switch(uVar2) {
    case 0x12:
      param_3 = uVar3 >> 0x10;
      break;
    default:
      return (char *)0x0;
    case 0x2d:
      pcVar7 = *(char **)(param_1 + 0x58);
      uVar3 = uVar3 >> 0x10;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "";
      }
      else {
        for (; pcVar8 = pcVar7, uVar3 != 0; uVar3 = uVar3 - 1) {
          do {
            pcVar7 = pcVar8 + 1;
            cVar4 = *pcVar8;
            pcVar8 = pcVar7;
          } while (cVar4 != '\0');
        }
      }
      *param_4 = (long)pcVar7;
      return "upvalue";
    case 0x36:
      *param_4 = *(long *)(*(long *)(param_1 + 0x20) + ~(ulong)(uVar3 >> 0x10) * 8) + 0x18;
      return "global";
    case 0x39:
      *param_4 = *(long *)(*(long *)(param_1 + 0x20) + ~((ulong)(uVar3 >> 0x10) & 0xff) * 8) + 0x18;
      if ((((puVar1 < param_2) && (uVar2 = puVar9[-2], (uVar2 & 0xff) == 0x12)) &&
          ((uVar2 >> 8 & 0xff) == uVar5 + 2)) && (uVar3 >> 0x18 == uVar2 >> 0x10)) {
        return "method";
      }
      return "field";
    }
  } while( true );
}

