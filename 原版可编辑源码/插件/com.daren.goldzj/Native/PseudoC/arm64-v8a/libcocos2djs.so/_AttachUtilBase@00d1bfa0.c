
/* spine::AttachUtilBase::~AttachUtilBase() */

void __thiscall spine::AttachUtilBase::~AttachUtilBase(AttachUtilBase *this)

{
  ~AttachUtilBase(this);
  operator_delete(this);
  return;
}

