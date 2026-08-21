
/* WebSocketCallbackWrapper::onSocketCallback(lws*, lws_callback_reasons, void*, void*, unsigned
   long) */

undefined8
WebSocketCallbackWrapper::onSocketCallback
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  WebSocketImpl *pWVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  WebSocketImpl *pWVar5;
  undefined1 auVar6 [12];
  
  if (param_1 != 0) {
    auVar6 = lws_wsi_user();
    pWVar2 = auVar6._0_8_;
    if ((pWVar2 != (WebSocketImpl *)0x0) && (DAT_01d38880 != (long *)0x0)) {
      puVar4 = (undefined8 *)*DAT_01d38880;
      puVar1 = (undefined8 *)DAT_01d38880[1];
      if (puVar4 != puVar1) {
        pWVar5 = (WebSocketImpl *)*puVar4;
        while (pWVar5 != pWVar2) {
          puVar4 = puVar4 + 1;
          if (puVar1 == puVar4) {
            return 0;
          }
          pWVar5 = (WebSocketImpl *)*puVar4;
        }
      }
      if (puVar4 != puVar1) {
        uVar3 = WebSocketImpl::onSocketCallback(pWVar2,auVar6._8_4_,param_2,param_4,param_5);
        return uVar3;
      }
    }
  }
  return 0;
}

