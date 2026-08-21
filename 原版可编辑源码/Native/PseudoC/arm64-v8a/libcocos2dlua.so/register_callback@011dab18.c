
/* std::__ndk1::ios_base::register_callback(void (*)(std::__ndk1::ios_base::event,
   std::__ndk1::ios_base&, int), int) */

void __thiscall
std::__ndk1::ios_base::register_callback
          (ios_base *this,_func_void_event_ios_base_ptr_int *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x48);
  uVar3 = lVar5 + 1;
  if (uVar3 <= *(ulong *)(this + 0x50)) {
LAB_011dabc4:
    *(_func_void_event_ios_base_ptr_int **)(*(long *)(this + 0x38) + lVar5 * 8) = param_1;
    *(int *)(*(long *)(this + 0x40) + lVar5 * 4) = param_2;
    *(ulong *)(this + 0x48) = uVar3;
    return;
  }
  if (uVar3 < 0xfffffffffffffff) {
    uVar4 = *(ulong *)(this + 0x50) << 1;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  pvVar2 = realloc(*(void **)(this + 0x38),uVar3 << 3);
  if ((pvVar2 != (void *)0x0) ||
     (uVar1 = *(uint *)(this + 0x20), *(uint *)(this + 0x20) = uVar1 | 1,
     (*(uint *)(this + 0x24) & (uVar1 | 1)) == 0)) {
    *(void **)(this + 0x38) = pvVar2;
    pvVar2 = realloc(*(void **)(this + 0x40),uVar3 << 2);
    if ((pvVar2 != (void *)0x0) ||
       (uVar1 = *(uint *)(this + 0x20), *(uint *)(this + 0x20) = uVar1 | 1,
       (*(uint *)(this + 0x24) & (uVar1 | 1)) == 0)) {
      lVar5 = *(long *)(this + 0x48);
      *(void **)(this + 0x40) = pvVar2;
      *(ulong *)(this + 0x50) = uVar3;
      uVar3 = lVar5 + 1;
      goto LAB_011dabc4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_011dac54("ios_base::clear");
}

