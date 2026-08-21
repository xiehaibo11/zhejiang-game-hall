
/* v8::internal::AssemblerBase::~AssemblerBase() */

void __thiscall v8::internal::AssemblerBase::~AssemblerBase(AssemblerBase *this)

{
  void *extraout_x1;
  
  ~AssemblerBase(this);
  Malloced::operator_delete((Malloced *)this,extraout_x1);
  return;
}

