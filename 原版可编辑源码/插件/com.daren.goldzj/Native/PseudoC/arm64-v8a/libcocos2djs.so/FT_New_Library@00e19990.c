
undefined8 FT_New_Library(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 6;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)(param_1 + 8))(param_1,400);
    if (plVar2 == (long *)0x0) {
      return 0x40;
    }
    plVar2[0x31] = 0;
    plVar2[0x30] = 0;
    *(undefined8 *)((long)plVar2 + 0x17c) = 0;
    *(undefined8 *)((long)plVar2 + 0x174) = 0;
    *(undefined8 *)((long)plVar2 + 0x16c) = 0;
    *(undefined8 *)((long)plVar2 + 0x164) = 0;
    *(undefined8 *)((long)plVar2 + 0x15c) = 0;
    *(undefined8 *)((long)plVar2 + 0x154) = 0;
    *(undefined8 *)((long)plVar2 + 0x14c) = 0;
    *(undefined8 *)((long)plVar2 + 0x144) = 0;
    *(undefined8 *)((long)plVar2 + 0x13c) = 0;
    *(undefined8 *)((long)plVar2 + 0x134) = 0;
    *(undefined8 *)((long)plVar2 + 300) = 0;
    *(undefined8 *)((long)plVar2 + 0x124) = 0;
    *(undefined8 *)((long)plVar2 + 0x11c) = 0;
    *(undefined8 *)((long)plVar2 + 0x114) = 0;
    *(undefined8 *)((long)plVar2 + 0x10c) = 0;
    *(undefined8 *)((long)plVar2 + 0x104) = 0;
    *(undefined8 *)((long)plVar2 + 0xfc) = 0;
    *(undefined8 *)((long)plVar2 + 0xf4) = 0;
    *(undefined8 *)((long)plVar2 + 0xec) = 0;
    *(undefined8 *)((long)plVar2 + 0xe4) = 0;
    *(undefined8 *)((long)plVar2 + 0xdc) = 0;
    *(undefined8 *)((long)plVar2 + 0xd4) = 0;
    *(undefined8 *)((long)plVar2 + 0xcc) = 0;
    *(undefined8 *)((long)plVar2 + 0xc4) = 0;
    *(undefined8 *)((long)plVar2 + 0xbc) = 0;
    *(undefined8 *)((long)plVar2 + 0xb4) = 0;
    *(undefined8 *)((long)plVar2 + 0xac) = 0;
    *(undefined8 *)((long)plVar2 + 0xa4) = 0;
    *(undefined8 *)((long)plVar2 + 0x9c) = 0;
    *(undefined8 *)((long)plVar2 + 0x94) = 0;
    *(undefined8 *)((long)plVar2 + 0x8c) = 0;
    *(undefined8 *)((long)plVar2 + 0x84) = 0;
    *(undefined8 *)((long)plVar2 + 0x7c) = 0;
    *(undefined8 *)((long)plVar2 + 0x74) = 0;
    *(undefined8 *)((long)plVar2 + 0x6c) = 0;
    *(undefined8 *)((long)plVar2 + 100) = 0;
    *(undefined8 *)((long)plVar2 + 0x5c) = 0;
    *(undefined8 *)((long)plVar2 + 0x54) = 0;
    *(undefined8 *)((long)plVar2 + 0x4c) = 0;
    *(undefined8 *)((long)plVar2 + 0x44) = 0;
    *(undefined8 *)((long)plVar2 + 0x3c) = 0;
    *(undefined8 *)((long)plVar2 + 0x34) = 0;
    *(undefined8 *)((long)plVar2 + 0x2c) = 0;
    *(undefined8 *)((long)plVar2 + 0x24) = 0;
    *(undefined8 *)((long)plVar2 + 0x1c) = 0;
    *(undefined8 *)((long)plVar2 + 0x14) = 0;
    uVar1 = 0;
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)(plVar2 + 0x31) = 1;
    plVar2[1] = 0xa00000002;
    *param_2 = plVar2;
  }
  return uVar1;
}

