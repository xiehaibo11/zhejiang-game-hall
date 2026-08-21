
/* cocostudio::DictionaryHelper::getInstance() */

void cocostudio::DictionaryHelper::getInstance(void)

{
  if (DAT_01785a48 == (void *)0x0) {
    DAT_01785a48 = operator_new(1,(nothrow_t *)&std::nothrow);
  }
  return;
}

