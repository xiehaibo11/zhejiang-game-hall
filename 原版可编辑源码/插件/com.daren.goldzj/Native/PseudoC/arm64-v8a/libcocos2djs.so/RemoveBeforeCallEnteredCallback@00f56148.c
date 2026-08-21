
/* v8::internal::Isolate::RemoveBeforeCallEnteredCallback(void (*)(v8::Isolate*)) */

void __thiscall
v8::internal::Isolate::RemoveBeforeCallEnteredCallback
          (Isolate *this,_func_void_Isolate_ptr *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0xc628);
  puVar2 = *(undefined8 **)(this + 0xc630);
  if ((__dest != puVar2) && ((_func_void_Isolate_ptr *)*__dest != param_1)) {
    do {
      if (puVar2 + -1 == __dest) {
        return;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while ((_func_void_Isolate_ptr *)*puVar1 != param_1);
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(undefined8 **)(this + 0xc630) = __dest + ((long)__n >> 3);
  }
  return;
}

