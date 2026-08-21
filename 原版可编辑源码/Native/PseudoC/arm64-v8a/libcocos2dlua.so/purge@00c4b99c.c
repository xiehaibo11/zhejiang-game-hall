
/* cocostudio::DataReaderHelper::purge() */

void cocostudio::DataReaderHelper::purge(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = _configFileList;
  if (DAT_01785730 != _configFileList) {
    bVar1 = DAT_01785730[-0x18];
    pbVar2 = DAT_01785730;
    pbVar3 = DAT_01785730 + -0x18;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
      if (pbVar4 == pbVar3) break;
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3;
      pbVar3 = pbVar3 + -0x18;
    }
  }
  DAT_01785730 = pbVar4;
  if (_dataReaderHelper != (Ref *)0x0) {
    cocos2d::Ref::release(_dataReaderHelper);
    _dataReaderHelper = (Ref *)0x0;
  }
  return;
}

