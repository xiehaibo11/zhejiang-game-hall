
/* operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new();
  return pvVar1;
}

