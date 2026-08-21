
/* WARNING: Removing unreachable block (ram,0x01261a6c) */
/* WARNING: Removing unreachable block (ram,0x01261b94) */

void FUN_01261928(long param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong __size;
  long *plVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    lVar2 = __strlen_chk("::operator ",0xc);
    FUN_01258064(param_2,"::operator ","::operator " + lVar2);
  }
  lVar2 = __strlen_chk("new",4);
  FUN_01258064(param_2,"new","operator new" + lVar2 + 9);
  if (*(char *)(param_1 + 0x39) != '\0') {
    lVar2 = __strlen_chk("[]",3);
    FUN_01258064(param_2,"[]","operator delete[]" + lVar2 + 0xf);
  }
  lVar2 = param_2[1];
  __size = lVar2 + 1;
  if (__size < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (__size <= uVar5) {
      __size = uVar5;
    }
    param_2[2] = __size;
    pvVar3 = realloc((void *)*param_2,__size);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = param_2[1];
    __size = lVar2 + 1;
  }
  param_2[1] = __size;
  *(undefined1 *)((long)pvVar3 + lVar2) = 0x20;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = __strlen_chk("(",2);
    FUN_01258064(param_2,"(","sizeof... (" + lVar2 + 10);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar7 = param_2[1];
      lVar2 = 0;
      bVar1 = true;
      lVar4 = lVar7;
      while( true ) {
        plVar6 = *(long **)(*(long *)(param_1 + 0x10) + lVar2 * 8);
        (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
        if (*(char *)((long)plVar6 + 9) != '\x01') {
          (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
        }
        if (lVar4 == param_2[1]) {
          param_2[1] = lVar7;
        }
        else {
          bVar1 = false;
          lVar7 = param_2[1];
        }
        lVar2 = lVar2 + 1;
        if (lVar2 == *(long *)(param_1 + 0x18)) break;
        lVar4 = lVar7;
        if (!bVar1) {
          lVar4 = __strlen_chk(&DAT_01458dec,3);
          FUN_01258064(param_2,&DAT_01458dec,&DAT_01458dec + lVar4);
          lVar4 = param_2[1];
        }
      }
    }
    lVar2 = __strlen_chk(&DAT_013d1656,2);
    FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar2);
  }
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = __strlen_chk("(",2);
    FUN_01258064(param_2,"(","sizeof... (" + lVar2 + 10);
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar7 = param_2[1];
      lVar2 = 0;
      bVar1 = true;
      lVar4 = lVar7;
      while( true ) {
        plVar6 = *(long **)(*(long *)(param_1 + 0x28) + lVar2 * 8);
        (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
        if (*(char *)((long)plVar6 + 9) != '\x01') {
          (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
        }
        if (lVar4 == param_2[1]) {
          param_2[1] = lVar7;
        }
        else {
          bVar1 = false;
          lVar7 = param_2[1];
        }
        lVar2 = lVar2 + 1;
        if (lVar2 == *(long *)(param_1 + 0x30)) break;
        lVar4 = lVar7;
        if (!bVar1) {
          lVar4 = __strlen_chk(&DAT_01458dec,3);
          FUN_01258064(param_2,&DAT_01458dec,&DAT_01458dec + lVar4);
          lVar4 = param_2[1];
        }
      }
    }
    lVar2 = __strlen_chk(&DAT_013d1656,2);
    FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar2);
    return;
  }
  return;
}

