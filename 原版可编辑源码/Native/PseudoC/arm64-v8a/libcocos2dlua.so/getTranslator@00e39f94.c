
/* cocos2d::PUObserverManager::getTranslator(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PUObserverManager * __thiscall
cocos2d::PUObserverManager::getTranslator(PUObserverManager *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  PUObserverManager *pPVar4;
  basic_string *pbVar5;
  
  bVar2 = *param_1;
  pPVar4 = (PUObserverManager *)0x0;
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
    pPVar4 = this + 0x48;
    break;
  case 7:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"OnClear",7);
    if (iVar3 == 0) {
      return this;
    }
    iVar3 = memcmp(pbVar5,"OnCount",7);
    if (iVar3 == 0) {
      return this + 0x10;
    }
    iVar3 = memcmp(pbVar5,"OnQuota",7);
    pPVar4 = this + 0x38;
    break;
  case 8:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*(long *)pbVar5 != 0x6572697078456e4f) {
      if (*(long *)pbVar5 == 0x6d6f646e61526e4f) {
        return this + 0x40;
      }
      return (PUObserverManager *)0x0;
    }
    return this + 0x28;
  default:
    goto switchD_00e39fdc_caseD_9;
  case 10:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"OnEmission",10);
    if (iVar3 == 0) {
      return this + 0x18;
    }
    iVar3 = memcmp(pbVar5,"OnPosition",10);
    if (iVar3 == 0) {
      return this + 0x30;
    }
    iVar3 = memcmp(pbVar5,"OnVelocity",10);
    pPVar4 = this + 0x50;
    break;
  case 0xb:
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar5,"OnCollision",0xb);
    if (iVar3 == 0) {
      return this + 8;
    }
    iVar3 = memcmp(pbVar5,"OnEventFlag",0xb);
    pPVar4 = this + 0x20;
  }
  if (iVar3 != 0) {
    pPVar4 = (PUObserverManager *)0x0;
  }
switchD_00e39fdc_caseD_9:
  return pPVar4;
}

