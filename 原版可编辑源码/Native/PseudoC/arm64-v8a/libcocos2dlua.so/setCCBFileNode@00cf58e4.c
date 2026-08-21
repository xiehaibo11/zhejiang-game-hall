
/* cocosbuilder::CCBFile::setCCBFileNode(cocos2d::Node*) */

void __thiscall cocosbuilder::CCBFile::setCCBFileNode(CCBFile *this,Node *param_1)

{
  if (*(Ref **)(this + 0x2f8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x2f8));
  }
  *(Node **)(this + 0x2f8) = param_1;
  if (param_1 != (Node *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

