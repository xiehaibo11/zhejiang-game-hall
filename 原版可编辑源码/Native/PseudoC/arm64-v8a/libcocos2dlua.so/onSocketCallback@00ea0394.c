
/* cocos2d::network::WebSocket::onSocketCallback(lws*, int, void*, long) */

undefined8 __thiscall
cocos2d::network::WebSocket::onSocketCallback
          (WebSocket *this,lws *param_1,int param_2,void *param_3,long param_4)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 1:
    onConnectionError(this,param_3,param_4);
    break;
  case 3:
    onConnectionOpened(this);
    break;
  case 8:
    onClientReceivedData(this,param_3,param_4);
    break;
  case 10:
    uVar1 = onClientWritable(this);
    return uVar1;
  case 0x1e:
    onConnectionClosed(this);
  }
  return 0;
}

