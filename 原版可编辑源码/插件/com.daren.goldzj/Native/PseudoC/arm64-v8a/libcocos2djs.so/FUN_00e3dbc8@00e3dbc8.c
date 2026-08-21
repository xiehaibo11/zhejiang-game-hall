
void FUN_00e3dbc8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x370) != 0) {
      (**(code **)(*(long *)(param_1 + 0x370) + 0x18))(param_1);
    }
    lVar7 = *(long *)(param_1 + 0x490);
    if (lVar7 != 0) {
      lVar1 = *(long *)(lVar7 + 0xb8);
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (*(long *)(lVar7 + 0xf0) != 0) {
          FUN_00e1d86c();
        }
        FUN_00e139fc(uVar6,*(undefined8 *)(lVar7 + 0xe8));
        *(undefined8 *)(lVar7 + 0xe0) = 0;
        *(undefined8 *)(lVar7 + 0xd8) = 0;
        *(undefined8 *)(lVar7 + 0xf0) = 0;
        *(undefined8 *)(lVar7 + 0xe8) = 0;
        *(undefined8 *)(lVar7 + 0xc0) = 0;
        *(long *)(lVar7 + 0xb8) = 0;
        *(undefined8 *)(lVar7 + 0xd0) = 0;
        *(undefined8 *)(lVar7 + 200) = 0;
      }
      lVar1 = *(long *)(lVar7 + 0x578);
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (*(long *)(lVar7 + 0x5b0) != 0) {
          FUN_00e1d86c(lVar1,lVar7 + 0x5b0);
        }
        FUN_00e139fc(uVar6,*(undefined8 *)(lVar7 + 0x5a8));
        *(undefined8 *)(lVar7 + 0x5a0) = 0;
        *(undefined8 *)(lVar7 + 0x598) = 0;
        *(undefined8 *)(lVar7 + 0x5b0) = 0;
        *(undefined8 *)(lVar7 + 0x5a8) = 0;
        *(undefined8 *)(lVar7 + 0x580) = 0;
        *(undefined8 *)(lVar7 + 0x578) = 0;
        *(undefined8 *)(lVar7 + 0x590) = 0;
        *(undefined8 *)(lVar7 + 0x588) = 0;
      }
      lVar1 = *(long *)(lVar7 + 0x38);
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (*(long *)(lVar7 + 0x70) != 0) {
          FUN_00e1d86c();
        }
        FUN_00e139fc(uVar6,*(undefined8 *)(lVar7 + 0x68));
        *(undefined8 *)(lVar7 + 0x60) = 0;
        *(undefined8 *)(lVar7 + 0x58) = 0;
        *(undefined8 *)(lVar7 + 0x70) = 0;
        *(undefined8 *)(lVar7 + 0x68) = 0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(long *)(lVar7 + 0x38) = 0;
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(undefined8 *)(lVar7 + 0x48) = 0;
      }
      lVar1 = *(long *)(lVar7 + 0x538);
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (*(long *)(lVar7 + 0x570) != 0) {
          FUN_00e1d86c(lVar1,lVar7 + 0x570);
        }
        FUN_00e139fc(uVar6,*(undefined8 *)(lVar7 + 0x568));
        *(undefined8 *)(lVar7 + 0x560) = 0;
        *(undefined8 *)(lVar7 + 0x558) = 0;
        *(undefined8 *)(lVar7 + 0x570) = 0;
        *(undefined8 *)(lVar7 + 0x568) = 0;
        *(undefined8 *)(lVar7 + 0x540) = 0;
        *(undefined8 *)(lVar7 + 0x538) = 0;
        *(undefined8 *)(lVar7 + 0x550) = 0;
        *(undefined8 *)(lVar7 + 0x548) = 0;
      }
      uVar3 = (ulong)*(uint *)(lVar7 + 0xb30);
      if (*(uint *)(lVar7 + 0xb30) != 0) {
        uVar8 = 0;
        do {
          lVar1 = *(long *)(lVar7 + 0xb38 + uVar8 * 8);
          if (lVar1 != 0) {
            lVar2 = *(long *)(lVar1 + 0x478);
            if (lVar2 != 0) {
              uVar6 = *(undefined8 *)(lVar2 + 0x38);
              if (*(long *)(lVar1 + 0x4b0) != 0) {
                FUN_00e1d86c(lVar2,lVar1 + 0x4b0);
              }
              FUN_00e139fc(uVar6,*(undefined8 *)(lVar1 + 0x4a8));
              *(undefined8 *)(lVar1 + 0x4a0) = 0;
              *(undefined8 *)(lVar1 + 0x498) = 0;
              *(undefined8 *)(lVar1 + 0x4b0) = 0;
              *(undefined8 *)(lVar1 + 0x4a8) = 0;
              *(undefined8 *)(lVar1 + 0x480) = 0;
              *(undefined8 *)(lVar1 + 0x478) = 0;
              *(undefined8 *)(lVar1 + 0x490) = 0;
              *(undefined8 *)(lVar1 + 0x488) = 0;
            }
            FUN_00e139fc(uVar5,*(undefined8 *)(lVar1 + 0x4b8));
            *(undefined8 *)(lVar1 + 0x4b8) = 0;
            FUN_00e139fc(uVar5,*(undefined8 *)(lVar1 + 0x438));
            *(undefined8 *)(lVar1 + 0x438) = 0;
            FUN_00e139fc(uVar5,*(undefined8 *)(lVar1 + 0x448));
            *(undefined8 *)(lVar1 + 0x448) = 0;
            FUN_00e139fc(uVar5,*(undefined8 *)(lVar1 + 0x460));
            *(undefined8 *)(lVar1 + 0x460) = 0;
            uVar3 = (ulong)*(uint *)(lVar7 + 0xb30);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
        FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0xb38));
        *(undefined8 *)(lVar7 + 0xb38) = 0;
      }
      *(undefined4 *)(lVar7 + 0xf8) = 0;
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *(undefined4 *)(lVar7 + 0x108) = 0;
      uVar6 = *(undefined8 *)(*(long *)(lVar7 + 8) + 0x38);
      FUN_00e139fc(uVar6,*(undefined8 *)(lVar7 + 0x528));
      *(undefined8 *)(lVar7 + 0x528) = 0;
      *(undefined4 *)(lVar7 + 0x530) = 0;
      FUN_00e139fc(uVar6,*(undefined8 *)(lVar7 + 0x520));
      *(undefined4 *)(lVar7 + 0x510) = 0;
      *(undefined8 *)(lVar7 + 0x520) = 0;
      *(undefined8 *)(lVar7 + 0x518) = 0;
      FUN_00e437bc(lVar7 + 0x1398,uVar5);
      lVar1 = *(long *)(lVar7 + 0xae0);
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (*(long *)(lVar7 + 0xb18) != 0) {
          FUN_00e1d86c(lVar1,lVar7 + 0xb18);
        }
        FUN_00e139fc(uVar6,*(undefined8 *)(lVar7 + 0xb10));
        *(undefined8 *)(lVar7 + 0xb08) = 0;
        *(undefined8 *)(lVar7 + 0xb00) = 0;
        *(undefined8 *)(lVar7 + 0xb18) = 0;
        *(undefined8 *)(lVar7 + 0xb10) = 0;
        *(undefined8 *)(lVar7 + 0xae8) = 0;
        *(undefined8 *)(lVar7 + 0xae0) = 0;
        *(undefined8 *)(lVar7 + 0xaf8) = 0;
        *(undefined8 *)(lVar7 + 0xaf0) = 0;
      }
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0xb20));
      *(undefined8 *)(lVar7 + 0xb20) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0xaa0));
      *(undefined8 *)(lVar7 + 0xaa0) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0xab0));
      *(undefined8 *)(lVar7 + 0xab0) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0xac8));
      *(undefined8 *)(lVar7 + 0xac8) = 0;
      if (*(long *)(lVar7 + 0x1340) != 0) {
        FUN_00e1d86c(*(undefined8 *)(lVar7 + 8),lVar7 + 0x1340);
      }
      *(undefined4 *)(lVar7 + 0x1348) = 0;
      *(undefined1 *)(lVar7 + 0x1338) = 0;
      *(undefined4 *)(lVar7 + 0x133c) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0x1370));
      *(undefined8 *)(lVar7 + 0x1370) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0x638));
      *(undefined8 *)(lVar7 + 0x638) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0x640));
      *(undefined8 *)(lVar7 + 0x640) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0x650));
      *(undefined8 *)(lVar7 + 0x650) = 0;
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0x658));
      *(undefined8 *)(lVar7 + 0x658) = 0;
      if (*(code **)(lVar7 + 0x1390) != (code *)0x0) {
        (**(code **)(lVar7 + 0x1390))(*(undefined8 *)(lVar7 + 5000));
        FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 5000));
        *(undefined8 *)(lVar7 + 5000) = 0;
      }
      FUN_00e139fc(uVar5,*(undefined8 *)(lVar7 + 0x13b8));
      *(undefined8 *)(lVar7 + 0x13b8) = 0;
      FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x490));
      *(undefined8 *)(param_1 + 0x490) = 0;
    }
    if (*(long *)(param_1 + 0x380) != 0) {
      (**(code **)(*(long *)(param_1 + 0x380) + 0x58))(param_1);
    }
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  return;
}

