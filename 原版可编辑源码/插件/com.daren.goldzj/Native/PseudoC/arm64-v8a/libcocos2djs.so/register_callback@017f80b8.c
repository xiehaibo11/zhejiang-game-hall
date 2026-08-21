
/* std::__ndk1::ios_base::register_callback(void (*)(std::__ndk1::ios_base::event,
   std::__ndk1::ios_base&, int), int) */

void __thiscall
std::__ndk1::ios_base::register_callback
          (ios_base *this,_func_void_event_ios_base_ptr_int *param_1,int param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x48);
  uVar2 = lVar4 + 1;
  if (*(ulong *)(this + 0x50) < uVar2) {
    if (uVar2 < 0xfffffffffffffff) {
      uVar3 = *(ulong *)(this + 0x50) << 1;
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
    }
    else {
      uVar2 = 0x1fffffffffffffff;
    }
    pvVar1 = realloc(*(void **)(this + 0x38),uVar2 << 3);
    if (pvVar1 == (void *)0x0) {
      clear(this,*(uint *)(this + 0x20) | 1);
    }
    *(void **)(this + 0x38) = pvVar1;
    pvVar1 = realloc(*(void **)(this + 0x40),uVar2 << 2);
    if (pvVar1 == (void *)0x0) {
      clear(this,*(uint *)(this + 0x20) | 1);
    }
    lVar4 = *(long *)(this + 0x48);
    *(void **)(this + 0x40) = pvVar1;
    *(ulong *)(this + 0x50) = uVar2;
    uVar2 = lVar4 + 1;
  }
  *(_func_void_event_ios_base_ptr_int **)(*(long *)(this + 0x38) + lVar4 * 8) = param_1;
  *(int *)(*(long *)(this + 0x40) + lVar4 * 4) = param_2;
  *(ulong *)(this + 0x48) = uVar2;
  return;
}

