
/* v8::internal::LiveEdit::TranslatePosition(std::__ndk1::vector<v8::internal::SourceChangeRange,
   std::__ndk1::allocator<v8::internal::SourceChangeRange> > const&, int) */

int v8::internal::LiveEdit::TranslatePosition(vector *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)param_1;
  lVar4 = *(long *)(param_1 + 8) - lVar3;
  lVar2 = lVar3;
  if (lVar4 != 0) {
    uVar5 = lVar4 >> 4;
    lVar4 = lVar3;
    do {
      uVar6 = uVar5 >> 1;
      lVar1 = lVar4 + uVar6 * 0x10;
      lVar2 = lVar1 + 0x10;
      uVar5 = uVar5 + ~uVar6;
      if (param_2 <= *(int *)(lVar1 + 4)) {
        lVar2 = lVar4;
        uVar5 = uVar6;
      }
      lVar4 = lVar2;
    } while (uVar5 != 0);
  }
  if ((lVar2 != *(long *)(param_1 + 8)) && (*(int *)(lVar2 + 4) == param_2)) {
    return *(int *)(lVar2 + 0xc);
  }
  if (lVar2 != lVar3) {
    param_2 = (*(int *)(lVar2 + -4) + param_2) - *(int *)(lVar2 + -0xc);
  }
  return param_2;
}

