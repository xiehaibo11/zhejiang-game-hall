
/* cocos2d::PUEventHandlerManager::getTranslator(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PUEventHandlerManager * __thiscall
cocos2d::PUEventHandlerManager::getTranslator(PUEventHandlerManager *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  PUEventHandlerManager *pPVar4;
  basic_string *pbVar5;
  
  bVar2 = *param_1;
  pPVar4 = (PUEventHandlerManager *)0x0;
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
    pPVar4 = this + 0x28;
    break;
  case 8:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(long *)pbVar5 != 0x6572697078456f44) {
      if (*(long *)pbVar5 == 0x657a656572466f44) {
        return this + 0x18;
      }
      return (PUEventHandlerManager *)0x0;
    }
    return this + 0x10;
  default:
    goto switchD_00e5db8c_caseD_9;
  case 10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoAffector",10);
    if (iVar3 == 0) {
      return this;
    }
    return (PUEventHandlerManager *)0x0;
  case 0xc:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoStopSystem",0xc);
    pPVar4 = this + 0x30;
    break;
  case 0x11:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoEnableComponent",0x11);
    pPVar4 = this + 8;
    break;
  case 0x13:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"DoPlacementParticle",0x13);
    pPVar4 = this + 0x20;
  }
  if (iVar3 != 0) {
    pPVar4 = (PUEventHandlerManager *)0x0;
  }
switchD_00e5db8c_caseD_9:
  return pPVar4;
}

