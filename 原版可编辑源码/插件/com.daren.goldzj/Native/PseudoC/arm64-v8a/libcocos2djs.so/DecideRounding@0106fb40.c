
/* v8::internal::MutableBigInt::DecideRounding(v8::internal::Handle<v8::internal::BigIntBase>, int,
   int, unsigned long) */

undefined8
v8::internal::MutableBigInt::DecideRounding(long *param_1,uint param_2,int param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      uVar2 = (ulong)~param_2;
    }
    else {
      if (param_3 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
      param_4 = *(ulong *)(*param_1 + ((long)(param_3 * 8) | 7U));
      uVar2 = 0x3f;
    }
    uVar2 = 1L << (uVar2 & 0x3f);
    if ((uVar2 & param_4) != 0) {
      if ((uVar2 - 1 & param_4) == 0) {
        lVar3 = (long)param_3 + 1;
        iVar4 = param_3 * 8 + -1;
        do {
          lVar3 = lVar3 + -1;
          if (lVar3 < 1) {
            return 1;
          }
          lVar1 = (long)iVar4;
          iVar4 = iVar4 + -8;
        } while (*(long *)(*param_1 + lVar1) == 0);
      }
      return 2;
    }
  }
  return 0;
}

