
/* cocosbuilder::CCBReader::CCBReader(cocosbuilder::NodeLoaderLibrary*,
   cocosbuilder::CCBMemberVariableAssigner*, cocosbuilder::CCBSelectorResolver*,
   cocosbuilder::NodeLoaderListener*) */

void __thiscall
cocosbuilder::CCBReader::CCBReader
          (CCBReader *this,NodeLoaderLibrary *param_1,CCBMemberVariableAssigner *param_2,
          CCBSelectorResolver *param_3,NodeLoaderListener *param_4)

{
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__CCBReader_016cfbf0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(CCBReader **)(this + 0x60) = this + 0x68;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(NodeLoaderLibrary **)(this + 0xa0) = param_1;
  cocos2d::Ref::retain((Ref *)param_1);
  *(NodeLoaderListener **)(this + 0xa8) = param_4;
  *(CCBMemberVariableAssigner **)(this + 0xb0) = param_2;
  *(CCBSelectorResolver **)(this + 0xb8) = param_3;
  init(this);
  return;
}

