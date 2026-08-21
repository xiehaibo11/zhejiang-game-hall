
/* v8::internal::RelocIterator::RelocIterator(v8::internal::EmbeddedData*, v8::internal::Code, int)
    */

void __thiscall
v8::internal::RelocIterator::RelocIterator
          (RelocIterator *this,EmbeddedData *param_1,ulong param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_38;
  
  local_38 = param_3;
  uVar3 = EmbeddedData::InstructionStartOfBuiltin(param_1,*(int *)(param_3 + 0x27));
  uVar4 = Code::has_constant_pool();
  if ((uVar4 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    if (*(int *)(local_38 + 0x17) < 0) {
      lVar5 = Code::OffHeapInstructionStart((Code *)&local_38);
    }
    else {
      lVar5 = local_38 + 0x3f;
    }
    lVar5 = lVar5 + *(int *)(local_38 + 0x23);
  }
  uVar4 = local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 3);
  lVar1 = uVar4 + 7;
  iVar2 = *(int *)(uVar4 + 3);
  this[0x38] = (RelocIterator)0x0;
  *(int *)(this + 0x3c) = param_4;
  *(undefined8 *)(this + 0x20) = 0;
  *(ulong *)(this + 0x28) = param_3;
  *(long *)(this + 8) = lVar1;
  *(undefined8 *)(this + 0x10) = uVar3;
  *(long *)this = lVar1 + (iVar2 >> 1);
  *(long *)(this + 0x30) = lVar5;
  if (param_4 == 0) {
    *(long *)this = lVar1;
  }
  next(this);
  return;
}

