
/* v8::internal::Heap::RecentIdleNotificationHappened() */

bool __thiscall v8::internal::Heap::RecentIdleNotificationHappened(Heap *this)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(this + 0x7e8);
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar3 = (double)(**(code **)(*plVar1 + 0x78))();
  return dVar3 * 1000.0 < dVar2 + 50.0;
}

