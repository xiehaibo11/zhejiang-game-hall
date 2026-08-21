
/* std::__ndk1::vector<std::__ndk1::pair<v8::internal::VariableProxy*, int>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*, int> >
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
::__append(vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  long lVar7;
  
  puVar4 = *(undefined8 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 4) < param_1) {
    lVar7 = (long)puVar4 - *(long *)this >> 4;
    uVar1 = lVar7 + param_1;
    if (uVar1 >> 0x3c != 0) {
LAB_0116507c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this;
    uVar6 = lVar5 >> 3;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffffffffffe < (ulong)(lVar5 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_0116507c;
      pvVar3 = operator_new(uVar1 << 4);
    }
    puVar2 = (undefined8 *)((long)pvVar3 + lVar7 * 0x10);
    puVar4 = puVar2;
    do {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      param_1 = param_1 - 1;
      puVar4 = puVar4 + 2;
    } while (param_1 != 0);
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    __dest = (void *)((long)puVar2 - __n);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = __dest;
    *(undefined8 **)(this + 8) = puVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    do {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      param_1 = param_1 - 1;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 0x10);
      *(undefined8 **)(this + 8) = puVar4;
    } while (param_1 != 0);
  }
  return;
}

