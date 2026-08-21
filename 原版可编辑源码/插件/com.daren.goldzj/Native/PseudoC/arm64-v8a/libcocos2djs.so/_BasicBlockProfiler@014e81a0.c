
/* v8::internal::BasicBlockProfiler::~BasicBlockProfiler() */

void __thiscall v8::internal::BasicBlockProfiler::~BasicBlockProfiler(BasicBlockProfiler *this)

{
  long lVar1;
  Data *this_00;
  BasicBlockProfiler *pBVar2;
  BasicBlockProfiler *pBVar3;
  
  for (pBVar3 = *(BasicBlockProfiler **)(this + 8); this != pBVar3;
      pBVar3 = *(BasicBlockProfiler **)(pBVar3 + 8)) {
    this_00 = *(Data **)(pBVar3 + 0x10);
    if (this_00 != (Data *)0x0) {
      Data::~Data(this_00);
      operator_delete(this_00);
    }
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x18));
  if (*(long *)(this + 0x10) != 0) {
    lVar1 = *(long *)this;
    pBVar3 = *(BasicBlockProfiler **)(this + 8);
    *(undefined8 *)(*(long *)pBVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(undefined8 **)(lVar1 + 8) = *(undefined8 *)pBVar3;
    *(undefined8 *)(this + 0x10) = 0;
    while (pBVar3 != this) {
      pBVar2 = *(BasicBlockProfiler **)(pBVar3 + 8);
      operator_delete(pBVar3);
      pBVar3 = pBVar2;
    }
  }
  return;
}

