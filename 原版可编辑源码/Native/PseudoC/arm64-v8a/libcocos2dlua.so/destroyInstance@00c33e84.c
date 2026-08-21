
/* cocostudio::ActionManagerEx::destroyInstance() */

void cocostudio::ActionManagerEx::destroyInstance(void)

{
  if (DAT_017856f0 != (ActionManagerEx *)0x0) {
    releaseActions(DAT_017856f0);
    if (DAT_017856f0 != (ActionManagerEx *)0x0) {
      (**(code **)(*(long *)DAT_017856f0 + 8))();
    }
    DAT_017856f0 = (ActionManagerEx *)0x0;
  }
  return;
}

