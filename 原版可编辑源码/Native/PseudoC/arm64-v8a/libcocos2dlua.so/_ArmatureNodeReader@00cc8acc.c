
/* ArmatureNodeReader::~ArmatureNodeReader() */

void __thiscall ArmatureNodeReader::~ArmatureNodeReader(ArmatureNodeReader *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

