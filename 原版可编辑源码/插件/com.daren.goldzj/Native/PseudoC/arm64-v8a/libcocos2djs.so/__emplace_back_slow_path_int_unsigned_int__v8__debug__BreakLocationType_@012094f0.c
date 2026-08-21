
/* void std::__ndk1::vector<v8::debug::BreakLocation,
   std::__ndk1::allocator<v8::debug::BreakLocation> >::__emplace_back_slow_path<int, unsigned int&,
   v8::debug::BreakLocationType>(int&&, unsigned int&, v8::debug::BreakLocationType&&) */

void __thiscall
std::__ndk1::vector<v8::debug::BreakLocation,std::__ndk1::allocator<v8::debug::BreakLocation>>::
__emplace_back_slow_path<int,unsigned_int&,v8::debug::BreakLocationType>
          (vector<v8::debug::BreakLocation,std::__ndk1::allocator<v8::debug::BreakLocation>> *this,
          int *param_1,uint *param_2,BreakLocationType *param_3)

{
  ulong uVar1;
  Location *this_00;
  undefined4 uVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3c == 0) {
    lVar4 = *(long *)(this + 0x10) - *(long *)this;
    uVar5 = lVar4 >> 3;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7fffffffffffffe < (ulong)(lVar4 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_012095e8;
      pvVar3 = operator_new(uVar1 << 4);
    }
    uVar2 = *(undefined4 *)param_3;
    this_00 = (Location *)((long)pvVar3 + lVar6 * 0x10);
    v8::debug::Location::Location(this_00,*param_1,*param_2);
    *(undefined4 *)(this_00 + 0xc) = uVar2;
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n) {
      memcpy(this_00 + -__n,__src,__n);
      __src = *(void **)this;
    }
    *(Location **)this = this_00 + -__n;
    *(Location **)(this + 8) = this_00 + 0x10;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
LAB_012095e8:
                    /* WARNING: Subroutine does not return */
  abort();
}

