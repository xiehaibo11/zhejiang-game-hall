
/* __cxxabiv1::__isOurExceptionClass(_Unwind_Exception const*) */

bool __cxxabiv1::__isOurExceptionClass(_Unwind_Exception *param_1)

{
  return *(ulong *)param_1 >> 8 == 0x434c4e47432b2b;
}

