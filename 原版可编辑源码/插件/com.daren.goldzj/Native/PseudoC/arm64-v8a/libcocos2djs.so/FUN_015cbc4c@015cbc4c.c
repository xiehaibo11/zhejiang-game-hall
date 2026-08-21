
void FUN_015cbc4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cc9768;
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
  }
  *param_1 = &PTR__Decoder_01cbc3a8;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[8]);
  return;
}

