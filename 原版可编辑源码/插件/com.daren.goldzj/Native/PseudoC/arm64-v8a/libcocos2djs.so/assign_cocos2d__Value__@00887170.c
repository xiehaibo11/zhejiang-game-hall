
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::Value*>::value&&is_constructible<cocos2d::Value,
   std::__ndk1::iterator_traits<cocos2d::Value*>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value>
   >::assign<cocos2d::Value*>(cocos2d::Value*, cocos2d::Value*) */

void __thiscall
std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::assign<cocos2d::Value*>
          (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *this,Value *param_1,
          Value *param_2)

{
  long lVar1;
  ulong uVar2;
  Value *pVVar3;
  Value *pVVar4;
  Value *pVVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(this + 0x10);
  pVVar4 = *(Value **)this;
  uVar6 = (long)param_2 - (long)param_1 >> 4;
  if ((ulong)(lVar1 - (long)pVVar4 >> 4) < uVar6) {
    if (pVVar4 != (Value *)0x0) {
      pVVar5 = *(Value **)(this + 8);
      pVVar3 = pVVar4;
      if (pVVar5 != pVVar4) {
        do {
          pVVar5 = pVVar5 + -0x10;
          cocos2d::Value::clear(pVVar5);
        } while (pVVar4 != pVVar5);
        pVVar3 = *(Value **)this;
      }
      *(Value **)(this + 8) = pVVar4;
      operator_delete(pVVar3);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar6 >> 0x3c != 0) {
LAB_008872c0:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 4) < 0x7ffffffffffffff) {
      uVar2 = lVar1 >> 3;
      if ((uVar6 <= uVar2) && (uVar6 = uVar2, uVar2 >> 0x3c != 0)) goto LAB_008872c0;
    }
    else {
      uVar6 = 0xfffffffffffffff;
    }
    pVVar4 = operator_new(uVar6 * 0x10);
    *(Value **)this = pVVar4;
    *(Value **)(this + 8) = pVVar4;
    *(Value **)(this + 0x10) = pVVar4 + uVar6 * 0x10;
    for (; param_1 != param_2; param_1 = param_1 + 0x10) {
      *(undefined4 *)(pVVar4 + 8) = 0;
      cocos2d::Value::operator=(pVVar4,param_1);
      pVVar4 = (Value *)(*(long *)(this + 8) + 0x10);
      *(Value **)(this + 8) = pVVar4;
    }
  }
  else {
    uVar2 = *(long *)(this + 8) - (long)pVVar4 >> 4;
    pVVar3 = param_1 + (*(long *)(this + 8) - (long)pVVar4);
    pVVar5 = pVVar3;
    if (uVar6 <= uVar2) {
      pVVar5 = param_2;
    }
    for (; pVVar5 != param_1; param_1 = param_1 + 0x10) {
      cocos2d::Value::operator=(pVVar4,param_1);
      pVVar4 = pVVar4 + 0x10;
    }
    if (uVar2 < uVar6) {
      if (pVVar5 != param_2) {
        pVVar4 = *(Value **)(this + 8);
        do {
          *(undefined4 *)(pVVar4 + 8) = 0;
          cocos2d::Value::operator=(pVVar4,pVVar3);
          pVVar3 = pVVar3 + 0x10;
          pVVar4 = (Value *)(*(long *)(this + 8) + 0x10);
          *(Value **)(this + 8) = pVVar4;
        } while (param_2 != pVVar3);
      }
    }
    else {
      pVVar3 = *(Value **)(this + 8);
      while (pVVar3 != pVVar4) {
        pVVar3 = pVVar3 + -0x10;
        cocos2d::Value::clear(pVVar3);
      }
      *(Value **)(this + 8) = pVVar4;
    }
  }
  return;
}

