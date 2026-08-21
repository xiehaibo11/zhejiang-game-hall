
/* cocos2d::Camera::restoreViewport() */

void __thiscall cocos2d::Camera::restoreViewport(Camera *this)

{
  glViewport(*(undefined4 *)(this + 0x4b8),*(undefined4 *)(this + 0x4bc),
             *(undefined4 *)(this + 0x4c0),*(undefined4 *)(this + 0x4c4));
  return;
}

