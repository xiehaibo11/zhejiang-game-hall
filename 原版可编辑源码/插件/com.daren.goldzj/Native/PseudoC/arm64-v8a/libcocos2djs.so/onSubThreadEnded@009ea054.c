
/* WsThreadHelper::onSubThreadEnded() */

void WsThreadHelper::onSubThreadEnded(void)

{
  if (DAT_01d38800 != 0) {
    lws_context_destroy();
    return;
  }
  return;
}

