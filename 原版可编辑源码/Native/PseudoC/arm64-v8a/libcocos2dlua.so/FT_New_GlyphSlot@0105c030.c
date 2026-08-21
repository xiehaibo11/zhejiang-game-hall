
int FT_New_GlyphSlot(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *__s;
  long *__s_00;
  size_t __n;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return 0x23;
  }
  plVar4 = *(long **)(param_1 + 0xb0);
  if (plVar4 == (long *)0x0) {
    return 6;
  }
  lVar1 = plVar4[2];
  lVar5 = plVar4[3];
  __n = *(size_t *)(lVar5 + 0x58);
  if ((long)__n < 1) {
    if (__n != 0) {
      iVar2 = 6;
      goto joined_r0x0105c0b8;
    }
    __s = (long *)0x0;
    lVar3 = lVar1;
  }
  else {
    __s = (long *)(**(code **)(lVar1 + 8))(lVar1,__n);
                    /* try { // try from 0105c080 to 0115c09f has its CatchHandler @ 0105c188 */
    if (__s == (long *)0x0) {
      iVar2 = 0x40;
joined_r0x0105c0b8:
      if (param_2 == (undefined8 *)0x0) {
        return iVar2;
      }
      *param_2 = 0;
      return iVar2;
    }
    memset(__s,0,__n);
    plVar4 = *(long **)(param_1 + 0xb0);
    lVar5 = plVar4[3];
    lVar3 = plVar4[2];
  }
  __s[1] = param_1;
  *__s = plVar4[1];
  __s_00 = (long *)(**(code **)(lVar3 + 8))(lVar3,0x48);
  if (__s_00 == (long *)0x0) {
    FUN_0105c1d8(__s);
    iVar2 = 0x40;
    if (__s == (long *)0x0) {
      return 0x40;
    }
  }
  else {
    memset(__s_00,0,0x48);
    __s[0x25] = (long)__s_00;
    if ((*(byte *)(*plVar4 + 1) >> 1 & 1) == 0) {
      plVar4 = (long *)(**(code **)(lVar3 + 8))(lVar3,0xb0);
      if (plVar4 == (long *)0x0) {
        FUN_0105c1d8(__s);
        iVar2 = 0x40;
        goto LAB_0105c1ac;
      }
      memset(plVar4 + 1,0,0xa8);
      *plVar4 = lVar3;
      *__s_00 = (long)plVar4;
    }
    if ((*(code **)(lVar5 + 0x80) == (code *)0x0) ||
       (iVar2 = (**(code **)(lVar5 + 0x80))(__s), iVar2 == 0)) {
                    /* catch() { ... } // from try @ 0105c080 with catch @ 0105c188 */
      __s[2] = *(long *)(param_1 + 0x98);
      *(long **)(param_1 + 0x98) = __s;
      if (param_2 == (undefined8 *)0x0) {
        return 0;
      }
      *param_2 = __s;
      return 0;
    }
    FUN_0105c1d8(__s);
  }
LAB_0105c1ac:
  (**(code **)(lVar1 + 0x10))(lVar1,__s);
                    /* catch() { ... } // from try @ 0105c200 with catch @ 0105c1c0 */
  return iVar2;
}

