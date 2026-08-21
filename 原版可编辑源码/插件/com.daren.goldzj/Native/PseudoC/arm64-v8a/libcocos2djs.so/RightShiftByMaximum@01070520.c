
/* v8::internal::MutableBigInt::RightShiftByMaximum(v8::internal::Isolate*, bool) */

long * v8::internal::MutableBigInt::RightShiftByMaximum(Isolate *param_1,bool param_2)

{
  long *plVar1;
  
  if (param_2) {
    plVar1 = (long *)Factory::NewBigInt((Factory *)param_1,1,0);
    *(undefined4 *)(*plVar1 + 3) = 3;
    *(undefined8 *)(*plVar1 + 7) = 1;
  }
  else {
    plVar1 = (long *)Factory::NewBigInt((Factory *)param_1,0,0);
    *(undefined4 *)(*plVar1 + 3) = 0;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  Canonicalize(*plVar1);
  return plVar1;
}

