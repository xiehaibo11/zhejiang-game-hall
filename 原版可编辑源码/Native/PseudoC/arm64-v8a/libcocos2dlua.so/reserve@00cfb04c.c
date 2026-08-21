
/* std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value> >::reserve(unsigned
   long) */

void __thiscall
std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::reserve
          (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  Value *this_00;
  Value *pVVar3;
  long lVar4;
  
  this_00 = *(Value **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)this_00 >> 4) < param_1) {
    if (param_1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pVVar3 = *(Value **)(this + 8);
    pvVar2 = operator_new(param_1 * 0x10);
    lVar1 = (long)pvVar2 + ((long)pVVar3 - (long)this_00);
    lVar4 = lVar1;
    if ((long)pVVar3 - (long)this_00 != 0) {
      do {
        pVVar3 = pVVar3 + -0x10;
        cocos2d::Value::Value((Value *)(lVar4 + -0x10),pVVar3);
        lVar4 = lVar4 + -0x10;
      } while (this_00 != pVVar3);
      pVVar3 = *(Value **)this;
      this_00 = *(Value **)(this + 8);
    }
    *(long *)this = lVar4;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + param_1 * 0x10);
    while (this_00 != pVVar3) {
      this_00 = this_00 + -0x10;
      cocos2d::Value::~Value(this_00);
    }
    if (pVVar3 != (Value *)0x0) {
      operator_delete(pVVar3);
      return;
    }
  }
  return;
}

