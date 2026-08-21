
/* v8::internal::Heap::MonotonicallyIncreasingTimeInMs() */

undefined1  [16] v8::internal::Heap::MonotonicallyIncreasingTimeInMs(void)

{
  long *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar2 = (double)(**(code **)(*plVar1 + 0x78))();
  auVar3._0_8_ = dVar2 * 1000.0;
  auVar3._8_8_ = 0;
  return auVar3;
}

