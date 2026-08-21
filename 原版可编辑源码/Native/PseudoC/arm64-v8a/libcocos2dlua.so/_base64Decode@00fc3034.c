
/* cocos2d::_base64Decode(unsigned char const*, unsigned int, unsigned char*, unsigned int*) */

undefined4 cocos2d::_base64Decode(uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar4 = 0x40;
  do {
    bVar2 = alphabet[lVar4];
    (&DAT_01790f78)[bVar2] = (char)lVar4;
    lVar4 = lVar4 + -1;
    (&DAT_01790e78)[bVar2] = 1;
  } while (lVar4 != -1);
  if (param_2 == 0) {
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    uVar9 = 0;
    iVar3 = 0;
    uVar5 = 0;
    uVar6 = (ulong)param_2;
    do {
      uVar7 = (ulong)*param_1;
      if (uVar7 == 0x3d) {
        if (iVar3 == 3) {
          uVar8 = 0;
          param_3[uVar9] = (uchar)(uVar5 >> 0x10);
          uVar10 = uVar9 + 2;
          param_3[uVar9 + 1] = (uchar)(uVar5 >> 8);
          goto LAB_00fc314c;
        }
        if (iVar3 == 2) {
          uVar10 = uVar9 + 1;
          uVar8 = 0;
          param_3[uVar9] = (uchar)(uVar5 >> 10);
          goto LAB_00fc314c;
        }
        if (iVar3 == 1) {
          uVar8 = 1;
          fwrite("base64Decode: encoding incomplete: at least 2 bits missing",0x3a,1,
                 (FILE *)pthread_rwlock_tryrdlock);
          uVar10 = uVar9;
          goto LAB_00fc314c;
        }
        break;
      }
      if ((&DAT_01790e78)[uVar7] != '\0') {
        iVar3 = iVar3 + 1;
        iVar1 = uVar5 + (int)(char)(&DAT_01790f78)[uVar7];
        if (iVar3 == 4) {
          uVar10 = uVar9 + 2;
          uVar5 = 0;
          iVar3 = 0;
          param_3[uVar9] = (uchar)((uint)iVar1 >> 0x10);
          param_3[uVar9 + 1] = (uchar)((uint)iVar1 >> 8);
          uVar9 = uVar9 + 3;
          param_3[uVar10] = (uchar)iVar1;
        }
        else {
          uVar5 = iVar1 * 0x40;
        }
      }
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
    } while (uVar6 != 0);
    uVar8 = 0;
    uVar10 = uVar9;
  }
LAB_00fc314c:
  *param_4 = uVar10;
  return uVar8;
}

