
byte * FUN_00d6ee50(long param_1,byte *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  float fVar7;
  byte *local_38;
  
  switch(*param_2) {
  case 0x22:
    pbVar6 = (byte *)FUN_00d6f408(param_1,param_2);
    return pbVar6;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    fVar7 = strtof((char *)param_2,(char **)&local_38);
    if (local_38 != param_2) {
      *(float *)(param_1 + 0x24) = fVar7;
      *(int *)(param_1 + 0x20) = (int)fVar7;
      *(undefined4 *)(param_1 + 0x10) = 3;
      return local_38;
    }
    break;
  case 0x5b:
    *(undefined4 *)(param_1 + 0x10) = 5;
    pbVar6 = param_2 + 1;
    do {
      pbVar5 = pbVar6;
      pbVar6 = pbVar5 + 1;
    } while (*pbVar5 - 1 < 0x20);
                    /* catch() { ... } // from try @ 00d6ef38 with catch @ 00d6ef00 */
    if (*pbVar5 == 0x5d) {
      return pbVar5 + 1;
    }
    plVar2 = (long *)_spCalloc(1,0x30,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Json.c"
                               ,0x4d);
    *(long **)(param_1 + 8) = plVar2;
    if (plVar2 == (long *)0x0) {
      return (byte *)0x0;
    }
    pbVar5 = pbVar5 + -1;
    do {
      pbVar5 = pbVar5 + 1;
                    /* try { // try from 00d6ef30 to 00e6ef37 has its CatchHandler @ 00d6ef70 */
                    /* try { // try from 00d6ef38 to 00e6ef8b has its CatchHandler @ 00d6ef00 */
    } while (*pbVar5 - 1 < 0x20);
    lVar3 = FUN_00d6ee50(plVar2);
    if (lVar3 == 0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)(lVar3 + -1);
    do {
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 - 1 < 0x20);
    iVar1 = 1;
    while( true ) {
      *(int *)(param_1 + 0x14) = iVar1;
                    /* catch() { ... } // from try @ 00d6ef30 with catch @ 00d6ef70 */
      if (*pbVar6 != 0x2c) {
        if (*pbVar6 != 0x5d) {
          DAT_01787608 = pbVar6;
          return (byte *)0x0;
        }
        return pbVar6 + 1;
      }
      plVar4 = (long *)_spCalloc(1,0x30,
                                 "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Json.c"
                                 ,0x4d);
                    /* catch() { ... } // from try @ 00d6efc4 with catch @ 00d6ef8c */
      if (plVar4 == (long *)0x0) break;
      *plVar2 = (long)plVar4;
      do {
        pbVar6 = pbVar6 + 1;
      } while (*pbVar6 - 1 < 0x20);
      lVar3 = FUN_00d6ee50(plVar4,pbVar6);
      if (lVar3 == 0) {
        return (byte *)0x0;
      }
      pbVar6 = (byte *)(lVar3 + -1);
      do {
                    /* try { // try from 00d6efbc to 00e6efc3 has its CatchHandler @ 00d6effc */
        pbVar6 = pbVar6 + 1;
                    /* try { // try from 00d6efc4 to 00e6f017 has its CatchHandler @ 00d6ef8c */
      } while (*pbVar6 - 1 < 0x20);
      iVar1 = *(int *)(param_1 + 0x14) + 1;
      plVar2 = plVar4;
    }
    return (byte *)0x0;
  case 0x66:
    iVar1 = strncmp((char *)(param_2 + 1),"alse",4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return param_2 + 5;
                    /* catch() { ... } // from try @ 00d6efbc with catch @ 00d6effc */
    }
    break;
  case 0x6e:
    iVar1 = strncmp((char *)(param_2 + 1),"ull",3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      return param_2 + 4;
    }
    break;
  case 0x74:
    iVar1 = strncmp((char *)(param_2 + 1),"rue",3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      return param_2 + 4;
    }
    break;
  case 0x7b:
    *(undefined4 *)(param_1 + 0x10) = 6;
    pbVar6 = param_2 + 1;
    do {
      pbVar5 = pbVar6;
      pbVar6 = pbVar5 + 1;
    } while (*pbVar5 - 1 < 0x20);
    if (*pbVar5 == 0x7d) {
      return pbVar5 + 1;
    }
    plVar2 = (long *)_spCalloc(1,0x30,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Json.c"
                               ,0x4d);
    *(long **)(param_1 + 8) = plVar2;
    if (plVar2 != (long *)0x0) {
      pbVar5 = pbVar5 + -1;
      do {
        pbVar5 = pbVar5 + 1;
      } while (*pbVar5 - 1 < 0x20);
      lVar3 = FUN_00d6f408(plVar2);
      if (lVar3 != 0) {
        pbVar6 = (byte *)(lVar3 + -1);
        do {
          pbVar6 = pbVar6 + 1;
        } while (*pbVar6 - 1 < 0x20);
        lVar3 = plVar2[3];
        plVar2[3] = 0;
        plVar2[5] = lVar3;
        if (*pbVar6 != 0x3a) {
          DAT_01787608 = pbVar6;
          return (byte *)0x0;
        }
        do {
          pbVar6 = pbVar6 + 1;
        } while (*pbVar6 - 1 < 0x20);
        lVar3 = FUN_00d6ee50(plVar2);
        if (lVar3 != 0) {
          pbVar6 = (byte *)(lVar3 + -1);
          do {
            pbVar6 = pbVar6 + 1;
          } while (*pbVar6 - 1 < 0x20);
          iVar1 = 1;
          while( true ) {
            *(int *)(param_1 + 0x14) = iVar1;
            if (*pbVar6 != 0x2c) {
              if (*pbVar6 != 0x7d) {
                DAT_01787608 = pbVar6;
                return (byte *)0x0;
              }
              return pbVar6 + 1;
            }
                    /* try { // try from 00d6f14c to 00e6f24b has its CatchHandler @ 00d6f14c
                       catch() { ... } // from try @ 00d6f14c with catch @ 00d6f14c
                       catch() { ... } // from try @ 00d6fe64 with catch @ 00d6f14c
                       catch() { ... } // from try @ 00d70ab8 with catch @ 00d6f14c
                       catch() { ... } // from try @ 00d70da0 with catch @ 00d6f14c */
            plVar4 = (long *)_spCalloc(1,0x30,
                                       "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Json.c"
                                       ,0x4d);
            if (plVar4 == (long *)0x0) break;
            *plVar2 = (long)plVar4;
            do {
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 - 1 < 0x20);
            lVar3 = FUN_00d6f408(plVar4,pbVar6);
            if (lVar3 == 0) {
              return (byte *)0x0;
            }
            pbVar6 = (byte *)(lVar3 + -1);
            do {
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 - 1 < 0x20);
            lVar3 = plVar4[3];
            plVar4[3] = 0;
            plVar4[5] = lVar3;
            if (*pbVar6 != 0x3a) {
              DAT_01787608 = pbVar6;
              return (byte *)0x0;
            }
            do {
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 - 1 < 0x20);
            lVar3 = FUN_00d6ee50(plVar4);
            if (lVar3 == 0) {
              return (byte *)0x0;
            }
            pbVar6 = (byte *)(lVar3 + -1);
            do {
              pbVar6 = pbVar6 + 1;
            } while (*pbVar6 - 1 < 0x20);
            iVar1 = *(int *)(param_1 + 0x14) + 1;
            plVar2 = plVar4;
          }
        }
      }
    }
    return (byte *)0x0;
  }
  DAT_01787608 = param_2;
  return (byte *)0x0;
}

