
void FUN_00ea0c64(long param_1)

{
  if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
    cocos2d::network::WebSocket::close(*(WebSocket **)(param_1 + 8));
    return;
  }
  return;
}

