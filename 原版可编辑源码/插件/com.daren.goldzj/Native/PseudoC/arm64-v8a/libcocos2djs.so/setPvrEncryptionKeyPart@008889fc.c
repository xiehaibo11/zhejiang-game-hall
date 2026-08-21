
/* cocos2d::ZipUtils::setPvrEncryptionKeyPart(int, unsigned int) */

void cocos2d::ZipUtils::setPvrEncryptionKeyPart(int param_1,uint param_2)

{
  if ((&s_uEncryptedPvrKeyParts)[param_1] != param_2) {
    (&s_uEncryptedPvrKeyParts)[param_1] = param_2;
    s_bEncryptionKeyIsValid = 0;
  }
  return;
}

