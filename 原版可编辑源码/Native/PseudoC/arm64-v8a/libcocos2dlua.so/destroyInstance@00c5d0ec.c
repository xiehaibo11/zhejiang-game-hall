
/* cocostudio::DictionaryHelper::destroyInstance() */

void cocostudio::DictionaryHelper::destroyInstance(void)

{
  if (DAT_01785a48 != (void *)0x0) {
    operator_delete(DAT_01785a48);
  }
  DAT_01785a48 = (void *)0x0;
  return;
}

