
/* std::__ndk1::vector<cocos2d::Properties::Property,
   std::__ndk1::allocator<cocos2d::Properties::Property> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::reserve
          (vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
           *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pvVar5 = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pvVar5 >> 4) * -0x5555555555555555) < param_1) {
    if (0x555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = *(void **)(this + 8);
    pvVar2 = operator_new(param_1 * 0x30);
    lVar1 = (long)pvVar2 + ((long)pvVar4 - (long)pvVar5);
    lVar3 = lVar1;
    if ((long)pvVar4 - (long)pvVar5 != 0) {
      do {
        uVar7 = *(undefined8 *)((long)pvVar4 + -0x28);
        uVar6 = *(undefined8 *)((long)pvVar4 + -0x30);
        *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)((long)pvVar4 + -0x20);
        *(undefined8 *)(lVar3 + -0x28) = uVar7;
        *(undefined8 *)(lVar3 + -0x30) = uVar6;
        uVar7 = *(undefined8 *)((long)pvVar4 + -0x10);
        uVar6 = *(undefined8 *)((long)pvVar4 + -0x18);
        *(undefined8 *)((long)pvVar4 + -0x28) = 0;
        *(undefined8 *)((long)pvVar4 + -0x20) = 0;
        *(undefined8 *)((long)pvVar4 + -0x30) = 0;
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)((long)pvVar4 + -8);
        *(undefined8 *)(lVar3 + -0x10) = uVar7;
        *(undefined8 *)(lVar3 + -0x18) = uVar6;
        *(undefined8 *)((long)pvVar4 + -0x10) = 0;
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        *(undefined8 *)((long)pvVar4 + -0x18) = 0;
        pvVar4 = (void *)((long)pvVar4 + -0x30);
        lVar3 = lVar3 + -0x30;
      } while (pvVar5 != pvVar4);
      pvVar4 = *(void **)this;
      pvVar5 = *(void **)(this + 8);
    }
    *(long *)this = lVar3;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + param_1 * 0x30);
    while (pvVar2 = pvVar5, pvVar2 != pvVar4) {
      if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -8));
      }
      pvVar5 = (void *)((long)pvVar2 + -0x30);
      if ((*(byte *)((long)pvVar2 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x20));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
      return;
    }
  }
  return;
}

