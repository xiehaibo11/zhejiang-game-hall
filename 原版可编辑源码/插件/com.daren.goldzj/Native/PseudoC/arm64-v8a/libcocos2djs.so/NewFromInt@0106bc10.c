
/* v8::internal::MutableBigInt::NewFromInt(v8::internal::Isolate*, int) */

long * v8::internal::MutableBigInt::NewFromInt(Isolate *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    plVar1 = (long *)Factory::NewBigInt((Factory *)param_1,0,0);
    *(undefined4 *)(*plVar1 + 3) = 0;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    plVar1 = (long *)Factory::NewBigInt((Factory *)param_1,1,0);
    *(uint *)(*plVar1 + 3) = (uint)param_2 >> 0x1f | 2;
    if (param_2 < 0) {
      lVar2 = *plVar1;
      uVar3 = 0x80000000;
      if (param_2 != -0x80000000) {
        uVar3 = (ulong)-param_2;
      }
    }
    else {
      lVar2 = *plVar1;
      uVar3 = (ulong)(uint)param_2;
    }
    *(ulong *)(lVar2 + 7) = uVar3;
  }
  Canonicalize(*plVar1);
  return plVar1;
}

