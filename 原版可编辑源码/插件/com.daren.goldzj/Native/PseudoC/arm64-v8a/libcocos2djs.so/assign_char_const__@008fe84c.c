
/* std::__ndk1::enable_if<__is_forward_iterator<char const*>::value&&is_constructible<char,
   std::__ndk1::iterator_traits<char const*>::reference>::value, void>::type
   std::__ndk1::vector<char, std::__ndk1::allocator<char> >::assign<char const*>(char const*, char
   const*) */

void __thiscall
std::__ndk1::vector<char,std::__ndk1::allocator<char>>::assign<char_const*>
          (vector<char,std::__ndk1::allocator<char>> *this,char *param_1,char *param_2)

{
  char *__src;
  ulong uVar1;
  long lVar2;
  vector<char,std::__ndk1::allocator<char>> *pvVar3;
  ulong __n;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(this + 0x10);
  pvVar5 = *(void **)this;
  __n = (long)param_2 - (long)param_1;
  if (uVar1 - (long)pvVar5 < __n) {
    if (pvVar5 != (void *)0x0) {
      *(void **)(this + 8) = pvVar5;
      operator_delete(pvVar5);
      uVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 < 0x3fffffffffffffff) {
      uVar6 = __n;
      if (__n <= uVar1 << 1) {
        uVar6 = uVar1 << 1;
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
    }
    pvVar5 = operator_new(uVar6);
    *(void **)(this + 8) = pvVar5;
    *(void **)this = pvVar5;
    *(ulong *)(this + 0x10) = (long)pvVar5 + uVar6;
    memcpy(pvVar5,param_1,__n);
    lVar2 = (long)pvVar5 + __n;
  }
  else {
    pvVar3 = this + 8;
    uVar1 = *(long *)pvVar3 - (long)pvVar5;
    __src = param_1 + uVar1;
    if (__n <= uVar1) {
      __src = param_2;
    }
    sVar4 = (long)__src - (long)param_1;
    if (sVar4 != 0) {
      memmove(pvVar5,param_1,sVar4);
    }
    if (uVar1 < __n) {
      sVar4 = (long)param_2 - (long)__src;
      if ((long)sVar4 < 1) {
        return;
      }
      memcpy(*(void **)pvVar3,__src,sVar4);
      lVar2 = *(long *)pvVar3 + sVar4;
    }
    else {
      lVar2 = (long)pvVar5 + sVar4;
    }
  }
  *(long *)(this + 8) = lVar2;
  return;
}

