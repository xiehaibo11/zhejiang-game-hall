
int FUN_00e153f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *__s;
  long *plVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  plVar6 = *(long **)(param_1 + 0xb0);
  if (plVar6 == (long *)0x0) {
    return 6;
  }
  lVar1 = plVar6[2];
  lVar5 = plVar6[3];
  __n = *(size_t *)(lVar5 + 0x58);
  if ((long)__n < 1) {
    if (__n != 0) {
      iVar2 = 6;
      goto joined_r0x00e15478;
    }
    __s = (long *)0x0;
    lVar4 = lVar1;
  }
  else {
    __s = (long *)(**(code **)(lVar1 + 8))(lVar1,__n);
    if (__s == (long *)0x0) {
      iVar2 = 0x40;
joined_r0x00e15478:
      if (param_2 == (undefined8 *)0x0) {
        return iVar2;
      }
      *param_2 = 0;
      return iVar2;
    }
    memset(__s,0,__n);
    plVar6 = *(long **)(param_1 + 0xb0);
    lVar5 = plVar6[3];
    lVar4 = plVar6[2];
  }
  __s[1] = param_1;
  *__s = plVar6[1];
  plVar3 = (long *)(**(code **)(lVar4 + 8))(lVar4,0x50);
  if (plVar3 == (long *)0x0) {
    FUN_00e155a8(__s);
    iVar2 = 0x40;
    if (__s == (long *)0x0) {
      return 0x40;
    }
    goto LAB_00e1557c;
  }
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[1] = 0;
  *plVar3 = 0;
  __s[0x25] = (long)plVar3;
  if ((*(byte *)(*plVar6 + 1) >> 1 & 1) == 0) {
    plVar6 = (long *)(**(code **)(lVar4 + 8))(lVar4,0xb0);
    if (plVar6 != (long *)0x0) {
      plVar6[0x15] = 0;
      *plVar6 = lVar4;
      plVar6[0x14] = 0;
      plVar6[0x13] = 0;
      plVar6[0x12] = 0;
      plVar6[0x11] = 0;
      plVar6[0x10] = 0;
      plVar6[0xf] = 0;
      plVar6[0xe] = 0;
      plVar6[0xd] = 0;
      plVar6[0xc] = 0;
      plVar6[0xb] = 0;
      plVar6[10] = 0;
      plVar6[9] = 0;
      plVar6[8] = 0;
      plVar6[7] = 0;
      plVar6[6] = 0;
      plVar6[5] = 0;
      plVar6[4] = 0;
      plVar6[3] = 0;
      plVar6[2] = 0;
      plVar6[1] = 0;
      *plVar3 = (long)plVar6;
      goto LAB_00e15528;
    }
    iVar2 = 0x40;
  }
  else {
LAB_00e15528:
    if ((*(code **)(lVar5 + 0x80) == (code *)0x0) ||
       (iVar2 = (**(code **)(lVar5 + 0x80))(__s), iVar2 == 0)) {
      __s[2] = *(long *)(param_1 + 0x98);
      *(long **)(param_1 + 0x98) = __s;
      if (param_2 == (undefined8 *)0x0) {
        return 0;
      }
      *param_2 = __s;
      return 0;
    }
  }
  FUN_00e155a8(__s);
LAB_00e1557c:
  (**(code **)(lVar1 + 0x10))(lVar1,__s);
  return iVar2;
}

