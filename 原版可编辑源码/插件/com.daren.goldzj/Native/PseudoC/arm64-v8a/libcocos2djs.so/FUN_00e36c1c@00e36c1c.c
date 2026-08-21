
void FUN_00e36c1c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x368) != 0) {
      FUN_00e139fc(uVar1);
      *(undefined8 *)(param_1 + 0x368) = 0;
      *(undefined4 *)(param_1 + 0x360) = 0;
    }
    FUN_00e3917c(param_1);
    *(undefined8 *)(param_1 + 0x350) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x298) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x290));
    *(undefined8 *)(param_1 + 0x290) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x288));
    *(undefined8 *)(param_1 + 0x288) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x268));
    *(undefined8 *)(param_1 + 0x268) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x270));
    *(undefined8 *)(param_1 + 0x270) = 0;
    FUN_00e14580(*(undefined8 *)(param_1 + 0x278),uVar1);
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x278));
    *(undefined8 *)(param_1 + 0x278) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x248));
    *(undefined8 *)(param_1 + 0x248) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x238));
    *(undefined8 *)(param_1 + 0x238) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x240));
    *(undefined8 *)(param_1 + 0x240) = 0;
    FUN_00e139fc(uVar1,*(undefined8 *)(param_1 + 0x218));
    lVar2 = *(long *)(param_1 + 0x318);
    *(undefined8 *)(param_1 + 0x218) = 0;
    if (lVar2 != 0) {
      FUN_00e139fc(uVar1,*(undefined8 *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined4 *)(lVar2 + 0x50) = 0;
      FUN_00e139fc(uVar1,*(undefined8 *)(lVar2 + 0x38));
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined4 *)(lVar2 + 0x40) = 0;
      FUN_00e139fc(uVar1,lVar2);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

