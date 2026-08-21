
int FT_New_Size(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *__s;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  size_t __n;
  long lVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    return 0x22;
  }
  *param_2 = 0;
  lVar5 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
  __n = *(size_t *)(lVar6 + 0x50);
  if ((long)__n < 1) {
    if (__n != 0) {
      return 6;
    }
    __s = (long *)0x0;
LAB_0105d9d4:
    plVar3 = (long *)(**(code **)(lVar5 + 8))(lVar5,0x18);
    if (plVar3 == (long *)0x0) {
      if (__s == (long *)0x0) goto LAB_0105da44;
      iVar2 = 0x40;
    }
    else {
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
      *__s = param_1;
      __s[10] = 0;
      pcVar4 = *(code **)(lVar6 + 0x70);
      if ((pcVar4 == (code *)0x0) || (iVar2 = (*pcVar4)(__s), iVar2 == 0)) {
        *param_2 = __s;
        plVar3[2] = (long)__s;
        lVar5 = *(long *)(param_1 + 0xd0);
                    /* try { // try from 0105da5c to 0115db8b has its CatchHandler @ 0105d774 */
        *plVar3 = lVar5;
        plVar3[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 8);
        if (lVar5 == 0) {
          puVar1 = (undefined8 *)(param_1 + 200);
        }
        *puVar1 = plVar3;
        *(long **)(param_1 + 0xd0) = plVar3;
        return 0;
      }
                    /* try { // try from 0105da14 to 0115da1b has its CatchHandler @ 0105db20 */
      (**(code **)(lVar5 + 0x10))(lVar5,plVar3);
    }
    (**(code **)(lVar5 + 0x10))(lVar5,__s);
                    /* try { // try from 0105da40 to 0115da5b has its CatchHandler @ 0105db28 */
  }
  else {
    __s = (long *)(**(code **)(lVar5 + 8))(lVar5,__n);
    if (__s != (long *)0x0) {
      memset(__s,0,__n);
      goto LAB_0105d9d4;
    }
LAB_0105da44:
    iVar2 = 0x40;
  }
  return iVar2;
}

