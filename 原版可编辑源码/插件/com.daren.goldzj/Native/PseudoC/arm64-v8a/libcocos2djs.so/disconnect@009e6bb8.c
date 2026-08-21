
/* cocos2d::network::SIOClient::disconnect() */

void __thiscall cocos2d::network::SIOClient::disconnect(SIOClient *this)

{
  if (this[0x40] != (SIOClient)0x0) {
    this[0x40] = (SIOClient)0x0;
    SIOClientImpl::disconnectFromEndpoint(*(basic_string **)(this + 0x48));
    return;
  }
  return;
}

