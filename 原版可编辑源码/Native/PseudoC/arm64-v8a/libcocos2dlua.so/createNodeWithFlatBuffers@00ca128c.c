
/* cocostudio::TextReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

undefined8 __thiscall
cocostudio::TextReader::createNodeWithFlatBuffers(TextReader *this,Table *param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::ui::Text::create();
  (**(code **)(*(long *)this + 0x30))(this,uVar1,param_1);
  return uVar1;
}

