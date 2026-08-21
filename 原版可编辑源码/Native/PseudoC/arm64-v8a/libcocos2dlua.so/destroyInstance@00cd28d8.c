
/* cocostudio::BinLocalizationManager::destroyInstance() */

void cocostudio::BinLocalizationManager::destroyInstance(void)

{
  if (DAT_01786b30 != (long *)0x0) {
    (**(code **)(*DAT_01786b30 + 8))();
    DAT_01786b30 = (long *)0x0;
  }
  return;
}

