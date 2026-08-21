
byte * FUN_001022d8(void *param_1,size_t param_2,undefined4 param_3)

{
  size_t __size;
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  byte *__s;
  uint uVar8;
  long lVar9;
  
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_0010239c;
  while( true ) {
    FUN_001019fc("sen enter source: ",param_1,param_2,0);
    __size = param_2 + 8;
    __s = malloc(__size);
    uVar8 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar8 & 1) == 0)) break;
LAB_0010239c:
    FUN_001019fc("sen enter source: ",param_1,param_2,0);
  }
  bVar6 = DAT_00113190 < 0;
  bVar7 = -1 < (int)uVar8;
  if (__s == (byte *)0x0) {
    if (!bVar6 && !bVar7) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    if (bVar6 || bVar7) goto LAB_001023e0;
    do {
      memset(__s,0,__size);
      *(undefined4 *)(__s + 3) = param_3;
      __s[0] = 1;
      __s[1] = 1;
      __s[2] = 1;
      memcpy(__s + 7,param_1,param_2);
LAB_001023e0:
      memset(__s,0,__size);
      *(undefined4 *)(__s + 3) = param_3;
      __s[0] = 1;
      __s[1] = 1;
      __s[2] = 1;
      memcpy(__s + 7,param_1,param_2);
    } while (!bVar6 && !bVar7);
    uVar8 = 0;
    lVar1 = param_2 + 7;
    pbVar5 = __s;
    for (lVar9 = lVar1; lVar9 != 0; lVar9 = lVar9 + -1) {
      uVar8 = uVar8 + *pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    uVar3 = -uVar8;
    if (uVar8 < 0x100) {
      uVar3 = uVar8;
    }
    bVar4 = (byte)uVar3;
    if ((lVar1 != 0) && (*__s = bVar4 ^ 1, lVar1 != 1)) {
      lVar9 = 0;
      do {
        lVar2 = lVar9 + 1;
        __s[lVar9 + 1] = __s[lVar9 + 1] ^ bVar4 ^ (byte)lVar2;
        lVar9 = lVar2;
      } while (param_2 + 6 != lVar2);
    }
    __s[lVar1] = bVar4;
    if (!bVar6 && !bVar7) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return __s;
}

