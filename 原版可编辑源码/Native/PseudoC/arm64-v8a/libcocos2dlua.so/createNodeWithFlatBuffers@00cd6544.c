
/* cocostudio::NodeReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

undefined8 __thiscall
cocostudio::NodeReader::createNodeWithFlatBuffers(NodeReader *this,Table *param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::Node::create();
  (**(code **)(*(long *)this + 0x18))(this,uVar1,param_1);
  return uVar1;
}

