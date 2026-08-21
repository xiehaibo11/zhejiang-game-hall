
/* non-virtual thunk to cocostudio::PageViewReader::createNodeWithFlatBuffers(flatbuffers::Table
   const*) */

undefined8 __thiscall
cocostudio::PageViewReader::createNodeWithFlatBuffers(PageViewReader *this,Table *param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::ui::PageView::create();
  (**(code **)(*(long *)(this + -0x30) + 0x30))(this + -0x30,uVar1,param_1);
  return uVar1;
}

