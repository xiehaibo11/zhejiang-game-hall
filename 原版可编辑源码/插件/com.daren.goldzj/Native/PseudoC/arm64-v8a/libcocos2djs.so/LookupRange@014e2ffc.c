
/* v8::internal::HandlerTable::LookupRange(int, int*, v8::internal::HandlerTable::CatchPrediction*)
    */

uint __thiscall
v8::internal::HandlerTable::LookupRange
          (HandlerTable *this,int param_1,int *param_2,CatchPrediction *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)this < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    lVar4 = 0;
    uVar2 = 0xffffffff;
    do {
      lVar5 = *(long *)(this + 8);
      if ((*(int *)(lVar5 + (ulong)uVar3 * 4) <= param_1) &&
         (param_1 < *(int *)(lVar5 + (ulong)(uVar3 + 1) * 4))) {
        uVar1 = *(uint *)(lVar5 + (ulong)(uVar3 + 2) * 4);
        uVar2 = uVar1 >> 3;
        if (param_2 != (int *)0x0) {
          *param_2 = *(int *)(lVar5 + (ulong)(uVar3 + 3) * 4);
        }
        if (param_3 != (CatchPrediction *)0x0) {
          *(uint *)param_3 = uVar1 & 7;
        }
      }
      lVar4 = lVar4 + 1;
      uVar3 = uVar3 + 4;
    } while (lVar4 < *(int *)this);
  }
  return uVar2;
}

