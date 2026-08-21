
/* universe::Example::~Example() */

void __thiscall universe::Example::~Example(Example *this)

{
  void *pvVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Example_016a01b8;
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != *(void **)(this + 0x18)) {
    pvVar1 = (void *)core::Service::getInstance();
    core::Service::cancelByOwner(pvVar1);
    pvVar1 = *(void **)(this + 0x10);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__Literally_016a0200;
  *(undefined8 *)(this + 8) = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009dfde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}

