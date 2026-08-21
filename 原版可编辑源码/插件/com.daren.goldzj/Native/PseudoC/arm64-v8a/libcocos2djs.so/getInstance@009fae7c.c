
/* universe::CustomFileManager::getInstance() */

void universe::CustomFileManager::getInstance(void)

{
  if (DAT_01d38a30 == (undefined8 *)0x0) {
    DAT_01d38a30 = operator_new(0x50);
    DAT_01d38a30[7] = 0;
    DAT_01d38a30[6] = 0;
    DAT_01d38a30[9] = 0;
    DAT_01d38a30[8] = 0;
    DAT_01d38a30[3] = 0;
    DAT_01d38a30[2] = 0;
    DAT_01d38a30[5] = 0;
    DAT_01d38a30[4] = 0;
    DAT_01d38a30[1] = 0;
    *DAT_01d38a30 = 0;
    *DAT_01d38a30 = &PTR__CustomFileManager_01c6c570;
  }
  return;
}

