
void FUN_01171730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x28);
      plVar6 = *(long **)(lVar4 + lVar5 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          plVar1 = (long *)plVar6[1];
          uVar2 = *(undefined8 *)(param_1 + 0x40);
          iVar3 = *(int *)(*plVar6 + 8) + -1;
          *(int *)(*plVar6 + 8) = iVar3;
          if (iVar3 == 0) {
            cpArrayPush(uVar2);
          }
          plVar6[1] = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar6;
          plVar6 = plVar1;
        } while (plVar1 != (long *)0x0);
        lVar4 = *(long *)(param_1 + 0x28);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      *(undefined8 *)(lVar4 + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  local_58 = param_1;
  uStack_50 = param_2;
  local_48 = param_3;
  cpHashSetEach(*(undefined8 *)(param_1 + 0x30),FUN_01171f7c,&local_58);
  cpSpatialIndexCollideStatic(param_1,*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return;
}

