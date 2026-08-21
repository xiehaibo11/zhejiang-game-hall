
undefined4 FUN_00a17330(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 0x478);
  lVar1 = *plVar4;
  iVar2 = FUN_00a33fc4(plVar4,plVar4[1],param_1);
  uVar3 = 0x1b;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  if ((plVar4 == *(long **)(param_2 + 0x478)) && (lVar1 != *plVar4)) {
    *(undefined1 *)(param_2 + 0x471) = 0;
    FUN_00a11760(*(undefined8 *)**(long **)(param_2 + 0x478),0);
  }
  return uVar3;
}

