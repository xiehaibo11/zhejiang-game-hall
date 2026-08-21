
undefined8 FUN_00a4e230(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00a3e038(param_1 + 0xc3,0);
  lVar1 = param_1[0xd9];
  *(bool *)param_2 = (int)lVar1 == 0;
  if ((int)uVar2 == 0 && (int)lVar1 == 0) {
    if (*(int *)(*(long *)(*param_1 + 0x218) + 0x18) == 0) {
      *(undefined1 *)((long)param_1 + 0x3c4) = 1;
    }
    else {
      FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    uVar2 = 0;
    *(undefined1 *)((long)param_1 + 0x6a9) = 1;
  }
  return uVar2;
}

