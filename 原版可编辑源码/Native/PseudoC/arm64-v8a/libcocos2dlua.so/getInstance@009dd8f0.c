
/* universe::TanGaoXiong::getInstance() */

void universe::TanGaoXiong::getInstance(void)

{
  if (DAT_01782270 == (undefined8 *)0x0) {
    DAT_01782270 = operator_new(0x50);
    DAT_01782270[1] = 0;
    *DAT_01782270 = 0;
    DAT_01782270[3] = 0;
    DAT_01782270[2] = 0;
    DAT_01782270[5] = 0;
    DAT_01782270[4] = 0;
    DAT_01782270[7] = 0;
    DAT_01782270[6] = 0;
    DAT_01782270[9] = 0;
    DAT_01782270[8] = 0;
    *DAT_01782270 = &PTR__TanGaoXiong_016a0108;
  }
  return;
}

