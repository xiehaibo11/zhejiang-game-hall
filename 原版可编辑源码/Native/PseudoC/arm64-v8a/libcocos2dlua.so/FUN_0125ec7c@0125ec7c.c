
void FUN_0125ec7c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
  plVar5 = *(long **)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  uVar3 = *(uint *)(param_2 + 0x1c);
  if (uVar3 == 0xffffffff) {
    lVar4 = __strlen_chk("...",4);
    FUN_01258064(param_2,"...","track (%p) was released ..." + lVar4 + 0x18);
  }
  else if (uVar3 == 0) {
    *(undefined8 *)(param_2 + 8) = uVar6;
  }
  else if (1 < uVar3) {
    uVar7 = 1;
    do {
      lVar4 = __strlen_chk(&DAT_01458dec,3);
      FUN_01258064(param_2,&DAT_01458dec,&DAT_01458dec + lVar4);
      *(uint *)(param_2 + 0x18) = uVar7;
      plVar5 = *(long **)(param_1 + 0x10);
      (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
      if (*(char *)((long)plVar5 + 9) != '\x01') {
        (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  return;
}

