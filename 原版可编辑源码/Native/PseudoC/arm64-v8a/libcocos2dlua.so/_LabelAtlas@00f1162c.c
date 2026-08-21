
/* cocos2d::LabelAtlas::~LabelAtlas() */

void __thiscall cocos2d::LabelAtlas::~LabelAtlas(LabelAtlas *this)

{
  *(undefined ***)this = &PTR__LabelAtlas_016fe328;
  *(undefined ***)(this + 0x2f8) = &PTR__LabelAtlas_016fe8a0;
  *(undefined ***)(this + 1000) = &PTR__LabelAtlas_016fe8e0;
  if (((byte)this[0x3f0] & 1) == 0) {
    *(undefined2 *)(this + 0x3f0) = 0;
  }
  else {
    **(undefined1 **)(this + 0x400) = 0;
    *(undefined8 *)(this + 0x3f8) = 0;
    if (((byte)this[0x3f0] & 1) != 0) {
      operator_delete(*(void **)(this + 0x400));
    }
  }
  AtlasNode::~AtlasNode((AtlasNode *)this);
  operator_delete(this);
  return;
}

