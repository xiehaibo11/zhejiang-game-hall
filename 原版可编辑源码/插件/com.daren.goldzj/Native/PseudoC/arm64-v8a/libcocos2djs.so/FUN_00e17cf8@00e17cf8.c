
int FUN_00e17cf8(size_t *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long *__s;
  uint uVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == (size_t *)0x0) {
    return 6;
  }
  if (param_3 == (long *)0x0) {
    return 6;
  }
  lVar8 = *param_3;
  if (lVar8 == 0) {
    return 6;
  }
  __n = *param_1;
  lVar5 = *(long *)(lVar8 + 0xb8);
  if ((long)__n < 1) {
    __s = (long *)0x0;
    if (__n == 0) goto LAB_00e17d8c;
    iVar3 = 6;
  }
  else {
    __s = (long *)(**(code **)(lVar5 + 8))(lVar5,__n);
    if (__s == (long *)0x0) {
      iVar3 = 0x40;
      goto joined_r0x00e17de4;
    }
    memset(__s,0,__n);
LAB_00e17d8c:
    lVar7 = param_3[1];
    lVar9 = *param_3;
    __s[2] = (long)param_1;
    __s[1] = lVar7;
    *__s = lVar9;
    if (((code *)param_1[1] == (code *)0x0) ||
       (iVar3 = (*(code *)param_1[1])(__s,param_2), iVar3 == 0)) {
      uVar4 = *(uint *)(lVar8 + 0x48);
      lVar7 = (long)(int)uVar4;
      lVar9 = lVar7 + 1;
      if (-1 < (int)((uint)lVar9 | uVar4)) {
        lVar6 = *(long *)(lVar8 + 0x50);
        if ((uint)lVar9 == 0) {
          if (lVar6 == 0) {
            lVar6 = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
          }
          else {
            (**(code **)(lVar5 + 0x10))(lVar5,lVar6);
            lVar6 = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
          }
        }
        else {
          if (0xffffffe < (int)uVar4) {
            iVar3 = 10;
            goto LAB_00e17df0;
          }
          if (uVar4 == 0) {
            lVar6 = (**(code **)(lVar5 + 8))(lVar5,8);
            bVar2 = lVar6 == 0;
          }
          else {
            lVar5 = (**(code **)(lVar5 + 0x18))(lVar5,lVar7 << 3,lVar9 * 8,lVar6);
            bVar2 = lVar5 == 0;
            if (!bVar2) {
              lVar6 = lVar5;
            }
          }
          uVar4 = (uint)bVar2;
          iVar3 = uVar4 << 6;
          if ((uVar4 == 0) && (lVar6 != 0)) {
            memset((void *)(lVar6 + lVar7 * 8),0,(lVar9 - lVar7) * 8);
            *(long *)(lVar8 + 0x50) = lVar6;
          }
          else {
            *(long *)(lVar8 + 0x50) = lVar6;
            if (uVar4 != 0) goto LAB_00e17df0;
          }
        }
        iVar1 = *(int *)(lVar8 + 0x48);
        iVar3 = 0;
        *(int *)(lVar8 + 0x48) = iVar1 + 1;
        *(long **)(lVar6 + (long)iVar1 * 8) = __s;
        goto joined_r0x00e17de4;
      }
      iVar3 = 6;
    }
LAB_00e17df0:
    lVar8 = *(long *)(*__s + 0xb8);
    if (*(code **)(__s[2] + 0x10) != (code *)0x0) {
      (**(code **)(__s[2] + 0x10))(__s);
    }
    (**(code **)(lVar8 + 0x10))(lVar8,__s);
  }
  __s = (long *)0x0;
joined_r0x00e17de4:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = __s;
  }
  return iVar3;
}

