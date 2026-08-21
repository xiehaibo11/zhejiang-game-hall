
/* v8::internal::NewSpace::~NewSpace() */

void __thiscall v8::internal::NewSpace::~NewSpace(NewSpace *this)

{
  void *extraout_x1;
  
  ~NewSpace(this);
  Malloced::operator_delete((Malloced *)this,extraout_x1);
  return;
}

