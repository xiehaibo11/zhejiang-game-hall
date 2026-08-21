
void FUN_01844180(long *param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  
  if (param_1[1] != 0) {
    lVar6 = 0;
    bVar7 = true;
    lVar8 = param_2[1];
    do {
      lVar2 = lVar8;
      if (!bVar7) {
        __size = lVar8 + 2;
        if (__size < (ulong)param_2[2]) {
          pvVar1 = (void *)*param_2;
        }
        else {
          uVar4 = param_2[2] << 1;
          if (__size <= uVar4) {
            __size = uVar4;
          }
          param_2[2] = __size;
          pvVar1 = realloc((void *)*param_2,__size);
          *param_2 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar2 = param_2[1];
        }
        *(undefined2 *)((long)pvVar1 + lVar2) = 0x202c;
        lVar2 = param_2[1] + 2;
        param_2[1] = lVar2;
      }
      plVar5 = *(long **)(*param_1 + lVar6 * 8);
      (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
      if (*(char *)((long)plVar5 + 9) != '\x01') {
        (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      }
      lVar3 = param_2[1];
      if (lVar2 == lVar3) {
        param_2[1] = lVar8;
        lVar3 = lVar8;
      }
      else {
        bVar7 = false;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar3;
    } while (lVar6 != param_1[1]);
  }
  return;
}

