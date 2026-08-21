
/* cocos2d::ccBindVertexArray(unsigned int) */

void cocos2d::ccBindVertexArray(uint param_1)

{
  if (DAT_01d1b2e8 == param_1) {
    return;
  }
  DAT_01d1b2e8 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00891760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glBindVertexArrayOESEXT)();
  return;
}

