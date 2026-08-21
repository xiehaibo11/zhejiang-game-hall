
/* cocostudio::timeline::ActionTimelineCache::getInstance() */

void cocostudio::timeline::ActionTimelineCache::getInstance(void)

{
  if ((DAT_017868f8 == (undefined8 *)0x0) &&
     (DAT_017868f8 = operator_new(0x50,(nothrow_t *)&std::nothrow),
     DAT_017868f8 != (undefined8 *)0x0)) {
    DAT_017868f8[5] = 0;
    DAT_017868f8[4] = 0;
    DAT_017868f8[7] = 0;
    DAT_017868f8[6] = 0;
    DAT_017868f8[9] = 0;
    DAT_017868f8[8] = 0;
    DAT_017868f8[1] = 0;
    *DAT_017868f8 = 0;
    DAT_017868f8[3] = 0;
    DAT_017868f8[2] = 0;
    *(undefined4 *)(DAT_017868f8 + 4) = 0x3f800000;
    DAT_017868f8[6] = 0;
    DAT_017868f8[5] = 0;
    DAT_017868f8[8] = 0;
    DAT_017868f8[7] = 0;
    *(undefined4 *)(DAT_017868f8 + 9) = 0x3f800000;
  }
  return;
}

