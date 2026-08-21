
/* sevals_variadic_to_ccvaluevector(std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value>
   > const&, std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value> >*) */

undefined4 sevals_variadic_to_ccvaluevector(vector *param_1,vector *param_2)

{
  Value *pVVar1;
  Value *pVVar2;
  Value *pVVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  Value *this;
  Value aVStack_48 [16];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  cocos2d::Value::Value(aVStack_48);
  pVVar1 = *(Value **)param_1;
  pVVar3 = *(Value **)(param_1 + 8);
  do {
    if (pVVar1 == pVVar3) {
      uVar6 = 1;
LAB_008d7040:
      cocos2d::Value::~Value(aVStack_48);
      if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    uVar5 = seval_to_ccvalue(pVVar1,aVStack_48);
    if ((uVar5 & 1) == 0) {
      pVVar2 = *(Value **)param_2;
      this = *(Value **)(param_2 + 8);
      while (this != pVVar2) {
        this = this + -0x10;
        cocos2d::Value::~Value(this);
      }
      uVar6 = 0;
      *(Value **)(param_2 + 8) = pVVar2;
      goto LAB_008d7040;
    }
    if (*(Value **)(param_2 + 8) == *(Value **)(param_2 + 0x10)) {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value_const&>
                ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_2,aVStack_48
                );
    }
    else {
      cocos2d::Value::Value(*(Value **)(param_2 + 8),aVStack_48);
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
    }
    pVVar1 = pVVar1 + 0x10;
  } while( true );
}

