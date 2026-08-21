
/* std::__ndk1::vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool> >,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool> > > >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
::__append(vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
           *this,ulong param_1)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  __shared_weak_count *this_00;
  undefined8 *__s;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar10 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar10 >> 4)) {
    do {
      *puVar10 = 0;
      puVar10[1] = 0;
      param_1 = param_1 - 1;
      puVar10 = (undefined8 *)(*(long *)(this + 8) + 0x10);
      *(undefined8 **)(this + 8) = puVar10;
    } while (param_1 != 0);
    return;
  }
  puVar8 = *(undefined8 **)this;
  lVar12 = (long)puVar10 - (long)puVar8 >> 4;
  uVar2 = lVar12 + param_1;
  if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - (long)puVar8;
  if ((ulong)(lVar6 >> 4) < 0x7ffffffffffffff) {
    uVar7 = lVar6 >> 3;
    uVar11 = uVar2;
    if (uVar2 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_0099eec0;
    }
    if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar11 = 0xfffffffffffffff;
  }
  pvVar5 = operator_new(uVar11 << 4);
LAB_0099eec0:
  __s = (undefined8 *)((long)pvVar5 + lVar12 * 0x10);
  memset(__s,0,param_1 << 4);
  lVar6 = (long)puVar10 - (long)puVar8;
                    /* try { // try from 0099eedc to 00a9efc3 has its CatchHandler @ 0099ecf8 */
  if (lVar6 != 0) {
    do {
      puVar9 = puVar10 + -2;
      uVar13 = *puVar9;
      __s[-1] = puVar10[-1];
      __s[-2] = uVar13;
      *puVar9 = 0;
      puVar10[-1] = 0;
      puVar10 = puVar9;
      __s = __s + -2;
    } while (puVar8 != puVar9);
    puVar8 = *(undefined8 **)this;
    puVar10 = *(undefined8 **)(this + 8);
    __s = (undefined8 *)((long)pvVar5 + (lVar12 + (lVar6 - 0x10U >> 4 ^ 0xffffffffffffffff)) * 0x10)
    ;
  }
  *(undefined8 **)this = __s;
  *(void **)(this + 8) = (void *)((long)pvVar5 + uVar2 * 0x10);
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar11 * 0x10);
  while (puVar10 != puVar8) {
    this_00 = (__shared_weak_count *)puVar10[-1];
    puVar10 = puVar10 + -2;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar12 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
                    /* catch() { ... } // from try @ 0099ed7c with catch @ 0099ef54 */
                    /* catch() { ... } // from try @ 0099ed70 with catch @ 0099ef58 */
                    /* catch() { ... } // from try @ 0099ed50 with catch @ 0099ef5c */
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        __shared_weak_count::__release_weak(this_00);
                    /* catch() { ... } // from try @ 0099ed88 with catch @ 0099ef6c */
      }
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar8);
  return;
}

