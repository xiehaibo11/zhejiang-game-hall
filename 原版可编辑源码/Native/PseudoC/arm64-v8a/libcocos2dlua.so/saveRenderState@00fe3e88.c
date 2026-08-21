
/* cocos2d::RenderQueue::saveRenderState() */

void __thiscall cocos2d::RenderQueue::saveRenderState(RenderQueue *this)

{
  char cVar1;
  
  cVar1 = glIsEnabled(0xb71);
  this[0x79] = (RenderQueue)(cVar1 != '\0');
  cVar1 = glIsEnabled(0xb44);
  this[0x78] = (RenderQueue)(cVar1 != '\0');
  glGetBooleanv(0xb72,this + 0x7a);
  return;
}

