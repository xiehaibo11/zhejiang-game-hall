
/* cocos2d::renderer::ProgramLib::~ProgramLib() */

void __thiscall cocos2d::renderer::ProgramLib::~ProgramLib(ProgramLib *this)

{
  ProgramLib *pPVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  pPVar1 = this + 0x30;
  for (plVar5 = *(long **)(this + 0x40); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if ((Ref *)plVar5[3] != (Ref *)0x0) {
      Ref::release((Ref *)plVar5[3]);
    }
  }
  if (*(long *)(this + 0x48) != 0) {
    puVar2 = *(void **)(this + 0x40);
    while (puVar2 != (void *)0x0) {
      pvVar6 = (void *)*puVar2;
                    /* try { // try from 009c1b90 to 00ac1be3 has its CatchHandler @ 009c1b90
                       catch() { ... } // from try @ 009c1b90 with catch @ 009c1b90
                       catch() { ... } // from try @ 009c1d38 with catch @ 009c1b90 */
      operator_delete(puVar2);
      puVar2 = pvVar6;
    }
    lVar3 = *(long *)(this + 0x38);
    *(undefined8 *)(this + 0x40) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)pPVar1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
  *(undefined8 *)this = 0;
  puVar2 = *(void **)(this + 0x40);
  while (puVar2 != (void *)0x0) {
    pvVar6 = (void *)*puVar2;
    operator_delete(puVar2);
                    /* try { // try from 009c1be4 to 00ac1bfb has its CatchHandler @ 009c1db4 */
    puVar2 = pvVar6;
  }
  pvVar6 = *(void **)pPVar1;
  *(undefined8 *)pPVar1 = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  puVar2 = *(void **)(this + 0x18);
                    /* try { // try from 009c1c04 to 00ac1c0f has its CatchHandler @ 009c1db0 */
  while (puVar2 != (void *)0x0) {
    pvVar6 = (void *)*puVar2;
                    /* try { // try from 009c1c10 to 00ac1c1b has its CatchHandler @ 009c1dac */
    std::__ndk1::
    allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::ProgramLib::Template>,void*>>>
    ::__destroy<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::ProgramLib::Template>>();
                    /* try { // try from 009c1c1c to 00ac1d37 has its CatchHandler @ 009c1dc4 */
    operator_delete(puVar2);
    puVar2 = pvVar6;
  }
  pvVar6 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}

