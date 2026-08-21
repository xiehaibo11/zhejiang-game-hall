
/* non-virtual thunk to cocos2d::LabelAtlas::~LabelAtlas() */

void __thiscall cocos2d::LabelAtlas::~LabelAtlas(LabelAtlas *this)

{
  AtlasNode *this_00;
  
  this_00 = (AtlasNode *)(this + -1000);
  *(undefined ***)this_00 = &PTR__LabelAtlas_016fe328;
  *(undefined ***)(this + -0xf0) = &PTR__LabelAtlas_016fe8a0;
  *(undefined ***)this = &PTR__LabelAtlas_016fe8e0;
  if (((byte)this[8] & 1) == 0) {
    *(undefined2 *)(this + 8) = 0;
  }
  else {
    **(undefined1 **)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    if (((byte)this[8] & 1) != 0) {
      operator_delete(*(void **)(this + 0x18));
    }
  }
  AtlasNode::~AtlasNode(this_00);
  operator_delete(this_00);
  return;
}

