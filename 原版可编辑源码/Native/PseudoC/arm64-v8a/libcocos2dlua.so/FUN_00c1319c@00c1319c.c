
undefined8 FUN_00c1319c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00c29ac0(param_1,1);
  uVar1 = *(uint *)(lVar2 + 0xc);
  if (uVar1 != 0x849858eb) {
    if (uVar1 < 0x849858ec) {
      if ((uVar1 != 0x3af93066) && (uVar1 != 0x539417a8)) {
LAB_00c13238:
        *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xffff7fffffffffff;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xe0) = 0xffff7fffffffffff;
        return 1;
      }
    }
    else if ((uVar1 != 0x9e89d2c9) && (uVar1 != 0xe33ee463)) goto LAB_00c13238;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xfffeffffffffffff;
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xe0) = 0xfffeffffffffffff;
  return 1;
}

