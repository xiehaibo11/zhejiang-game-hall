
/* cocostudio::JsonLocalizationManager::destroyInstance() */

void cocostudio::JsonLocalizationManager::destroyInstance(void)

{
  if (DAT_01786b28 != (long *)0x0) {
    (**(code **)(*DAT_01786b28 + 8))();
    DAT_01786b28 = (long *)0x0;
  }
  return;
}

