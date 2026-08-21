
/* v8::internal::Assembler::~Assembler() */

void __thiscall v8::internal::Assembler::~Assembler(Assembler *this)

{
  void *extraout_x1;
  
  ~Assembler(this);
  Malloced::operator_delete((Malloced *)this,extraout_x1);
  return;
}

