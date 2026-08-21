
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00e0eed8(char *param_1,int param_2,byte *param_3)

{
  __off_t _Var1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *__ptr;
  size_t sVar6;
  char *__s;
  __off_t _Var7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  __ptr = malloc(0xe8);
  if (__ptr == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined8 *)(__ptr + 0x1c) = 0;
  __ptr[6] = 0;
  __ptr[10] = 0;
  __ptr[0xb] = 0x2000;
  __ptr[0x16] = 0xffffffff;
  __ptr[0x17] = 0;
  __ptr[0x10] = 0;
  uVar11 = (uint)*param_3;
  if (*param_3 != 0) {
    bVar3 = false;
    iVar8 = 0;
    bVar5 = false;
    bVar4 = false;
    do {
      param_3 = param_3 + 1;
      if ((uVar11 - 0x30 & 0xff) < 10) {
        __ptr[0x16] = uVar11 - 0x30;
switchD_00e0ef98_caseD_2c:
        bVar2 = *param_3;
      }
      else {
        switch(uVar11) {
        case 0x2b:
          goto switchD_00e0ef98_caseD_2b;
        default:
          goto switchD_00e0ef98_caseD_2c;
        case 0x46:
          __ptr[0x17] = 4;
          bVar2 = *param_3;
          break;
        case 0x52:
          __ptr[0x17] = 3;
          bVar2 = *param_3;
          break;
        case 0x54:
          bVar3 = true;
          __ptr[0x10] = 1;
          bVar2 = *param_3;
          break;
        case 0x61:
          iVar8 = 1;
          __ptr[6] = 1;
          bVar2 = *param_3;
          break;
        case 0x65:
          bVar4 = true;
          bVar2 = *param_3;
          break;
        case 0x66:
          __ptr[0x17] = 1;
          bVar2 = *param_3;
          break;
        case 0x68:
          __ptr[0x17] = 2;
          bVar2 = *param_3;
          break;
        case 0x72:
          iVar8 = 0x1c4f;
          __ptr[6] = 0x1c4f;
          bVar2 = *param_3;
          break;
        case 0x77:
          iVar8 = 0x79b1;
          __ptr[6] = 0x79b1;
          bVar2 = *param_3;
          break;
        case 0x78:
          bVar5 = true;
          bVar2 = *param_3;
        }
      }
      uVar11 = (uint)bVar2;
    } while (uVar11 != 0);
    if (iVar8 == 0x1c4f) {
      if (bVar3) goto switchD_00e0ef98_caseD_2b;
      __ptr[0x10] = 1;
    }
    else if (iVar8 == 0) goto switchD_00e0ef98_caseD_2b;
    sVar6 = strlen(param_1);
    __s = malloc(sVar6 + 1);
    *(char **)(__ptr + 8) = __s;
    if (__s != (char *)0x0) {
      snprintf(__s,sVar6 + 1,"%s",param_1);
      iVar8 = __ptr[6];
      uVar11 = 0xa0000;
      if (!bVar4) {
        uVar11 = 0x20000;
      }
      if (iVar8 == 0x1c4f) {
        uVar10 = 0;
      }
      else {
        uVar9 = 0xc1;
        if (!bVar5) {
          uVar9 = 0x41;
        }
        uVar10 = 0x200;
        if (iVar8 != 0x79b1) {
          uVar10 = 0x400;
        }
        uVar10 = uVar10 | uVar9;
      }
      if (param_2 < 0) {
        param_2 = open(param_1,uVar10 | uVar11,0x1b6);
        __ptr[7] = param_2;
        if (param_2 == -1) {
          free(*(void **)(__ptr + 8));
          goto switchD_00e0ef98_caseD_2b;
        }
        iVar8 = __ptr[6];
      }
      else {
        __ptr[7] = param_2;
      }
      if (iVar8 == 0x1c4f) {
        _Var7 = lseek(param_2,0,1);
        _Var1 = 0;
        if (_Var7 != -1) {
          _Var1 = _Var7;
        }
        *(__off_t *)(__ptr + 0x12) = _Var1;
        *__ptr = 0;
        if (__ptr[6] == 0x1c4f) {
          *(undefined8 *)(__ptr + 0x14) = 0;
          __ptr[0x11] = 0;
        }
      }
      else {
        if (iVar8 == 1) {
          __ptr[6] = 0x79b1;
        }
        *__ptr = 0;
      }
      __ptr[0x1a] = 0;
      if (*(void **)(__ptr + 0x1c) != (void *)0x0) {
        if (__ptr[0x1b] != -4) {
          free(*(void **)(__ptr + 0x1c));
        }
        *(undefined8 *)(__ptr + 0x1c) = 0;
      }
      __ptr[0x1b] = 0;
      *(undefined8 *)(__ptr + 4) = 0;
      __ptr[0x20] = 0;
      return __ptr;
    }
  }
switchD_00e0ef98_caseD_2b:
  free(__ptr);
  return (undefined4 *)0x0;
}

