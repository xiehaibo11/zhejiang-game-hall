
void FT_GlyphLoader_Reset(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 0105af90 to 0115b05f has its CatchHandler @ 0105af58 */
  lVar1 = *param_1;
  if (param_1[4] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[5] = 0;
  if (param_1[6] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[6] = 0;
  if (param_1[8] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[8] = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
                    /* catch() { ... } // from try @ 0105af88 with catch @ 0105b044 */
  memcpy(param_1 + 0xc,param_1 + 3,0x48);
  return;
}

