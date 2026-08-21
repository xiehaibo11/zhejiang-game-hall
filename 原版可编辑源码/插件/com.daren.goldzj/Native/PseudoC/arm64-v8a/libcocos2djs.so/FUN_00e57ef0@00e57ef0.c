
void FUN_00e57ef0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x370);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    if (lVar2 != 0) {
      if (*(code **)(lVar2 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar2 + 0xa0))(param_1);
      }
      if (*(code **)(lVar2 + 200) != (code *)0x0) {
        (**(code **)(lVar2 + 200))(param_1);
      }
      if (*(code **)(lVar2 + 0xf0) != (code *)0x0) {
        (**(code **)(lVar2 + 0xf0))(param_1);
        (**(code **)(lVar2 + 0xf8))(param_1);
      }
    }
    if (*(char *)(param_1 + 0x58c) != '\0') {
      if (*(long *)(param_1 + 0x568) != 0) {
        FUN_00e1d86c(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x568);
      }
      *(undefined8 *)(param_1 + 0x578) = 0;
      *(undefined8 *)(param_1 + 0x570) = 0;
      *(undefined8 *)(param_1 + 0x580) = 0;
    }
    FUN_00e1d86c(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x548);
    *(undefined4 *)(param_1 + 0x560) = 0;
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined8 *)(param_1 + 0x550) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined2 *)(param_1 + 0x120) = 0;
    FUN_00e1d86c(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x330);
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x220));
      *(undefined8 *)(param_1 + 0x220) = 0;
      FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x228));
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x3a0));
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined2 *)(param_1 + 0x39a) = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x68))(param_1);
    }
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x540));
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x4a0));
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x4d0));
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x420));
    *(undefined8 *)(param_1 + 0x420) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x428));
    *(undefined8 *)(param_1 + 0x428) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x448));
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  return;
}

