
/* cocostudio::JsonLocalizationManager::getInstance() */

void cocostudio::JsonLocalizationManager::getInstance(void)

{
  if ((DAT_01786b28 == (undefined8 *)0x0) &&
     (DAT_01786b28 = operator_new(0x10,(nothrow_t *)&std::nothrow),
     DAT_01786b28 != (undefined8 *)0x0)) {
    *DAT_01786b28 = &PTR__JsonLocalizationManager_016ce3a8;
    DAT_01786b28[1] = 0;
  }
  return;
}

