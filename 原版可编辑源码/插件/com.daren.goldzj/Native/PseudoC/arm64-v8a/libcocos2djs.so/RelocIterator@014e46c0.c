
/* v8::internal::RelocIterator::RelocIterator(v8::internal::CodeReference, int) */

void __thiscall
v8::internal::RelocIterator::RelocIterator
          (RelocIterator *this,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  uVar1 = CodeReference::instruction_start((CodeReference *)&local_50);
  uVar2 = CodeReference::constant_pool((CodeReference *)&local_50);
  uVar3 = CodeReference::relocation_end((CodeReference *)&local_50);
  uVar4 = CodeReference::relocation_start((CodeReference *)&local_50);
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x38] = (RelocIterator)0x0;
  *(int *)(this + 0x3c) = param_4;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar2;
  if (param_4 == 0) {
    *(undefined8 *)this = uVar4;
  }
  next(this);
  return;
}

