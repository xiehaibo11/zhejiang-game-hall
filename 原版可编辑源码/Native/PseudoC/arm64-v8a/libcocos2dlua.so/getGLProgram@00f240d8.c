
/* cocos2d::Node::getGLProgram() const */

undefined8 __thiscall cocos2d::Node::getGLProgram(Node *this)

{
  if (*(long *)(this + 0x1d8) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x1d8) + 0xd0);
  }
  return 0;
}

