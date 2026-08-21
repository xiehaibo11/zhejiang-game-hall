
/* cocos2d::experimental::FrameBuffer::applyDefaultFBO() */

void cocos2d::experimental::FrameBuffer::applyDefaultFBO(void)

{
  if (_defaultFBO != (FrameBuffer *)0x0) {
    applyFBO(_defaultFBO);
    return;
  }
  return;
}

