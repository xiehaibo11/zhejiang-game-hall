
/* v8::internal::ScavengerCollector::ScavengerCollector(v8::internal::Heap*) */

void __thiscall
v8::internal::ScavengerCollector::ScavengerCollector(ScavengerCollector *this,Heap *param_1)

{
  *(Heap **)this = param_1 + -0x8850;
  *(Heap **)(this + 8) = param_1;
  base::Semaphore::Semaphore((Semaphore *)(this + 0x10),0);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  return;
}

