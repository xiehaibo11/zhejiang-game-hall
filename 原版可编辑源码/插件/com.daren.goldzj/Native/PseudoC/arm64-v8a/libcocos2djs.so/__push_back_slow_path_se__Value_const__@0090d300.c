
/* void std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value>
   >::__push_back_slow_path<se::Value const&>(se::Value const&) */

void __thiscall
std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
__push_back_slow_path<se::Value_const&>
          (vector<se::Value,std::__ndk1::allocator<se::Value>> *this,Value *param_1)

{
  Value *pVVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Value *this_00;
  Value *this_01;
  Value *pVVar6;
  Value *pVVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar8 = lVar5 + 1;
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
    uVar4 = lVar3 >> 3;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_0090d380;
    }
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar8 = 0xfffffffffffffff;
  }
  pvVar2 = operator_new(uVar8 << 4);
LAB_0090d380:
  this_00 = (Value *)((long)pvVar2 + lVar5 * 0x10);
  se::Value::Value(this_00,param_1);
  this_01 = *(Value **)this;
  pVVar6 = *(Value **)(this + 8);
  pVVar1 = this_00 + 0x10;
  pVVar7 = this_01;
  if (pVVar6 != this_01) {
    do {
      pVVar6 = pVVar6 + -0x10;
      se::Value::Value(this_00 + -0x10,pVVar6);
      this_00 = this_00 + -0x10;
    } while (this_01 != pVVar6);
    this_01 = *(Value **)(this + 8);
    pVVar7 = *(Value **)this;
  }
  *(Value **)this = this_00;
  *(Value **)(this + 8) = pVVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0x10);
  while (this_01 != pVVar7) {
    this_01 = this_01 + -0x10;
    se::Value::~Value(this_01);
  }
  if (pVVar7 != (Value *)0x0) {
    operator_delete(pVVar7);
    return;
  }
  return;
}

