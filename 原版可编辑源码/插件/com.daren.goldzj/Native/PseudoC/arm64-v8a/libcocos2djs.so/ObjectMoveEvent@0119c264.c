
/* v8::internal::HeapProfiler::ObjectMoveEvent(unsigned long, unsigned long, int) */

void __thiscall
v8::internal::HeapProfiler::ObjectMoveEvent
          (HeapProfiler *this,ulong param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  
  base::Mutex::Lock((Mutex *)(this + 0x3c));
  uVar1 = HeapObjectsMap::MoveObject(*(HeapObjectsMap **)(this + 8),param_1,param_2,param_3);
  if (((uVar1 & 1) == 0) && (*(long *)(this + 0x30) != 0)) {
    AddressToTraceMap::MoveObject
              ((AddressToTraceMap *)(*(long *)(this + 0x30) + 0x198),param_1,param_2,param_3);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x3c));
  return;
}

