
/* v8::internal::ReadOnlySpace::~ReadOnlySpace() */

void __thiscall v8::internal::ReadOnlySpace::~ReadOnlySpace(ReadOnlySpace *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(this + 0x20);
  *(undefined ***)this = &PTR__ReadOnlySpace_01ca9898;
  if (puVar6 != (undefined8 *)0x0) {
    lVar7 = *(long *)(*(long *)(this + 0x40) + 0x820);
    do {
      lVar1 = 0x20;
      if ((puVar6[1] & 1) != 0) {
        lVar1 = 0x28;
      }
      uVar2 = SetPermissions(*(undefined8 *)(lVar7 + lVar1),puVar6,*puVar6,2);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "SetPermissions(page_allocator, p->address(), p->size(), access)");
      }
      puVar6 = (undefined8 *)puVar6[0x1c];
    } while (puVar6 != (undefined8 *)0x0);
  }
  this[0xe8] = (ReadOnlySpace)0x0;
  *(undefined ***)this = &PTR__PagedSpace_01ca9518;
  PagedSpace::TearDown((PagedSpace *)this);
  base::Mutex::~Mutex((Mutex *)(this + 0xc0));
  *(undefined ***)this = &PTR__Space_01ca9d00;
  pvVar5 = extraout_x1;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    pvVar5 = extraout_x1_00;
  }
  plVar3 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    pvVar5 = extraout_x1_01;
  }
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar4;
    operator_delete(pvVar4);
    pvVar5 = extraout_x1_02;
  }
  Malloced::operator_delete((Malloced *)this,pvVar5);
  return;
}

