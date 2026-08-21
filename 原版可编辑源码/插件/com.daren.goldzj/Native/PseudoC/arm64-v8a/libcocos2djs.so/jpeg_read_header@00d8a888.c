
undefined8 jpeg_read_header(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0x24);
  if ((uVar1 & 0xfffffffe) != 200) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x15;
    *(uint *)((long)puVar3 + 0x2c) = uVar1;
    (*(code *)*puVar3)(param_1);
  }
  uVar2 = jpeg_consume_input(param_1);
  if ((int)uVar2 == 2) {
    if (param_2 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x35;
      (*(code *)*puVar3)(param_1);
    }
    jpeg_abort(param_1);
    uVar2 = 2;
  }
  return uVar2;
}

