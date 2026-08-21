
undefined8 FUN_0113b2b4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x350);
  puVar2 = *(undefined8 **)(lVar4 + 0x118);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(param_1 + 0x2d8))(param_1);
    puVar2 = *(undefined8 **)(lVar4 + 0x118);
  }
  *(undefined4 *)(lVar4 + 0x80) = 0x1ff0009;
  *(undefined2 *)(lVar4 + 0x84) = 0x102;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x100) = 0;
  *(undefined8 *)(lVar4 + 0x108) = 0;
  *(undefined8 *)(lVar4 + 0xf0) = 10000;
  *(undefined8 *)(lVar4 + 0xf8) = 0;
  lVar3 = 0x23190;
  *(long *)(lVar4 + 0x110) = *(long *)(param_1 + 0x368) + *(long *)(param_1 + 0x370) + -5;
  do {
    puVar1 = (undefined8 *)((long)puVar2 + lVar3);
    lVar3 = lVar3 + -0x100;
    puVar1[0x10] = 0xffffffffffffffff;
    *puVar1 = 0xffffffffffffffff;
    puVar1[0x12] = 0xffffffffffffffff;
    puVar1[2] = 0xffffffffffffffff;
    puVar1[0x14] = 0xffffffffffffffff;
    puVar1[4] = 0xffffffffffffffff;
    puVar1[0x16] = 0xffffffffffffffff;
    puVar1[6] = 0xffffffffffffffff;
    puVar1[0x18] = 0xffffffffffffffff;
    puVar1[8] = 0xffffffffffffffff;
    puVar1[0x1a] = 0xffffffffffffffff;
    puVar1[10] = 0xffffffffffffffff;
    puVar1[0x1c] = 0xffffffffffffffff;
    puVar1[0xc] = 0xffffffffffffffff;
    puVar1[0x1e] = 0xffffffffffffffff;
    puVar1[0xe] = 0xffffffffffffffff;
  } while (lVar3 != -0x70);
  puVar2[2] = 0xffffffffffffffff;
  puVar2[4] = 0xffffffffffffffff;
  puVar2[6] = 0xffffffffffffffff;
  puVar2[8] = 0xffffffffffffffff;
  puVar2[10] = 0xffffffffffffffff;
  puVar2[0xc] = 0xffffffffffffffff;
  puVar2[0xe] = 0xffffffffffffffff;
  puVar2[0x10] = 0xffffffffffffffff;
  *puVar2 = 0xffffffffffffffff;
  *(undefined4 *)(lVar4 + 0xe8) = 0xffff;
  return 1;
}

