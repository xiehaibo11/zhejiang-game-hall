
/* std::__ndk1::vector<cocos2d::PUBillboardChain::ChainSegment,
   std::__ndk1::allocator<cocos2d::PUBillboardChain::ChainSegment> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::PUBillboardChain::ChainSegment,std::__ndk1::allocator<cocos2d::PUBillboardChain::ChainSegment>>
::__append(vector<cocos2d::PUBillboardChain::ChainSegment,std::__ndk1::allocator<cocos2d::PUBillboardChain::ChainSegment>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  void *__s;
  ulong uVar7;
  
  puVar3 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar3 >> 3) * -0x5555555555555555)) {
    puVar4 = puVar3;
    if (param_1 != 0) {
      puVar4 = puVar3 + param_1 * 3;
      lVar5 = param_1 * 0x18;
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        lVar5 = lVar5 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar5 != 0);
    }
    *(undefined8 **)(this + 8) = puVar4;
    return;
  }
  __src = *(void **)this;
  uVar7 = 0xaaaaaaaaaaaaaaa;
  __n = (long)puVar3 - (long)__src;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - (long)__src >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x555555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e5c048;
    }
  }
  pvVar2 = operator_new(uVar7 * 0x18);
LAB_00e5c048:
  __s = (void *)((long)pvVar2 + ((long)__n >> 3) * 8);
  memset(__s,0,((param_1 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
  if (0 < (long)__n) {
    memcpy((void *)((long)__s - __n),__src,__n);
  }
  *(void **)this = (void *)((long)__s - __n);
  *(void **)(this + 8) = (void *)((long)__s + param_1 * 0x18);
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar7 * 0x18);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

