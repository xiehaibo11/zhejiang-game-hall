
/* v8::internal::ReadOnlySpace::~ReadOnlySpace() */

void __thiscall v8::internal::ReadOnlySpace::~ReadOnlySpace(ReadOnlySpace *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(this + 0x20);
  *(undefined ***)this = &PTR__ReadOnlySpace_01ca9898;
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = *(long *)(*(long *)(this + 0x40) + 0x820);
    do {
      lVar1 = 0x20;
      if ((puVar3[1] & 1) != 0) {
        lVar1 = 0x28;
      }
      uVar2 = SetPermissions(*(undefined8 *)(lVar4 + lVar1),puVar3,*puVar3,2);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "SetPermissions(page_allocator, p->address(), p->size(), access)");
      }
      puVar3 = (undefined8 *)puVar3[0x1c];
    } while (puVar3 != (undefined8 *)0x0);
  }
  this[0xe8] = (ReadOnlySpace)0x0;
  PagedSpace::~PagedSpace((PagedSpace *)this);
  return;
}

