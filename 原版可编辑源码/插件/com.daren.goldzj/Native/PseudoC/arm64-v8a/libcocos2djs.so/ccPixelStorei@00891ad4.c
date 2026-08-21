
/* cocos2d::ccPixelStorei(unsigned int, int) */

void cocos2d::ccPixelStorei(uint param_1,int param_2)

{
  if ((int)param_1 < 0x9241) {
    if (param_1 == 0xcf5) {
      if (DAT_01d1b2ec != param_2) {
        glPixelStorei(0xcf5,param_2);
        DAT_01d1b2ec = param_2;
      }
    }
    else {
      if (param_1 != 0x9240) {
LAB_00891b30:
        glPixelStorei(param_1,param_2);
        return;
      }
      DAT_01d36d1c = param_2 != 0;
    }
  }
  else if (param_1 == 0x9241) {
    DAT_01d36d20 = param_2 != 0;
  }
  else if (param_1 != 0x9243) goto LAB_00891b30;
  return;
}

