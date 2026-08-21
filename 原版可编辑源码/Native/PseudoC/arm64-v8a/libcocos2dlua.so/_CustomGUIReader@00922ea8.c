
/* cocostudio::CustomGUIReader::~CustomGUIReader() */

void __thiscall cocostudio::CustomGUIReader::~CustomGUIReader(CustomGUIReader *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__CustomGUIReader_0169cd58;
  if (*(int *)(this + 0x40) != 0) {
    plVar1 = (long *)cocos2d::LuaEngine::getInstance();
    (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(this + 0x40));
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x44) != 0) {
    plVar1 = (long *)cocos2d::LuaEngine::getInstance();
    (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(this + 0x44));
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

