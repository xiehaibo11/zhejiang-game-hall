
/* std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value>
   >::vector(std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value> > const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::vector
          (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *this,vector *param_1)

{
  Value *pVVar1;
  Value *pVVar2;
  ulong uVar3;
  Value *this_00;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if ((ulong)((long)uVar3 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    this_00 = operator_new(uVar3);
    *(Value **)this = this_00;
    *(Value **)(this + 8) = this_00;
    *(Value **)(this + 0x10) = this_00 + ((long)uVar3 >> 4) * 0x10;
    pVVar2 = *(Value **)(param_1 + 8);
    for (pVVar1 = *(Value **)param_1; pVVar1 != pVVar2; pVVar1 = pVVar1 + 0x10) {
      cocos2d::Value::Value(this_00,pVVar1);
      this_00 = (Value *)(*(long *)(this + 8) + 0x10);
      *(Value **)(this + 8) = this_00;
    }
  }
  return;
}

