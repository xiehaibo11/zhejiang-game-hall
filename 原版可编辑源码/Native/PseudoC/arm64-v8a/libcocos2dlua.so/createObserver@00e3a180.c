
/* cocos2d::PUObserverManager::createObserver(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::PUObserverManager::createObserver(PUObserverManager *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  undefined8 uVar4;
  basic_string *pbVar5;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  switch(uVar1) {
  case 6:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"OnTime",6);
    if (iVar3 == 0) {
                    /* try { // try from 00e3a1ec to 00f3a2eb has its CatchHandler @ 00e3a1ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a1ec with catch @ 00e3a1ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a398 with catch @ 00e3a1ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a418 with catch @ 00e3a1ec
                        */
      uVar4 = PUOnTimeObserver::create();
      return uVar4;
    }
    break;
  case 7:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"OnClear",7);
    if (iVar3 == 0) {
      uVar4 = PUOnClearObserver::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"OnCount",7);
    if (iVar3 == 0) {
      uVar4 = PUOnCountObserver::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"OnQuota",7);
    if (iVar3 == 0) {
      uVar4 = PUOnQuotaObserver::create();
      return uVar4;
    }
    break;
  case 8:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(long *)pbVar5 == 0x6572697078456e4f) {
      uVar4 = PUOnExpireObserver::create();
      return uVar4;
    }
    if (*(long *)pbVar5 == 0x6d6f646e61526e4f) {
      uVar4 = PUOnRandomObserver::create();
      return uVar4;
    }
    break;
  case 10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"OnEmission",10);
    if (iVar3 == 0) {
      uVar4 = PUOnEmissionObserver::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"OnPosition",10);
    if (iVar3 == 0) {
      uVar4 = PUOnPositionObserver::create();
      return uVar4;
    }
                    /* try { // try from 00e3a2ec to 00f3a2ef has its CatchHandler @ 00e3a3c0 */
    iVar3 = memcmp(pbVar5,"OnVelocity",10);
    if (iVar3 == 0) {
      uVar4 = PUOnVelocityObserver::create();
      return uVar4;
    }
    break;
  case 0xb:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"OnCollision",0xb);
    if (iVar3 == 0) {
      uVar4 = PUOnCollisionObserver::create();
      return uVar4;
    }
    iVar3 = memcmp(pbVar5,"OnEventFlag",0xb);
                    /* try { // try from 00e3a338 to 00f3a33b has its CatchHandler @ 00e3a3b8 */
    if (iVar3 == 0) {
                    /* try { // try from 00e3a394 to 00f3a397 has its CatchHandler @ 00e3a3b4 */
                    /* try { // try from 00e3a398 to 00f3a40b has its CatchHandler @ 00e3a1ec */
      uVar4 = PUOnEventFlagObserver::create();
      return uVar4;
    }
  }
  return 0;
}

