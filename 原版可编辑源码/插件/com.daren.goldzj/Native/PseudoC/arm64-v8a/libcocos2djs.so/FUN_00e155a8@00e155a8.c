
void FUN_00e155a8(long param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0xb0);
  lVar1 = plVar4[2];
  if (*(code **)(plVar4[3] + 0x88) != (code *)0x0) {
    (**(code **)(plVar4[3] + 0x88))(param_1);
  }
  plVar2 = *(long **)(param_1 + 0x128);
  if ((plVar2 == (long *)0x0) || (uVar3 = *(uint *)(plVar2 + 1), (uVar3 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 8) + 0xb8);
      (**(code **)(lVar5 + 0x10))(lVar5,*(long *)(param_1 + 0xa8));
      plVar2 = *(long **)(param_1 + 0x128);
      uVar3 = *(uint *)(plVar2 + 1);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(uint *)(plVar2 + 1) = uVar3 & 0xfffffffe;
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 1) >> 1 & 1) == 0) {
      plVar4 = (long *)*plVar2;
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        if (plVar4[4] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[4] = 0;
        if (plVar4[5] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[5] = 0;
        if (plVar4[6] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[6] = 0;
        if (plVar4[8] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[8] = 0;
        if (plVar4[0xb] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        *(undefined4 *)(plVar4 + 3) = 0;
        plVar4[9] = 0;
        *(undefined4 *)(plVar4 + 10) = 0;
        plVar4[0xd] = plVar4[4];
        plVar4[0xc] = plVar4[3];
        plVar4[0xf] = plVar4[6];
        plVar4[0xe] = plVar4[5];
        plVar4[0xb] = 0;
        plVar4[1] = 0;
        *(undefined4 *)(plVar4 + 2) = 0;
        plVar4[0x14] = 0;
        plVar4[0x11] = plVar4[8];
        plVar4[0x10] = plVar4[7];
        plVar4[0x13] = plVar4[10];
        plVar4[0x12] = plVar4[9];
        (**(code **)(lVar5 + 0x10))(lVar5,plVar4);
        plVar2 = *(long **)(param_1 + 0x128);
      }
      *plVar2 = 0;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  return;
}

