
/* v8::internal::RelocIterator::RelocIterator(v8::internal::Code, v8::internal::ByteArray, int) */

void __thiscall
v8::internal::RelocIterator::RelocIterator
          (RelocIterator *this,long param_2,long param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  local_28 = param_2;
  uVar2 = Code::has_constant_pool();
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    if (*(int *)(local_28 + 0x17) < 0) {
      lVar3 = Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      lVar3 = local_28 + 0x3f;
    }
    lVar3 = lVar3 + *(int *)(local_28 + 0x23);
  }
  iVar1 = *(int *)(param_3 + 3);
  param_3 = param_3 + 7;
  this[0x38] = (RelocIterator)0x0;
  *(int *)(this + 0x3c) = param_4;
  *(undefined8 *)(this + 0x20) = 0;
  *(long *)(this + 0x28) = param_2;
  *(long *)(this + 8) = param_3;
  *(long *)(this + 0x10) = param_2 + 0x3f;
  *(long *)this = param_3 + (iVar1 >> 1);
  *(long *)(this + 0x30) = lVar3;
  if (param_4 == 0) {
    *(long *)this = param_3;
  }
  next(this);
  return;
}

