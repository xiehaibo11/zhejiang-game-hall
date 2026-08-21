
/* XMLHttpRequest::sendBinary(cocos2d::Data const&) */

void __thiscall XMLHttpRequest::sendBinary(XMLHttpRequest *this,Data *param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)cocos2d::Data::getBytes(param_1);
  uVar2 = cocos2d::Data::getSize(param_1);
  setHttpRequestData(this,pcVar1,uVar2);
  sendRequest(this);
  return;
}

