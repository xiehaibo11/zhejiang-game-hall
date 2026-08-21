
undefined8 FUN_00e60184(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  *(long *)(param_1 + 0x1420) = param_2;
  *(undefined4 *)(param_1 + 0x1418) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
  auVar1 = NEON_ext(*(undefined1 (*) [16])(param_2 + 0x18),*(undefined1 (*) [16])(param_2 + 0x18),8,
                    1);
  *(long *)(param_1 + 0x18) = auVar1._8_8_;
  *(long *)(param_1 + 0x10) = auVar1._0_8_;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x28);
  return 0;
}

