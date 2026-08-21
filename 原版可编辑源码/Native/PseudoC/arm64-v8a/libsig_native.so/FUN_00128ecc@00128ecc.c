
void FUN_00128ecc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    plVar3 = *(long **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x1c) = 1;
    lVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    while (*(char *)(lVar1 + 8) == '\f') {
      plVar3 = *(long **)(lVar1 + 0x10);
      lVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    if (((*(char *)((long)plVar3 + 10) == '\0') ||
        (((*(char *)((long)plVar3 + 10) == '\x02' &&
          (uVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2), (uVar2 & 1) != 0)) ||
         (*(char *)((long)plVar3 + 0xb) == '\0')))) ||
       ((*(char *)((long)plVar3 + 0xb) == '\x02' &&
        (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), (uVar2 & 1) != 0)))) {
      lVar1 = __strlen_chk(")",2);
      FUN_0011bcc0(param_2,")","operator()" + lVar1 + 9);
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}

