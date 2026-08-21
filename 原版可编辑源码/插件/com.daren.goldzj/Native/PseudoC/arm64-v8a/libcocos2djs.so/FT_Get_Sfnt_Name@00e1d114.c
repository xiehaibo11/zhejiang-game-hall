
undefined4 FT_Get_Sfnt_Name(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  void *__s;
  long lVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_1 == 0) {
    return 6;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 6;
  }
  if (((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) || (*(ushort *)(param_1 + 0x230) <= param_2)) {
    return 6;
  }
  lVar9 = *(long *)(param_1 + 0x248);
  uVar10 = (ulong)param_2;
  lVar6 = lVar9 + uVar10 * 0x20;
  puVar8 = (ushort *)(lVar6 + 8);
  uVar7 = (ulong)*puVar8;
  plVar1 = (long *)(lVar6 + 0x18);
  if ((uVar7 == 0) || (*plVar1 != 0)) goto LAB_00e1d284;
  lVar6 = *(long *)(param_1 + 0xb8);
  plVar2 = *(long **)(param_1 + 0xc0);
  __s = (void *)(**(code **)(lVar6 + 8))(lVar6,uVar7);
  if (__s == (void *)0x0) {
    *plVar1 = 0;
  }
  else {
    memset(__s,0,uVar7);
    *plVar1 = (long)__s;
    uVar7 = *(ulong *)(lVar9 + uVar10 * 0x20 + 0x10);
    if ((code *)plVar2[5] == (code *)0x0) {
      uVar4 = plVar2[1];
      if (uVar7 <= uVar4) {
        uVar5 = uVar4 - uVar7;
        plVar2[2] = uVar7;
        if (uVar7 <= uVar4 && uVar5 != 0) goto LAB_00e1d20c;
      }
    }
    else {
      lVar3 = (*(code *)plVar2[5])(plVar2,uVar7,0,0);
      if (lVar3 == 0) {
        __s = (void *)*plVar1;
        uVar5 = plVar2[1] - uVar7;
        plVar2[2] = uVar7;
        if (uVar7 <= (ulong)plVar2[1] && uVar5 != 0) {
LAB_00e1d20c:
          uVar4 = (ulong)*puVar8;
          if ((code *)plVar2[5] == (code *)0x0) {
            __n = uVar4;
            if (uVar5 <= uVar4) {
              __n = uVar5;
            }
            memcpy(__s,(void *)(*plVar2 + uVar7),__n);
          }
          else {
            __n = (*(code *)plVar2[5])(plVar2,uVar7,__s);
          }
          plVar2[2] = __n + uVar7;
          if (uVar4 <= __n) {
            uVar7 = (ulong)*puVar8;
            goto LAB_00e1d284;
          }
        }
      }
    }
    if (*plVar1 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6);
    }
  }
  uVar7 = 0;
  *plVar1 = 0;
  *puVar8 = 0;
LAB_00e1d284:
  *param_3 = *(undefined8 *)(lVar9 + uVar10 * 0x20);
  lVar6 = *plVar1;
  *(int *)(param_3 + 2) = (int)uVar7;
  param_3[1] = lVar6;
  return 0;
}

