
/* v8::internal::ExternalReference::Create(v8::internal::Runtime::FunctionId) */

undefined8 v8::internal::ExternalReference::Create(void)

{
  long lVar1;
  
  lVar1 = Runtime::FunctionForId();
  if ((int)*(char *)(lVar1 + 0x19) - 1U < 2) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

