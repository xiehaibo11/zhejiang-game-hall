
/* v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean() */

undefined8 __thiscall
v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::IsClean
          (ConcurrentBitmap<(v8::internal::AccessMode)1> *this)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(this + lVar1) != 0) {
      return 0;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x2000);
  return 1;
}

