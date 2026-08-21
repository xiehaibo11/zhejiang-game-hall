
long Json_create(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  
  DAT_01787608 = 0;
  if (param_1 != 0) {
    lVar1 = _spCalloc(1,0x30,
                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Json.c",
                      0x4d);
    if (lVar1 == 0) {
      return 0;
    }
    pbVar3 = (byte *)(param_1 + -1);
    do {
      pbVar3 = pbVar3 + 1;
    } while (*pbVar3 - 1 < 0x20);
    lVar2 = FUN_00d6ee50(lVar1);
    if (lVar2 != 0) {
      return lVar1;
    }
    Json_dispose(lVar1);
  }
  return 0;
}

