
/* dragonBones::AttachUtilBase::~AttachUtilBase() */

void __thiscall dragonBones::AttachUtilBase::~AttachUtilBase(AttachUtilBase *this)

{
  ~AttachUtilBase(this);
  operator_delete(this);
  return;
}

