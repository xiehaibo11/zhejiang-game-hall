
undefined8 FUN_00e145f4(undefined8 param_1,undefined8 param_2,uint *param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *__s;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_58;
  
  plVar10 = *(long **)(param_3 + 8);
  local_58 = param_1;
  uVar4 = (**(code **)(param_3 + 4))(&local_58);
  uVar7 = (ulong)param_3[1];
  uVar2 = 0;
  if (uVar7 != 0) {
    uVar2 = uVar4 / uVar7;
  }
  plVar9 = plVar10 + (uVar4 - uVar2 * uVar7);
  while ((*plVar9 != 0 && (cVar3 = (**(code **)(param_3 + 6))(*plVar9,&local_58), cVar3 == '\0'))) {
    plVar9 = plVar9 + -1;
    if (plVar9 < plVar10) {
      plVar9 = plVar10 + (param_3[1] - 1);
    }
  }
  if (*plVar9 == 0) {
    puVar6 = (undefined8 *)(**(code **)(param_4 + 8))(param_4,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      uVar5 = 0x40;
    }
    else {
      *plVar9 = (long)puVar6;
      *puVar6 = param_1;
      puVar6[1] = param_2;
      if (*param_3 <= param_3[2]) {
        uVar1 = param_3[1];
        plVar10 = *(long **)(param_3 + 8);
        uVar8 = uVar1 << 1;
        *param_3 = uVar8 / 3;
        param_3[1] = uVar8;
        if (uVar8 == 0) {
          param_3[8] = 0;
          param_3[9] = 0;
        }
        else {
          if ((uVar1 & 0x7fffffff) >> 0x1b != 0) {
            param_3[8] = 0;
            param_3[9] = 0;
            return 10;
          }
          __s = (void *)(**(code **)(param_4 + 8))(param_4,(ulong)uVar8 << 3);
          if (__s == (void *)0x0) {
            param_3[8] = 0;
            param_3[9] = 0;
            return 0x40;
          }
          memset(__s,0,(ulong)uVar8 << 3);
          *(void **)(param_3 + 8) = __s;
        }
        if (uVar1 != 0) {
          uVar8 = 0;
          plVar9 = plVar10;
          do {
            if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
              local_58 = *(undefined8 *)*plVar9;
              plVar11 = *(long **)(param_3 + 8);
              uVar4 = (**(code **)(param_3 + 4))(&local_58);
              uVar7 = (ulong)param_3[1];
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar4 / uVar7;
              }
              plVar12 = plVar11 + (uVar4 - uVar2 * uVar7);
              while ((*plVar12 != 0 &&
                     (cVar3 = (**(code **)(param_3 + 6))(*plVar12,&local_58), cVar3 == '\0'))) {
                plVar12 = plVar12 + -1;
                if (plVar12 < plVar11) {
                  plVar12 = plVar11 + (param_3[1] - 1);
                }
              }
              *plVar12 = *plVar9;
            }
            uVar8 = uVar8 + 1;
            plVar9 = plVar9 + 1;
          } while (uVar8 != uVar1);
        }
        if (plVar10 != (long *)0x0) {
          (**(code **)(param_4 + 0x10))(param_4,plVar10);
        }
      }
      uVar5 = 0;
      param_3[2] = param_3[2] + 1;
    }
  }
  else {
    uVar5 = 0;
    *(undefined8 *)(*plVar9 + 8) = param_2;
  }
  return uVar5;
}

