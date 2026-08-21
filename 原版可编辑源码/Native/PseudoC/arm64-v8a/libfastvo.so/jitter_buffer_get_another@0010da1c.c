
undefined8 jitter_buffer_get_another(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  void *__ptr;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  
  uVar5 = 0;
  piVar7 = (int *)(param_1 + 0x1c);
  do {
    if ((*(long *)(piVar7 + -3) != 0) && (*piVar7 == *(int *)(param_1 + 4))) goto LAB_0010da80;
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 8;
  } while (uVar5 < 200);
  if ((int)uVar5 == 200) {
    uVar4 = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  else {
LAB_0010da80:
    lVar2 = param_1 + (uVar5 & 0xffffffff) * 0x20;
    iVar3 = *(int *)(lVar2 + 0x18);
    plVar1 = (long *)(lVar2 + 0x10);
    *(int *)(param_2 + 1) = iVar3;
    if (*(long *)(param_1 + 0x1c30) == 0) {
      __ptr = (void *)*plVar1;
      if (iVar3 != 0) {
        uVar6 = 0;
        do {
          *(undefined1 *)(*param_2 + uVar6) = *(undefined1 *)((long)__ptr + uVar6);
          __ptr = (void *)*plVar1;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_2 + 1));
      }
      free(__ptr);
    }
    else {
      *param_2 = *plVar1;
    }
    *plVar1 = 0;
    param_1 = param_1 + (uVar5 & 0xffffffff) * 0x20;
    uVar4 = 0;
    *(undefined8 *)((long)param_2 + 0xc) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x28);
  }
  return uVar4;
}

