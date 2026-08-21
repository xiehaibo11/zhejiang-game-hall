
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
  ulong __n;
  size_t sVar3;
  ulong uVar4;
  void *pvVar5;
  
                    /* catch() { ... } // from try @ 00914404 with catch @ 009146e4
                       catch() { ... } // from try @ 009145fc with catch @ 009146e4 */
  uVar1 = *(ulong *)(this + 0x10);
  pvVar5 = *(void **)this;
  __n = (long)param_2 - (long)param_1;
                    /* catch() { ... } // from try @ 0091460c with catch @ 009146f4 */
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
                    /* catch() { ... } // from try @ 00914398 with catch @ 009147f4 */
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 < 0x3fffffffffffffff) {
      uVar4 = __n;
      if (__n <= uVar1 << 1) {
        uVar4 = uVar1 << 1;
      }
    }
    else {
      uVar4 = 0x7fffffffffffffff;
    }
                    /* catch() { ... } // from try @ 009143bc with catch @ 009147b0 */
    pvVar5 = operator_new(uVar4);
    *(void **)this = pvVar5;
    *(void **)(this + 8) = pvVar5;
    *(ulong *)(this + 0x10) = (long)pvVar5 + uVar4;
                    /* catch() { ... } // from try @ 009144e8 with catch @ 009147d0 */
    memcpy(pvVar5,param_1,__n);
                    /* catch() { ... } // from try @ 009144c4 with catch @ 009147d4 */
    lVar2 = (long)pvVar5 + __n;
  }
  else {
    uVar1 = *(long *)(this + 8) - (long)pvVar5;
    __src = param_1 + uVar1;
    if (__n <= uVar1) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar5,param_1,sVar3);
    }
                    /* catch() { ... } // from try @ 009143dc with catch @ 00914774
                       catch() { ... } // from try @ 00914698 with catch @ 00914774 */
    if (uVar1 < __n) {
      pvVar5 = *(void **)(this + 8);
      sVar3 = (long)param_2 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar5,__src,sVar3);
        pvVar5 = (void *)((long)pvVar5 + sVar3);
      }
      *(void **)(this + 8) = pvVar5;
      return;
    }
    lVar2 = (long)pvVar5 + sVar3;
  }
  *(long *)(this + 8) = lVar2;
  return;
}

