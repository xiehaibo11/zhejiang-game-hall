
/* non-virtual thunk to cocostudio::ListViewReader::createNodeWithFlatBuffers(flatbuffers::Table
   const*) */

undefined8 __thiscall
cocostudio::ListViewReader::createNodeWithFlatBuffers(ListViewReader *this,Table *param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::ui::ListView::create();
  (**(code **)(*(long *)(this + -0x30) + 0x30))(this + -0x30,uVar1,param_1);
  return uVar1;
}

