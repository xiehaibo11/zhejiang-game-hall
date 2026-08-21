
/* cocos2d::GLProgramCache::~GLProgramCache() */

void __thiscall cocos2d::GLProgramCache::~GLProgramCache(GLProgramCache *this)

{
  void *pvVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(this + 0x38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2678 with catch @ 00fd2694
                        */
  *(undefined ***)this = &PTR__GLProgramCache_01723e20;
  puVar3 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    do {
      Ref::release((Ref *)plVar2[5]);
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    puVar3 = *(undefined8 **)(this + 0x38);
  }
  while (puVar3 != (void *)0x0) {
                    /* try { // try from 00fd26d8 to 010d26db has its CatchHandler @ 00fd26f4 */
    pvVar1 = (void *)*puVar3;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = pvVar1;
  }
  pvVar1 = *(void **)(this + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd26d8 with catch @ 00fd26f4
                        */
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  Ref::~Ref((Ref *)this);
  return;
}

