
/* std::__ndk1::vector<std::__ndk1::unique_ptr<std::__ndk1::thread,
   std::__ndk1::default_delete<std::__ndk1::thread> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,
   std::__ndk1::default_delete<std::__ndk1::thread> > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
::__append(vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
           *this,ulong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *__s;
  undefined8 *puVar6;
  thread *this_00;
  undefined8 *__s_00;
  ulong uVar7;
  long lVar8;
  
  __s = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)__s >> 3)) {
    memset(__s,0,param_1 * 8);
    *(undefined8 **)(this + 8) = __s + param_1;
    return;
  }
  puVar6 = *(undefined8 **)this;
  lVar8 = (long)__s - (long)puVar6 >> 3;
  uVar7 = lVar8 + param_1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - (long)puVar6;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00927b0c;
    }
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar7 = 0x1fffffffffffffff;
  }
  pvVar2 = operator_new(uVar7 << 3);
LAB_00927b0c:
  __s_00 = (undefined8 *)((long)pvVar2 + lVar8 * 8);
  memset(__s_00,0,param_1 * 8);
  lVar3 = (long)__s - (long)puVar6;
  puVar1 = __s_00 + param_1;
  if (lVar3 != 0) {
    do {
      __s_00 = __s_00 + -1;
      __s = __s + -1;
      uVar5 = *__s;
      *__s = 0;
      *__s_00 = uVar5;
    } while (puVar6 != __s);
    puVar6 = *(undefined8 **)this;
    __s = *(undefined8 **)(this + 8);
    __s_00 = (undefined8 *)((long)pvVar2 + (lVar8 + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff)) * 8);
  }
  *(undefined8 **)this = __s_00;
  *(undefined8 **)(this + 8) = puVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar7 * 8);
  while (__s != puVar6) {
    __s = __s + -1;
    this_00 = (thread *)*__s;
    *__s = 0;
    if (this_00 != (thread *)0x0) {
      thread::~thread(this_00);
      operator_delete(this_00);
    }
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar6);
  return;
}

