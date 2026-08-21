
/* v8::internal::CpuProfilesCollection::CpuProfilesCollection(v8::internal::Isolate*) */

void __thiscall
v8::internal::CpuProfilesCollection::CpuProfilesCollection
          (CpuProfilesCollection *this,Isolate *param_1)

{
  StringsStorage::StringsStorage((StringsStorage *)this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  base::Semaphore::Semaphore((Semaphore *)(this + 0x50),1);
  return;
}

