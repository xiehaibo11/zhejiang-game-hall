
undefined8 FUN_00e3952c(long param_1,uint param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_a20 [3];
  long lStack_a08;
  undefined1 auStack_558 [1056];
  undefined1 *local_138;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x2b8);
  lVar6 = *(long *)(lVar3 + 0x310);
  uVar8 = *(undefined8 *)(lVar3 + 0x2b0);
  uVar7 = *(undefined8 *)(lVar3 + 0x2a8);
  lVar5 = *(long *)(lVar6 + 0x18);
  plVar4 = *(long **)(*(long *)(lVar3 + 0xf0) + 0x68);
  *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(lVar3 + 0x2c0);
  *(undefined8 *)(param_1 + 0xac8) = uVar2;
  *(undefined8 *)(param_1 + 0xac0) = uVar8;
  *(undefined8 *)(param_1 + 0xab8) = uVar7;
  uVar2 = *(undefined8 *)(lVar3 + 0x2c8);
  *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)(lVar3 + 0x2d0);
  *(undefined8 *)(param_1 + 0xad8) = uVar2;
  if (plVar4 == (long *)0x0) {
    *param_3 = *(undefined8 *)(*(long *)(lVar3 + 0x290) + (ulong)param_2 * 8);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(long *)(lVar3 + 0x298) + (ulong)param_2 * 4);
    cVar1 = *(char *)(param_1 + 0x86);
  }
  else {
    uVar2 = (**(code **)*plVar4)(plVar4[1],param_2,param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    cVar1 = *(char *)(param_1 + 0x86);
  }
  if (cVar1 == '\0') {
    (**(code **)(lVar6 + 0x30))(auStack_558,param_1,1);
    (**(code **)(lVar6 + 0x38))(lVar3,lVar3 + 0x138,local_a20);
    local_138 = (undefined1 *)local_a20;
    uVar2 = (**(code **)(lVar5 + 0x18))(auStack_558,*param_3,(long)*(int *)(param_3 + 1));
    if (((uint)uVar2 & 0xff) == 0xa4) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x130) = 0;
      *param_4 = 1;
      uVar2 = (**(code **)(lVar5 + 0x18))(auStack_558,*param_3,(long)*(int *)(param_3 + 1));
    }
  }
  else {
    uVar2 = (**(code **)(lVar5 + 0x10))(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  }
  if ((plVar4 != (long *)0x0) && ((int)uVar2 == 0)) {
    if (*(long *)(*plVar4 + 0x10) == 0) {
      uVar2 = 0;
    }
    else {
      local_a20[0] = FT_RoundFix(*(undefined8 *)(param_1 + 0x40));
      local_a20[0] = local_a20[0] >> 0x10;
      local_a20[1] = 0;
      local_a20[2] = FT_RoundFix(*(undefined8 *)(param_1 + 0x50));
      local_a20[2] = local_a20[2] >> 0x10;
      lStack_a08 = FT_RoundFix(*(undefined8 *)(param_1 + 0x58));
      lStack_a08 = lStack_a08 >> 0x10;
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4[1],param_2,0,local_a20);
      *(long *)(param_1 + 0x40) = local_a20[0] << 0x10;
      *(long *)(param_1 + 0x58) = lStack_a08 << 0x10;
      *(long *)(param_1 + 0x50) = local_a20[2] << 0x10;
    }
  }
  return uVar2;
}

