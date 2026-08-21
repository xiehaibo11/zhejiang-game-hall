
void FUN_01532c68(undefined4 *param_1,undefined4 param_2,Zone *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(Zone **)(param_1 + 10) = param_3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(Zone **)(param_1 + 0xe) = param_3;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0x3f800000;
  FUN_01532d50(param_1 + 6,100);
  puVar1 = *(undefined8 **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar1) < 0x20) {
    puVar1 = (undefined8 *)v8::internal::Zone::NewExpand(param_3,0x20);
  }
  else {
    *(undefined8 **)(param_3 + 0x10) = puVar1 + 4;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_3;
  *(undefined8 **)(param_1 + 0x14) = puVar1;
  lVar2 = *(long *)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - lVar2) < 0x20) {
    lVar2 = v8::internal::Zone::NewExpand(param_3,0x20);
  }
  else {
    *(long *)(param_3 + 0x10) = lVar2 + 0x20;
  }
  *(long *)lVar2 = lVar2;
  *(long *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(Zone **)(lVar2 + 0x18) = param_3;
  *(long *)(param_1 + 0x16) = lVar2;
  lVar2 = *(long *)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - lVar2) < 0x20) {
    lVar2 = v8::internal::Zone::NewExpand(param_3,0x20);
  }
  else {
    *(long *)(param_3 + 0x10) = lVar2 + 0x20;
  }
  *(long *)lVar2 = lVar2;
  *(long *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(Zone **)(lVar2 + 0x18) = param_3;
  *(long *)(param_1 + 0x18) = lVar2;
  *(Zone **)(param_1 + 0x1a) = param_3;
  return;
}

