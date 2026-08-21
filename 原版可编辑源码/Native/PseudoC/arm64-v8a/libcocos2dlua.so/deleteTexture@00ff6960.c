
/* cocos2d::GL::deleteTexture(unsigned int) */

void cocos2d::GL::deleteTexture(uint param_1)

{
  long lVar1;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_0177eb24 == param_1) {
    DAT_0177eb24 = 0xffffffff;
  }
  if (DAT_0177eb28 == param_1) {
    DAT_0177eb28 = 0xffffffff;
  }
  if (DAT_0177eb2c == param_1) {
    DAT_0177eb2c = 0xffffffff;
  }
  if (DAT_0177eb30 == param_1) {
    DAT_0177eb30 = 0xffffffff;
  }
  if (DAT_0177eb34 == param_1) {
    DAT_0177eb34 = 0xffffffff;
  }
  if (DAT_0177eb38 == param_1) {
    DAT_0177eb38 = 0xffffffff;
  }
  if (DAT_0177eb3c == param_1) {
    DAT_0177eb3c = 0xffffffff;
  }
  if (DAT_0177eb40 == param_1) {
    DAT_0177eb40 = 0xffffffff;
  }
  if (DAT_0177eb44 == param_1) {
    DAT_0177eb44 = 0xffffffff;
  }
  if (DAT_0177eb48 == param_1) {
    DAT_0177eb48 = 0xffffffff;
  }
  if (DAT_0177eb4c == param_1) {
    DAT_0177eb4c = 0xffffffff;
  }
  if (DAT_0177eb50 == param_1) {
    DAT_0177eb50 = 0xffffffff;
  }
  if (DAT_0177eb54 == param_1) {
    DAT_0177eb54 = 0xffffffff;
  }
  if (DAT_0177eb58 == param_1) {
    DAT_0177eb58 = 0xffffffff;
  }
  if (DAT_0177eb5c == param_1) {
    DAT_0177eb5c = 0xffffffff;
  }
  if (DAT_0177eb60 == param_1) {
    DAT_0177eb60 = 0xffffffff;
  }
  local_2c = param_1;
  glDeleteTextures(1,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

