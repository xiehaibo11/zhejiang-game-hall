
/* dragonBones::SlotData::createColor() */

void dragonBones::SlotData::createColor(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = operator_new(0x20);
  auVar2 = NEON_fmov(0x3f800000,4);
  puVar1[1] = auVar2._8_8_;
  *puVar1 = auVar2._0_8_;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

