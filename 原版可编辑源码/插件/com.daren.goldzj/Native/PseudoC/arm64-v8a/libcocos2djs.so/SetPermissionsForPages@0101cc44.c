
/* v8::internal::ReadOnlySpace::SetPermissionsForPages(v8::internal::MemoryAllocator*,
   v8::PageAllocator::Permission) */

void __thiscall
v8::internal::ReadOnlySpace::SetPermissionsForPages
          (ReadOnlySpace *this,long param_1,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x20);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    lVar1 = 0x20;
    if ((puVar3[1] & 1) != 0) {
      lVar1 = 0x28;
    }
    uVar2 = SetPermissions(*(undefined8 *)(param_1 + lVar1),puVar3,*puVar3,param_3);
    if ((uVar2 & 1) == 0) break;
    puVar3 = (undefined8 *)puVar3[0x1c];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","SetPermissions(page_allocator, p->address(), p->size(), access)");
}

