
/* universe::Example::~Example() */

void __thiscall universe::Example::~Example(Example *this)

{
  void *pvVar1;
  long *plVar2;
  
                    /* try { // try from 009fd280 to 00afd28b has its CatchHandler @ 009fd2fc */
                    /* try { // try from 009fd28c to 00afd293 has its CatchHandler @ 009fd2f8 */
                    /* try { // try from 009fd294 to 00afd2bf has its CatchHandler @ 009fd304 */
  *(undefined ***)this = &PTR__Example_01c6c620;
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != *(void **)(this + 0x18)) {
    pvVar1 = (void *)core::Service::getInstance();
    core::Service::cancelByOwner(pvVar1);
    pvVar1 = *(void **)(this + 0x10);
  }
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 009fd2c0 to 00afd31f has its CatchHandler @ 009fd22c */
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__Literally_01c6c668;
  *(undefined8 *)(this + 8) = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009fd2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
                    /* catch() { ... } // from try @ 009fd28c with catch @ 009fd2f8 */
                    /* catch() { ... } // from try @ 009fd280 with catch @ 009fd2fc */
                    /* catch() { ... } // from try @ 009fd294 with catch @ 009fd304 */
  return;
}

