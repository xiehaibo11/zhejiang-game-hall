
/* v8::internal::Malloced::operator delete(void*) */

void __thiscall v8::internal::Malloced::operator_delete(Malloced *this,void *param_1)

{
  free(this);
  return;
}

