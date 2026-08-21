
/* cocostudio::Node3DReader::~Node3DReader() */

void __thiscall cocostudio::Node3DReader::~Node3DReader(Node3DReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

