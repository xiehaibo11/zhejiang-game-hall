
/* v8::internal::RelocIterator::RelocIterator(v8::internal::CodeDesc const&, int) */

void __thiscall
v8::internal::RelocIterator::RelocIterator(RelocIterator *this,CodeDesc *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)param_1;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x34);
  this[0x38] = (RelocIterator)0x0;
  *(long *)(this + 0x10) = lVar3;
  lVar3 = lVar3 + iVar1;
  lVar4 = lVar3 - iVar2;
  *(int *)(this + 0x3c) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(long *)this = lVar3;
  *(long *)(this + 8) = lVar4;
  *(undefined8 *)(this + 0x20) = 0;
  if (param_2 != 0) {
    next(this);
    return;
  }
  *(long *)this = lVar4;
  next(this);
  return;
}

