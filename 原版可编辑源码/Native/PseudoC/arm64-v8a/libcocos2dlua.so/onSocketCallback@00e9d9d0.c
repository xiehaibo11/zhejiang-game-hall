
/* cocos2d::network::WebSocketCallbackWrapper::onSocketCallback(lws*, lws_callback_reasons, void*,
   void*, unsigned long) */

undefined8
cocos2d::network::WebSocketCallbackWrapper::onSocketCallback
          (long param_1,int param_2,undefined8 param_3,void *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  WebSocket *this;
  undefined8 extraout_x0;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  undefined8 *puVar3;
  
  if (((param_1 != 0) && (this = (WebSocket *)lws_wsi_user(), this != (WebSocket *)0x0)) &&
     (DAT_0178f570 != (long *)0x0)) {
    puVar3 = (undefined8 *)*DAT_0178f570;
    puVar2 = (undefined8 *)DAT_0178f570[1];
    if ((puVar3 != puVar2) && ((WebSocket *)*puVar3 != this)) {
      do {
        if (puVar2 + -1 == puVar3) {
          return 0;
        }
        puVar1 = puVar3 + 1;
        puVar3 = puVar3 + 1;
      } while ((WebSocket *)*puVar1 != this);
    }
    if (puVar3 != puVar2) {
      WebSocket::onSocketCallback
                (this,(lws *)CONCAT44(extraout_var,extraout_w1),param_2,param_4,param_5);
      return extraout_x0;
    }
  }
  return 0;
}

