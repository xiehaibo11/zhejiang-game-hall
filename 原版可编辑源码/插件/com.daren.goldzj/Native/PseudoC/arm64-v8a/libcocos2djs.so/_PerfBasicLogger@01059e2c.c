
/* v8::internal::PerfBasicLogger::~PerfBasicLogger() */

void __thiscall v8::internal::PerfBasicLogger::~PerfBasicLogger(PerfBasicLogger *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__PerfBasicLogger_01cb1fd0;
  fclose(*(FILE **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  pvVar1 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__CodeEventLogger_01cb1f20;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

