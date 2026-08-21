
/* cocos2d::PUEventHandlerManager::createEventHandler(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::PUEventHandlerManager::createEventHandler
          (PUEventHandlerManager *this,basic_string *param_1)

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
  case 7:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoScale",7);
    if (iVar3 == 0) {
      uVar4 = PUDoScaleEventHandler::create();
      return uVar4;
    }
    break;
  case 8:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(long *)pbVar5 == 0x6572697078456f44) {
      uVar4 = PUDoExpireEventHandler::create();
      return uVar4;
    }
    if (*(long *)pbVar5 == 0x657a656572466f44) {
      uVar4 = PUDoFreezeEventHandler::create();
      return uVar4;
    }
    break;
  case 10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoAffector",10);
    if (iVar3 == 0) {
      uVar4 = PUDoAffectorEventHandler::create();
      return uVar4;
    }
    break;
  case 0xc:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoStopSystem",0xc);
    if (iVar3 == 0) {
      uVar4 = PUDoStopSystemEventHandler::create();
      return uVar4;
    }
    break;
  case 0x11:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoEnableComponent",0x11);
    if (iVar3 == 0) {
      uVar4 = PUDoEnableComponentEventHandler::create();
      return uVar4;
    }
    break;
  case 0x13:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoPlacementParticle",0x13);
    if (iVar3 == 0) {
      uVar4 = PUDoPlacementParticleEventHandler::create();
      return uVar4;
    }
  }
  return 0;
}

