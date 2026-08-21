
/* v8::internal::StressMarkingObserver::StressMarkingObserver(v8::internal::Heap*) */

void __thiscall
v8::internal::StressMarkingObserver::StressMarkingObserver
          (StressMarkingObserver *this,Heap *param_1)

{
  *(undefined8 *)(this + 0x10) = 0x40;
  *(undefined8 *)(this + 8) = 0x40;
  *(undefined ***)this = &PTR__AllocationObserver_01caa330;
  *(Heap **)(this + 0x18) = param_1;
  return;
}

