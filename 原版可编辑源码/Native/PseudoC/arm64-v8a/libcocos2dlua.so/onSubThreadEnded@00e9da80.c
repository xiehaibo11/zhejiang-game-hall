
/* cocos2d::network::WsThreadHelper::onSubThreadEnded() */

void cocos2d::network::WsThreadHelper::onSubThreadEnded(void)

{
  if (DAT_0178f4f0 != 0) {
    lws_context_destroy();
    return;
  }
  return;
}

