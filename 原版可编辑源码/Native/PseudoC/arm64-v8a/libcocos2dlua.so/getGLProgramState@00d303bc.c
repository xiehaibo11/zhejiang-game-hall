
/* cocos2d::Mesh::getGLProgramState() const */

undefined8 __thiscall cocos2d::Mesh::getGLProgramState(Mesh *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x148) != 0) {
    uVar1 = Pass::getGLProgramState
                      ((Pass *)**(undefined8 **)(*(long *)(*(long *)(this + 0x148) + 0x90) + 0x78));
    return uVar1;
  }
  return 0;
}

