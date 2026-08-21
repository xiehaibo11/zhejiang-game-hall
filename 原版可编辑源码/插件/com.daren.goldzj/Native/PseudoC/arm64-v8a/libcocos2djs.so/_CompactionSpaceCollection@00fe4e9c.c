
/* v8::internal::CompactionSpaceCollection::~CompactionSpaceCollection() */

void __thiscall
v8::internal::CompactionSpaceCollection::~CompactionSpaceCollection(CompactionSpaceCollection *this)

{
  long *plVar1;
  void *pvVar2;
  PagedSpace *pPVar3;
  
  pPVar3 = (PagedSpace *)(this + 0xf0);
  *(undefined ***)pPVar3 = &PTR__PagedSpace_01ca9518;
  PagedSpace::TearDown(pPVar3);
  base::Mutex::~Mutex((Mutex *)(this + 0x1b0));
  *(undefined ***)pPVar3 = &PTR__Space_01ca9d00;
  if (*(void **)(this + 0x120) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x120));
  }
  plVar1 = *(long **)(this + 0x150);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = *(void **)(this + 0xf8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar2;
    operator_delete(pvVar2);
  }
  pPVar3 = (PagedSpace *)(this + 8);
  *(undefined ***)pPVar3 = &PTR__PagedSpace_01ca9518;
  PagedSpace::TearDown(pPVar3);
  base::Mutex::~Mutex((Mutex *)(this + 200));
  *(undefined ***)pPVar3 = &PTR__Space_01ca9d00;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  plVar1 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

