
/* cocosbuilder::CCBFile::~CCBFile() */

void __thiscall cocosbuilder::CCBFile::~CCBFile(CCBFile *this)

{
  cocos2d::Node::~Node((Node *)this);
  operator_delete(this);
  return;
}

