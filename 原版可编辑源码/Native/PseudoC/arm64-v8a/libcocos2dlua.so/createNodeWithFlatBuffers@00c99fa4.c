
/* cocostudio::TextBMFontReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

undefined8 __thiscall
cocostudio::TextBMFontReader::createNodeWithFlatBuffers(TextBMFontReader *this,Table *param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::ui::TextBMFont::create();
  (**(code **)(*(long *)this + 0x30))(this,uVar1,param_1);
  return uVar1;
}

