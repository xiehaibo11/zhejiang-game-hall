
/* non-virtual thunk to cocostudio::GameNode3DReader::createNodeWithFlatBuffers(flatbuffers::Table
   const*) */

undefined8 __thiscall
cocostudio::GameNode3DReader::createNodeWithFlatBuffers(GameNode3DReader *this,Table *param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::Node::create();
  (**(code **)(*(long *)(this + -0x28) + 0x18))(this + -0x28,uVar1,param_1);
  return uVar1;
}

