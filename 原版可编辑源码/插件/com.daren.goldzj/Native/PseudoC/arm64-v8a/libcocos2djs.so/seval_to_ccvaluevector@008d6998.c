
/* seval_to_ccvaluevector(se::Value const&, std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> >*) */

undefined4 seval_to_ccvaluevector(Value *param_1,vector *param_2)

{
  long lVar1;
  Object *this;
  ulong uVar2;
  undefined4 uVar3;
  Value *pVVar4;
  uint uVar5;
  Value *pVVar6;
  uint local_5c;
  Value aVStack_58 [16];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    uVar2 = se::Object::isArray(this);
    if ((uVar2 & 1) != 0) {
      local_5c = 0;
      se::Object::getArrayLength(this,&local_5c);
      se::Value::Value(aVStack_48);
      cocos2d::Value::Value(aVStack_58);
      if (local_5c != 0) {
        uVar5 = 0;
LAB_008d6a04:
        uVar2 = se::Object::getArrayElement(this,uVar5,aVStack_48);
        if ((uVar2 & 1) == 0) goto LAB_008d6a58;
        uVar2 = seval_to_ccvalue(aVStack_48,aVStack_58);
        if ((uVar2 & 1) != 0) {
          if (*(Value **)(param_2 + 8) == *(Value **)(param_2 + 0x10)) {
            std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
            __push_back_slow_path<cocos2d::Value_const&>
                      ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_2,
                       aVStack_58);
          }
          else {
            cocos2d::Value::Value(*(Value **)(param_2 + 8),aVStack_58);
            *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
          }
          goto LAB_008d6a58;
        }
        pVVar6 = *(Value **)param_2;
        pVVar4 = *(Value **)(param_2 + 8);
        while (pVVar4 != pVVar6) {
          pVVar4 = pVVar4 + -0x10;
          cocos2d::Value::~Value(pVVar4);
        }
        uVar3 = 0;
        *(Value **)(param_2 + 8) = pVVar6;
        goto LAB_008d6ae8;
      }
LAB_008d6a68:
      uVar3 = 1;
LAB_008d6ae8:
      cocos2d::Value::~Value(aVStack_58);
      se::Value::~Value(aVStack_48);
      goto LAB_008d6af8;
    }
    pVVar6 = *(Value **)param_2;
    pVVar4 = *(Value **)(param_2 + 8);
    while (pVVar4 != pVVar6) {
      pVVar4 = pVVar4 + -0x10;
      cocos2d::Value::~Value(pVVar4);
    }
  }
  else {
    pVVar6 = *(Value **)param_2;
    pVVar4 = *(Value **)(param_2 + 8);
    while (pVVar4 != pVVar6) {
      pVVar4 = pVVar4 + -0x10;
      cocos2d::Value::~Value(pVVar4);
    }
  }
  uVar3 = 0;
  *(Value **)(param_2 + 8) = pVVar6;
LAB_008d6af8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_008d6a58:
  uVar5 = uVar5 + 1;
  if (local_5c <= uVar5) goto LAB_008d6a68;
  goto LAB_008d6a04;
}

