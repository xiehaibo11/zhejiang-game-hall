
undefined8 inflateReset2(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((param_1 != 0) && (puVar3 = *(undefined8 **)(param_1 + 0x38), puVar3 != (undefined8 *)0x0)) {
    if ((int)param_2 < 0) {
      iVar4 = 0;
      uVar1 = -param_2;
    }
    else {
      iVar4 = (param_2 >> 4) + 1;
      uVar1 = param_2 & 0xf;
      if (0x2f < (int)param_2) {
        uVar1 = param_2;
      }
    }
    if ((uVar1 == 0) || ((uVar1 & 0xfffffff8) == 8)) {
      if ((puVar3[8] == 0) || (*(uint *)(puVar3 + 6) == uVar1)) {
        *(int *)(puVar3 + 1) = iVar4;
        *(uint *)(puVar3 + 6) = uVar1;
        puVar2 = puVar3;
      }
      else {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
        puVar3[8] = 0;
        puVar2 = *(undefined8 **)(param_1 + 0x38);
        *(int *)(puVar3 + 1) = iVar4;
        *(uint *)(puVar3 + 6) = uVar1;
        if (puVar2 == (undefined8 *)0x0) {
          return 0xfffffffe;
        }
      }
      *(undefined8 *)((long)puVar2 + 0x34) = 0;
      *(undefined4 *)((long)puVar2 + 0x3c) = 0;
      puVar2[4] = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(uint *)(puVar2 + 1) != 0) {
        *(ulong *)(param_1 + 0x60) = (ulong)(*(uint *)(puVar2 + 1) & 1);
      }
      *(undefined4 *)((long)puVar2 + 0x14) = 0x8000;
      puVar3 = puVar2 + 0xaa;
      puVar2[0x11] = puVar3;
      puVar2[0xc] = puVar3;
      puVar2[0xd] = puVar3;
      *(undefined4 *)(puVar2 + 0x37c) = 1;
      *(undefined4 *)((long)puVar2 + 0x1be4) = 0xffffffff;
      *puVar2 = 0;
      *(undefined4 *)((long)puVar2 + 0xc) = 0;
      puVar2[5] = 0;
      puVar2[9] = 0;
      *(undefined4 *)(puVar2 + 10) = 0;
      return 0;
    }
  }
  return 0xfffffffe;
}

