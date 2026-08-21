
undefined8 cpSpaceArbiterSetFilter(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  iVar3 = *(int *)(param_2 + 0x30);
  iVar4 = *(int *)(param_1 + 0x8c);
  iVar6 = cpBodyGetType(uVar1);
  if (((iVar6 != 2) && (cVar5 = cpBodyIsSleeping(uVar1), cVar5 == '\0')) ||
     ((iVar6 = cpBodyGetType(uVar2), iVar6 != 2 && (cVar5 = cpBodyIsSleeping(uVar2), cVar5 == '\0'))
     )) {
    if ((iVar3 != iVar4) && (*(int *)(param_1 + 0x90) != 3)) {
      *(undefined4 *)(param_1 + 0x90) = 3;
      (**(code **)(*(long *)(param_1 + 0x70) + 0x28))
                (param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x30));
    }
    if (*(uint *)(param_2 + 0x20) <= (uint)(iVar3 - iVar4)) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      cpArrayPush(*(undefined8 *)(param_2 + 0x90),param_1);
      return 0;
    }
  }
  return 1;
}

