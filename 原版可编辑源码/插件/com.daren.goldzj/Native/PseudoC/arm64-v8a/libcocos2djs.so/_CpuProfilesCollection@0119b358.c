
/* v8::internal::CpuProfilesCollection::~CpuProfilesCollection() */

void __thiscall
v8::internal::CpuProfilesCollection::~CpuProfilesCollection(CpuProfilesCollection *this)

{
  undefined8 *puVar1;
  CpuProfile *pCVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x50));
  puVar3 = *(undefined8 **)(this + 0x38);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x40);
    puVar1 = puVar3;
    if (puVar4 != puVar3) {
      do {
        puVar4 = puVar4 + -1;
        pCVar2 = (CpuProfile *)*puVar4;
        *puVar4 = 0;
        if (pCVar2 != (CpuProfile *)0x0) {
          CpuProfile::~CpuProfile(pCVar2);
          operator_delete(pCVar2);
        }
      } while (puVar3 != puVar4);
      puVar1 = *(undefined8 **)(this + 0x38);
    }
    *(undefined8 **)(this + 0x40) = puVar3;
    operator_delete(puVar1);
  }
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x20);
    puVar1 = puVar3;
    if (puVar4 != puVar3) {
      do {
        puVar4 = puVar4 + -1;
        pCVar2 = (CpuProfile *)*puVar4;
        *puVar4 = 0;
        if (pCVar2 != (CpuProfile *)0x0) {
          CpuProfile::~CpuProfile(pCVar2);
          operator_delete(pCVar2);
        }
      } while (puVar3 != puVar4);
      puVar1 = *(undefined8 **)(this + 0x18);
    }
    *(undefined8 **)(this + 0x20) = puVar3;
    operator_delete(puVar1);
  }
  StringsStorage::~StringsStorage((StringsStorage *)this);
  return;
}

