
/* cocostudio::LocalizationHelper::getCurrentManager() */

void cocostudio::LocalizationHelper::getCurrentManager(void)

{
  if (DAT_01786b38 == (undefined8 *)0x0) {
    if ((DAT_01786b30 == (undefined8 *)0x0) &&
       (DAT_01786b30 = operator_new(0x30,(nothrow_t *)&std::nothrow),
       DAT_01786b30 != (undefined8 *)0x0)) {
      DAT_01786b30[2] = 0;
      DAT_01786b30[1] = 0;
      DAT_01786b30[4] = 0;
      DAT_01786b30[3] = 0;
      *DAT_01786b30 = &PTR__BinLocalizationManager_016ce3d8;
      *(undefined4 *)(DAT_01786b30 + 5) = 0x3f800000;
    }
    DAT_01776ce8 = 1;
    DAT_01786b38 = DAT_01786b30;
  }
  return;
}

