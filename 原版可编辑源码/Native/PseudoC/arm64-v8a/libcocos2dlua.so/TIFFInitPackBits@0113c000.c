
undefined8 TIFFInitPackBits(long param_1)

{
  *(code **)(param_1 + 0x2e8) = FUN_0113c280;
                    /* try { // try from 0113c014 to 0123c01f has its CatchHandler @ 0113c638 */
  *(code **)(param_1 + 0x2f0) = FUN_0113c2d4;
                    /* try { // try from 0113c04c to 0123c057 has its CatchHandler @ 0113c600 */
  *(code **)(param_1 + 0x300) = FUN_0113c2f4;
  *(code **)(param_1 + 0x2f8) = FUN_0113c060;
  *(code **)(param_1 + 0x310) = FUN_0113c820;
  *(code **)(param_1 + 0x308) = FUN_0113c060;
  *(code **)(param_1 + 800) = FUN_0113c820;
  *(code **)(param_1 + 0x318) = FUN_0113c060;
  return 1;
}

