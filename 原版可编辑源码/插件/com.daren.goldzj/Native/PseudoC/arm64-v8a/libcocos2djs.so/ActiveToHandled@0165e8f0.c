
/* v8::internal::compiler::LinearScanAllocator::ActiveToHandled(std::__ndk1::__wrap_iter<v8::internal::compiler::LiveRange**>)
    */

undefined8 * __thiscall
v8::internal::compiler::LinearScanAllocator::ActiveToHandled
          (LinearScanAllocator *this,undefined8 *param_2)

{
  size_t __n;
  
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Moving live range %d:%d from active to handled\n",
           (ulong)*(uint *)(*(long *)((uint *)*param_2 + 8) + 0x5c),(ulong)*(uint *)*param_2);
  }
  __n = *(long *)(this + 0x50) - (long)(param_2 + 1);
  if (__n != 0) {
    memmove(param_2,param_2 + 1,__n);
  }
  *(undefined8 **)(this + 0x50) = param_2 + ((long)__n >> 3);
  return param_2;
}

