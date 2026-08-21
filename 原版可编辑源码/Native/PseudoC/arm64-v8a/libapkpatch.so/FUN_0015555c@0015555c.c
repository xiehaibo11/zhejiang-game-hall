
void FUN_0015555c(long *param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  
  if (param_1[1] != 0) {
    lVar7 = param_2[1];
    lVar5 = 0;
    bVar6 = true;
    do {
      lVar2 = lVar7;
      if (!bVar6) {
        __size = lVar7 + 2;
        if (__size < (ulong)param_2[2]) {
          pvVar1 = (void *)*param_2;
        }
        else {
          uVar3 = param_2[2] << 1;
          if (__size <= uVar3) {
            __size = uVar3;
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
      plVar4 = *(long **)(*param_1 + lVar5 * 8);
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      if (*(char *)((long)plVar4 + 9) != '\x01') {
        (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      }
      if (lVar2 == param_2[1]) {
        param_2[1] = lVar7;
      }
      else {
        bVar6 = false;
        lVar7 = param_2[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_1[1]);
  }
  return;
}

