
/* cocos2d::ZipUtils::setPvrEncryptionKey(unsigned int, unsigned int, unsigned int, unsigned int) */

void cocos2d::ZipUtils::setPvrEncryptionKey(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (s_uEncryptedPvrKeyParts != param_1) {
    s_bEncryptionKeyIsValid = 0;
    s_uEncryptedPvrKeyParts = param_1;
  }
  if (DAT_01d35cd4 != param_2) {
    s_bEncryptionKeyIsValid = 0;
    DAT_01d35cd4 = param_2;
  }
  if (DAT_01d35cd8 != param_3) {
    s_bEncryptionKeyIsValid = 0;
    DAT_01d35cd8 = param_3;
  }
  if (DAT_01d35cdc != param_4) {
    s_bEncryptionKeyIsValid = 0;
    DAT_01d35cdc = param_4;
  }
  return;
}

