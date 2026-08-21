
/* v8::internal::Heap::IdleNotification(int) */

void __thiscall v8::internal::Heap::IdleNotification(Heap *this,int param_1)

{
  long *plVar1;
  double dVar2;
  
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar2 = (double)(**(code **)(*plVar1 + 0x78))();
  IdleNotification(this,(double)param_1 / 1000.0 + dVar2);
  return;
}

