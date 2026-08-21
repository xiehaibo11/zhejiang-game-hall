
void FUN_00e26d60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    lVar3 = *(long *)(param_1 + 0x370);
    if (*(code **)(param_1 + 0x498) != (code *)0x0) {
      (**(code **)(param_1 + 0x498))(*(undefined8 *)(param_1 + 0x490));
    }
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(param_1);
    }
    FUN_00e1d86c(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x4f8);
    lVar3 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    FUN_00e139fc(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(param_1 + 0x520));
    *(undefined8 *)(param_1 + 0x520) = 0;
    FUN_00e1d86c(lVar3,param_1 + 0x500);
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x480));
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    FUN_00e1d86c(uVar2,param_1 + 0x460);
    FUN_00e1d86c(uVar2,param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x458) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    FUN_00e2ed84(param_1);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  return;
}

