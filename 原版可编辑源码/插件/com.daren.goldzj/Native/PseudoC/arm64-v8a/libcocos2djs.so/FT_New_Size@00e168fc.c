
int FT_New_Size(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *__s;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  size_t __n;
  long lVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (undefined8 *)0x0) {
LAB_00e16980:
    iVar1 = 6;
  }
  else {
    if (*(long *)(param_1 + 0xb0) == 0) {
      return 0x22;
    }
    *param_2 = 0;
    lVar5 = *(long *)(param_1 + 0xb8);
    lVar6 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
    __n = *(size_t *)(lVar6 + 0x50);
    if ((long)__n < 1) {
      if (__n != 0) goto LAB_00e16980;
      __s = (long *)0x0;
    }
    else {
      __s = (long *)(**(code **)(lVar5 + 8))(lVar5,__n);
      if (__s == (long *)0x0) {
        return 0x40;
      }
      memset(__s,0,__n);
    }
    plVar2 = (long *)(**(code **)(lVar5 + 8))(lVar5,0x18);
    if (plVar2 == (long *)0x0) {
      iVar1 = 0x40;
      if (__s == (long *)0x0) {
        return 0x40;
      }
    }
    else {
      plVar2[1] = 0;
      plVar2[2] = 0;
      *plVar2 = 0;
      *__s = param_1;
      puVar3 = (undefined8 *)(**(code **)(lVar5 + 8))(lVar5,0x48);
      if (puVar3 == (undefined8 *)0x0) {
        iVar1 = 0x40;
      }
      else {
        puVar3[8] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        __s[10] = (long)puVar3;
        pcVar4 = *(code **)(lVar6 + 0x70);
        if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(__s), iVar1 == 0)) {
          *param_2 = __s;
          plVar2[2] = (long)__s;
          lVar5 = *(long *)(param_1 + 0xd0);
          *plVar2 = lVar5;
          plVar2[1] = 0;
          puVar3 = (undefined8 *)(param_1 + 200);
          if (lVar5 != 0) {
            puVar3 = (undefined8 *)(lVar5 + 8);
          }
          *puVar3 = plVar2;
          *(long **)(param_1 + 0xd0) = plVar2;
          return 0;
        }
      }
      (**(code **)(lVar5 + 0x10))(lVar5,plVar2);
    }
    (**(code **)(lVar5 + 0x10))(lVar5,__s);
  }
  return iVar1;
}

