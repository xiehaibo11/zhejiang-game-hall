
/* cocos2d::ccBindBuffer(unsigned int, unsigned int) */

void cocos2d::ccBindBuffer(uint param_1,uint param_2)

{
  if (param_1 == 0x8893) {
    if (DAT_01d1b2e4 != param_2) {
      param_1 = 0x8893;
      DAT_01d1b2e4 = param_2;
      goto LAB_008916b8;
    }
  }
  else {
    if (param_1 != 0x8892) {
LAB_008916b8:
      glBindBuffer(param_1);
      return;
    }
    if (DAT_01d1b2e0 != param_2) {
      DAT_01d1b2e0 = param_2;
      glBindBuffer(0x8892);
      return;
    }
  }
  return;
}

