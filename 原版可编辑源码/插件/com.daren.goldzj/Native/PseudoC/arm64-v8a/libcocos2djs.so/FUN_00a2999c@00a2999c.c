
undefined8 FUN_00a2999c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char *)((long)param_1 + 0x3bf) == '\0') {
    uVar2 = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0x3bb) == '\0') {
      if (*(char *)((long)param_1 + 0x3be) == '\0') {
        puVar1 = param_1 + 0x1a;
        if (param_2 != 1) {
          puVar1 = param_1 + 0x18;
        }
      }
      else {
        puVar1 = param_1 + 0x2d;
      }
    }
    else {
      puVar1 = param_1 + 0x1d;
    }
    uVar2 = *puVar1;
    if (*(char *)((long)param_1 + 0x3bc) == '\0') {
      if (*(char *)((long)param_1 + 0x3be) == '\0') {
        if (param_2 == 1) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x35);
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x34);
        }
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x2f);
      }
    }
    else {
      uVar3 = *(uint *)((long)param_1 + 0x1a4);
    }
    *(undefined1 *)((long)param_1 + 0x3db) = 1;
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 4:
    case 6:
      uVar2 = FUN_00a37af4(param_1[0x29],uVar2,uVar3,param_2,param_1);
      break;
    case 5:
    case 7:
      uVar2 = FUN_00a37fb8(param_1[0x29],param_1[0x2a],uVar2,uVar3,param_2,param_1);
      break;
    default:
      FUN_00a23020(*param_1,"unknown proxytype option given");
      uVar2 = 7;
    }
    *(undefined1 *)((long)param_1 + 0x3db) = 0;
  }
  return uVar2;
}

