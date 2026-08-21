
void FUN_00f0fb8c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  if (((plVar1[0x7a] != 0) && ((int)plVar1[0x61] == 0)) &&
     (*(long *)(*param_2 + 0x38) == plVar1[0x7a])) {
    plVar1[0x7a] = 0;
    fVar3 = *(float *)((long)plVar1 + 0x424);
    (**(code **)(*plVar1 + 0x530))(plVar1,plVar1 + 0x6c);
    if (((int)plVar1[0x61] != 3) && (*(float *)((long)plVar1 + 0x424) != fVar3)) {
      *(float *)((long)plVar1 + 0x424) = fVar3;
      *(undefined1 *)((long)plVar1 + 0x30c) = 1;
    }
    for (plVar2 = (long *)plVar1[0xca]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      (**(code **)(*plVar1 + 0x5d0))(plVar1,*(undefined4 *)(plVar2 + 2));
    }
  }
  return;
}

