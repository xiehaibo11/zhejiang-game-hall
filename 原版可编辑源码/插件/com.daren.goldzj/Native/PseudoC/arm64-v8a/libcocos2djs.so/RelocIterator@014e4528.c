
/* v8::internal::RelocIterator::RelocIterator(v8::internal::Code, int) */

void __thiscall
v8::internal::RelocIterator::RelocIterator(RelocIterator *this,ulong param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_28;
  
  uVar5 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 3);
  local_28 = param_2;
  uVar3 = Code::has_constant_pool();
  if ((uVar3 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(local_28 + 0x17) < 0) {
      lVar4 = Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      lVar4 = local_28 + 0x3f;
    }
    lVar4 = lVar4 + *(int *)(local_28 + 0x23);
  }
  iVar2 = *(int *)(uVar5 + 3);
  lVar1 = uVar5 + 7;
  this[0x38] = (RelocIterator)0x0;
  *(int *)(this + 0x3c) = param_3;
  *(undefined8 *)(this + 0x20) = 0;
  *(ulong *)(this + 0x28) = param_2;
  *(long *)(this + 8) = lVar1;
  *(ulong *)(this + 0x10) = param_2 + 0x3f;
  *(long *)this = lVar1 + (iVar2 >> 1);
  *(long *)(this + 0x30) = lVar4;
  if (param_3 == 0) {
    *(long *)this = lVar1;
  }
  next(this);
  return;
}

