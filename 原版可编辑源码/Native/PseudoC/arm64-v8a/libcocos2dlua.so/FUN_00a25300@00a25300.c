
void FUN_00a25300(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar3 = param_1[0x39];
  *(long *)(lVar1 + 0x8de6) = param_1[0x3a];
  *(long *)(lVar1 + 0x8dde) = lVar3;
  uVar4 = *(undefined8 *)((long)param_1 + 0x1ba);
  *(undefined8 *)(lVar1 + 0x8dd8) = *(undefined8 *)((long)param_1 + 0x1c2);
  *(undefined8 *)(lVar1 + 0x8dd0) = uVar4;
  uVar4 = *(undefined8 *)((long)param_1 + 0x1aa);
  *(undefined8 *)(lVar1 + 0x8dc8) = *(undefined8 *)((long)param_1 + 0x1b2);
  *(undefined8 *)(lVar1 + 0x8dc0) = uVar4;
  lVar1 = *param_1;
  lVar3 = param_1[0x3e];
  *(long *)(lVar1 + 0x8e10) = param_1[0x3f];
  *(long *)(lVar1 + 0x8e08) = lVar3;
  lVar3 = param_1[0x3c];
  *(long *)(lVar1 + 0x8e00) = param_1[0x3d];
  *(long *)(lVar1 + 0x8df8) = lVar3;
  uVar4 = *(undefined8 *)((long)param_1 + 0x1fe);
  *(undefined8 *)(lVar1 + 0x8e1e) = *(undefined8 *)((long)param_1 + 0x206);
  *(undefined8 *)(lVar1 + 0x8e16) = uVar4;
  puVar2 = (undefined8 *)param_1[0x80];
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x8e30) = *puVar2;
  *(undefined4 *)(lVar1 + 0x8e38) = *(undefined4 *)(puVar2 + 0xf);
  *(long *)(lVar1 + 0x8df0) = param_1[0x3b];
  *(long *)(lVar1 + 0x8e28) = param_1[0x42];
  return;
}

