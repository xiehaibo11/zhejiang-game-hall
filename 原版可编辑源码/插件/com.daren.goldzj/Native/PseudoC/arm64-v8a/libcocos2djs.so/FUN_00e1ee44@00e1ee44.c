
int FUN_00e1ee44(long param_1,undefined8 *param_2,char param_3,undefined4 param_4,int param_5,
                long param_6,undefined8 *param_7)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  void *__s;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  size_t __n;
  
  lVar11 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  __n = *(size_t *)(lVar1 + 0x48);
  if ((long)__n < 1) {
    if (__n != 0) {
      __s = (void *)0x0;
      puVar4 = (undefined8 *)0x0;
      iVar3 = 6;
      pcVar7 = *(code **)(lVar1 + 0x68);
      pvVar2 = __s;
      goto joined_r0x00e1f194;
    }
    __s = (void *)0x0;
  }
  else {
    __s = (void *)(**(code **)(lVar11 + 8))(lVar11,__n);
    if (__s == (void *)0x0) {
      puVar4 = (undefined8 *)0x0;
      iVar3 = 0x40;
      pcVar7 = *(code **)(lVar1 + 0x68);
      pvVar2 = __s;
      goto joined_r0x00e1f194;
    }
    memset(__s,0,__n);
  }
  *(long *)((long)__s + 0xb0) = param_1;
  *(long *)((long)__s + 0xb8) = lVar11;
  *(undefined8 *)((long)__s + 0xc0) = *param_2;
  if (param_3 != '\0') {
    *(ulong *)((long)__s + 0x10) = *(ulong *)((long)__s + 0x10) | 0x400;
  }
  puVar4 = (undefined8 *)(**(code **)(lVar11 + 8))(lVar11,0x80);
  if (puVar4 == (undefined8 *)0x0) {
    iVar3 = 0x40;
    if (__s == (void *)0x0) {
      puVar4 = (undefined8 *)0x0;
      pcVar7 = *(code **)(lVar1 + 0x68);
      pvVar2 = (void *)0x0;
      goto joined_r0x00e1f194;
    }
  }
  else {
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined8 **)((long)__s + 0xf0) = puVar4;
    puVar4[0xd] = 0;
    if (0 < param_5) {
      lVar10 = 0;
      lVar5 = 0;
      plVar6 = (long *)(param_6 + 8);
      do {
        while( true ) {
          if (lVar10 != 0) goto LAB_00e1efa8;
          if (plVar6[-1] != 0x696e6372) break;
          lVar10 = *plVar6;
          puVar4[0xd] = lVar10;
          lVar5 = lVar5 + 1;
          plVar6 = plVar6 + 2;
          if (param_5 <= lVar5) goto LAB_00e1efa8;
        }
        lVar10 = 0;
        lVar5 = lVar5 + 1;
        plVar6 = plVar6 + 2;
      } while (lVar5 < param_5);
    }
LAB_00e1efa8:
    *(undefined4 *)((long)puVar4 + 0x74) = 0xffffffff;
    if (*(code **)(lVar1 + 0x60) == (code *)0x0) {
      *param_2 = *(undefined8 *)((long)__s + 0xc0);
      plVar6 = *(long **)((long)__s + 0x50);
joined_r0x00e1f174:
      if (plVar6 == (long *)0x0) {
        *param_7 = __s;
        return 0;
      }
      for (plVar9 = plVar6 + (long)*(int *)((long)__s + 0x48) + -1;
          plVar8 = plVar6 + (long)*(int *)((long)__s + 0x48) + -1, plVar6 <= plVar9;
          plVar9 = plVar9 + -1) {
        lVar11 = *plVar9;
        if (*(int *)(lVar11 + 8) == 0x756e6963) {
          if (*(short *)(lVar11 + 0xc) == 0) {
            if (*(short *)(lVar11 + 0xe) == 4) goto LAB_00e1f054;
          }
          else if ((*(short *)(lVar11 + 0xc) == 3) && (*(short *)(lVar11 + 0xe) == 10)) {
LAB_00e1f054:
            *(long *)((long)__s + 0xa8) = lVar11;
            goto LAB_00e1f078;
          }
        }
      }
      do {
        if (plVar8 < plVar6) goto LAB_00e1f078;
        lVar11 = *plVar8;
        plVar8 = plVar8 + -1;
      } while (*(int *)(lVar11 + 8) != 0x756e6963);
      *(long *)((long)__s + 0xa8) = lVar11;
LAB_00e1f078:
      *param_7 = __s;
      return 0;
    }
    iVar3 = (**(code **)(lVar1 + 0x60))(*param_2,__s,param_4,param_5,param_6);
    *param_2 = *(undefined8 *)((long)__s + 0xc0);
    if (iVar3 == 0) {
      plVar6 = *(long **)((long)__s + 0x50);
      goto joined_r0x00e1f174;
    }
  }
  if (0 < *(int *)((long)__s + 0x48)) {
    lVar5 = 0;
    do {
      plVar6 = *(long **)(*(long *)((long)__s + 0x50) + lVar5 * 8);
      lVar10 = *(long *)(*plVar6 + 0xb8);
      if (*(code **)(plVar6[2] + 0x10) != (code *)0x0) {
        (**(code **)(plVar6[2] + 0x10))(plVar6);
      }
      (**(code **)(lVar10 + 0x10))(lVar10,plVar6);
      *(undefined8 *)(*(long *)((long)__s + 0x50) + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)__s + 0x48));
  }
  if (*(long *)((long)__s + 0x50) != 0) {
    (**(code **)(lVar11 + 0x10))(lVar11);
  }
  *(undefined8 *)((long)__s + 0x50) = 0;
  *(undefined4 *)((long)__s + 0x48) = 0;
  pcVar7 = *(code **)(lVar1 + 0x68);
  pvVar2 = __s;
joined_r0x00e1f194:
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(pvVar2);
  }
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)(lVar11 + 0x10))(lVar11,puVar4);
  }
  if (__s != (void *)0x0) {
    (**(code **)(lVar11 + 0x10))(lVar11,__s);
  }
  *param_7 = 0;
  return iVar3;
}

