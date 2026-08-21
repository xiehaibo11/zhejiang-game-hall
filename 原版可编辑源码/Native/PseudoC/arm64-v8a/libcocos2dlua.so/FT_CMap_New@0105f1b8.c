
int FT_CMap_New(size_t *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *__s;
  void *__s_00;
  size_t __n;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == (size_t *)0x0) {
    return 6;
  }
  if (param_3 == (long *)0x0) {
    return 6;
  }
                    /* catch() { ... } // from try @ 0105f140 with catch @ 0105f1ec */
  lVar7 = *param_3;
  if (lVar7 == 0) {
    return 6;
  }
  __n = *param_1;
  lVar4 = *(long *)(lVar7 + 0xb8);
  if ((long)__n < 1) {
    if (__n == 0) {
      __s = (long *)0x0;
      goto LAB_0105f25c;
    }
    iVar3 = 6;
  }
  else {
    __s = (long *)(**(code **)(lVar4 + 8))(lVar4,__n);
    if (__s == (long *)0x0) {
      iVar3 = 0x40;
      goto joined_r0x0105f250;
    }
    memset(__s,0,__n);
LAB_0105f25c:
    lVar5 = param_3[1];
    lVar8 = *param_3;
    __s[2] = (long)param_1;
    __s[1] = lVar5;
    *__s = lVar8;
    if (((code *)param_1[1] == (code *)0x0) ||
       (iVar3 = (*(code *)param_1[1])(__s,param_2), iVar3 == 0)) {
      uVar1 = *(uint *)(lVar7 + 0x48);
      lVar6 = (long)(int)uVar1;
      lVar5 = *(long *)(lVar7 + 0x50);
      lVar8 = lVar6 + 1;
      if ((int)((uint)lVar8 | uVar1) < 0) {
        iVar3 = 6;
      }
      else {
        if ((uint)lVar8 == 0) {
          if (lVar5 != 0) {
            (**(code **)(lVar4 + 0x10))(lVar4,lVar5);
          }
          __s_00 = (void *)0x0;
          goto LAB_0105f37c;
        }
        if ((int)uVar1 < 0xfffffff) {
          if (uVar1 == 0) {
            __s_00 = (void *)(**(code **)(lVar4 + 8))(lVar4,8);
            if (__s_00 != (void *)0x0) {
              memset(__s_00,0,8);
              goto LAB_0105f37c;
            }
            lVar5 = 0;
          }
          else {
            __s_00 = (void *)(**(code **)(lVar4 + 0x18))(lVar4,lVar6 << 3,lVar8 * 8,lVar5);
            if (__s_00 != (void *)0x0) {
LAB_0105f37c:
              memset((void *)((long)__s_00 + lVar6 * 8),0,(lVar8 - lVar6) * 8);
              iVar2 = *(int *)(lVar7 + 0x48);
              iVar3 = 0;
              *(void **)(lVar7 + 0x50) = __s_00;
              *(int *)(lVar7 + 0x48) = iVar2 + 1;
              *(long **)((long)__s_00 + (long)iVar2 * 8) = __s;
              goto joined_r0x0105f250;
            }
          }
          iVar3 = 0x40;
        }
        else {
          iVar3 = 10;
        }
      }
      *(long *)(lVar7 + 0x50) = lVar5;
    }
    lVar7 = *(long *)(*__s + 0xb8);
    if (*(code **)(__s[2] + 0x10) != (code *)0x0) {
      (**(code **)(__s[2] + 0x10))(__s);
    }
    (**(code **)(lVar7 + 0x10))(lVar7,__s);
  }
  __s = (long *)0x0;
joined_r0x0105f250:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = __s;
  }
  return iVar3;
}

