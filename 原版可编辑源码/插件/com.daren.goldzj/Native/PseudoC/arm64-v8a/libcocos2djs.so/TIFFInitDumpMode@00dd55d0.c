
undefined8 TIFFInitDumpMode(long param_1)

{
  *(code **)(param_1 + 0x2c0) = FUN_00dd5624;
  *(code **)(param_1 + 0x300) = FUN_00dd56b8;
  *(code **)(param_1 + 0x2f8) = FUN_00dd562c;
  *(code **)(param_1 + 0x310) = FUN_00dd56b8;
  *(code **)(param_1 + 0x308) = FUN_00dd562c;
  *(code **)(param_1 + 800) = FUN_00dd56b8;
  *(code **)(param_1 + 0x318) = FUN_00dd562c;
  *(code **)(param_1 + 0x330) = FUN_00dd5770;
  return 1;
}

