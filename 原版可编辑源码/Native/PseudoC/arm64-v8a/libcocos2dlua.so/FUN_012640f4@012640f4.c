
/* WARNING: Removing unreachable block (ram,0x0126415c) */

void FUN_012640f4(long param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong __size;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  lVar2 = __strlen_chk("throw(",7);
  FUN_01258064(param_2,"throw(","throw(" + lVar2);
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    lVar2 = 0;
    bVar1 = true;
    lVar3 = lVar7;
    while( true ) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
      if (*(char *)((long)plVar6 + 9) != '\x01') {
        (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
      }
      if (lVar3 == param_2[1]) {
        param_2[1] = lVar7;
      }
      else {
        bVar1 = false;
        lVar7 = param_2[1];
      }
      lVar2 = lVar2 + 1;
      if (lVar2 == *(long *)(param_1 + 0x18)) break;
      lVar3 = lVar7;
      if (!bVar1) {
        lVar3 = __strlen_chk(&DAT_01458dec,3);
        FUN_01258064(param_2,&DAT_01458dec,&DAT_01458dec + lVar3);
        lVar3 = param_2[1];
      }
    }
  }
  __size = lVar7 + 1;
  if (__size < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (__size <= uVar5) {
      __size = uVar5;
    }
    param_2[2] = __size;
    pvVar4 = realloc((void *)*param_2,__size);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
    __size = lVar7 + 1;
  }
  param_2[1] = __size;
  *(undefined1 *)((long)pvVar4 + lVar7) = 0x29;
  return;
}

