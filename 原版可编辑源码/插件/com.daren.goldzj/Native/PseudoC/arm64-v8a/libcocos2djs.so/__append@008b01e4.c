
/* std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
          (vector<se::Value,std::__ndk1::allocator<se::Value>> *this,ulong param_1)

{
  Value *pVVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Value *pVVar6;
  Value *this_00;
  ulong uVar7;
  Value *pVVar8;
  Value *pVVar9;
  
  pVVar1 = *(Value **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pVVar1 >> 4)) {
    do {
      se::Value::Value(pVVar1);
      param_1 = param_1 - 1;
      pVVar1 = (Value *)(*(long *)(this + 8) + 0x10);
      *(Value **)(this + 8) = pVVar1;
    } while (param_1 != 0);
    return;
  }
  lVar5 = (long)pVVar1 - *(long *)this >> 4;
  uVar7 = lVar5 + param_1;
  if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
    uVar4 = lVar3 >> 3;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_008b0290;
    }
    if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar7 = 0xfffffffffffffff;
  }
  pvVar2 = operator_new(uVar7 << 4);
LAB_008b0290:
  pVVar9 = (Value *)((long)pvVar2 + lVar5 * 0x10);
  pVVar1 = pVVar9;
  do {
    se::Value::Value(pVVar1);
    param_1 = param_1 - 1;
    pVVar1 = pVVar1 + 0x10;
  } while (param_1 != 0);
  pVVar6 = *(Value **)this;
  pVVar8 = *(Value **)(this + 8);
  this_00 = pVVar6;
  if (pVVar8 != pVVar6) {
    do {
      pVVar8 = pVVar8 + -0x10;
      se::Value::Value(pVVar9 + -0x10,pVVar8);
      pVVar9 = pVVar9 + -0x10;
    } while (pVVar6 != pVVar8);
    pVVar6 = *(Value **)this;
    this_00 = *(Value **)(this + 8);
  }
  *(Value **)this = pVVar9;
  *(Value **)(this + 8) = pVVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar7 * 0x10);
  while (this_00 != pVVar6) {
    this_00 = this_00 + -0x10;
    se::Value::~Value(this_00);
  }
  if (pVVar6 == (Value *)0x0) {
    return;
  }
  operator_delete(pVVar6);
  return;
}

