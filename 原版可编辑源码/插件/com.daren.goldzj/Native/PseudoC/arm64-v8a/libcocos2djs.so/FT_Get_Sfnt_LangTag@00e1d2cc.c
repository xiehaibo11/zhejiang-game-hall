
undefined4 FT_Get_Sfnt_LangTag(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  void *__s;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  if (param_1 == 0) {
    return 6;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 6;
  }
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
    return 6;
  }
  if (*(short *)(param_1 + 0x238) != 1) {
    return 8;
  }
  uVar3 = param_2 - 0x8000;
  if (param_2 < 0x8000 || uVar3 == 0) {
    return 6;
  }
  if (*(uint *)(param_1 + 0x250) <= uVar3) {
    return 6;
  }
  lVar7 = *(long *)(param_1 + 600);
  puVar10 = (ushort *)(lVar7 + (ulong)uVar3 * 0x18);
  puVar9 = puVar10 + 8;
  uVar6 = (ulong)*puVar10;
  if ((uVar6 == 0) || (*(long *)puVar9 != 0)) goto LAB_00e1d458;
  lVar1 = *(long *)(param_1 + 0xb8);
  plVar2 = *(long **)(param_1 + 0xc0);
  __s = (void *)(**(code **)(lVar1 + 8))(lVar1,uVar6);
  if (__s == (void *)0x0) {
    puVar9[0] = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
  }
  else {
    memset(__s,0,uVar6);
    *(void **)puVar9 = __s;
    uVar6 = *(ulong *)(lVar7 + (ulong)uVar3 * 0x18 + 8);
    if ((code *)plVar2[5] == (code *)0x0) {
      uVar8 = plVar2[1];
      if (uVar6 <= uVar8) {
        uVar4 = uVar8 - uVar6;
        plVar2[2] = uVar6;
        if (uVar6 <= uVar8 && uVar4 != 0) goto LAB_00e1d404;
      }
    }
    else {
      lVar7 = (*(code *)plVar2[5])(plVar2,uVar6,0,0);
      if (lVar7 == 0) {
        __s = *(void **)puVar9;
        uVar4 = plVar2[1] - uVar6;
        plVar2[2] = uVar6;
        if (uVar6 <= (ulong)plVar2[1] && uVar4 != 0) {
LAB_00e1d404:
          uVar8 = (ulong)*puVar10;
          if ((code *)plVar2[5] == (code *)0x0) {
            __n = uVar8;
            if (uVar4 <= uVar8) {
              __n = uVar4;
            }
            memcpy(__s,(void *)(*plVar2 + uVar6),__n);
            plVar2[2] = __n + uVar6;
          }
          else {
            __n = (*(code *)plVar2[5])(plVar2,uVar6,__s,uVar8);
            plVar2[2] = __n + uVar6;
          }
          if (uVar8 <= __n) {
            uVar6 = (ulong)*puVar10;
            goto LAB_00e1d458;
          }
        }
      }
    }
    if (*(long *)puVar9 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
  }
  uVar6 = 0;
  puVar9[0] = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar10 = 0;
LAB_00e1d458:
  uVar5 = *(undefined8 *)puVar9;
  *(int *)(param_3 + 1) = (int)uVar6;
  *param_3 = uVar5;
  return 0;
}

