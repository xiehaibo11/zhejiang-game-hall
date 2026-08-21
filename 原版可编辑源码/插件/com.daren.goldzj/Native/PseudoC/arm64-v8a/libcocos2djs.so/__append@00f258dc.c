
/* std::__ndk1::vector<v8::internal::TranslatedFrame::iterator,
   std::__ndk1::allocator<v8::internal::TranslatedFrame::iterator> >::__append(unsigned long,
   v8::internal::TranslatedFrame::iterator const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::TranslatedFrame::iterator,std::__ndk1::allocator<v8::internal::TranslatedFrame::iterator>>
::__append(vector<v8::internal::TranslatedFrame::iterator,std::__ndk1::allocator<v8::internal::TranslatedFrame::iterator>>
           *this,ulong param_1,iterator *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *__src;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar4 >> 3) * -0x5555555555555555) < param_1) {
    lVar3 = (long)puVar4 - *(long *)this >> 3;
    uVar1 = lVar3 * -0x5555555555555555 + param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
LAB_00f25a38:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_00f25a38;
      pvVar2 = operator_new(uVar1 * 0x18);
    }
    puVar5 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
    puVar4 = puVar5;
    do {
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar9 = *(undefined8 *)param_2;
      param_1 = param_1 - 1;
      puVar4[2] = *(undefined8 *)(param_2 + 0x10);
      puVar8 = puVar4 + 3;
      puVar4[1] = uVar10;
      *puVar4 = uVar9;
      puVar4 = puVar8;
    } while (param_1 != 0);
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    __dest = (void *)((long)puVar5 - __n);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar8;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    do {
      uVar10 = *(undefined8 *)(param_2 + 8);
      uVar9 = *(undefined8 *)param_2;
      param_1 = param_1 - 1;
      puVar4[2] = *(undefined8 *)(param_2 + 0x10);
      puVar4[1] = uVar10;
      *puVar4 = uVar9;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 0x18);
      *(undefined8 **)(this + 8) = puVar4;
    } while (param_1 != 0);
  }
  return;
}

