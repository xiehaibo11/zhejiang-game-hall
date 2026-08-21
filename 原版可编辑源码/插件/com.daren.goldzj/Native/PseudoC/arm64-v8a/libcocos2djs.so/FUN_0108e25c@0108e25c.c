
void FUN_0108e25c(undefined8 param_1,ulong *param_2,int param_3,ulong *param_4,undefined8 param_5,
                 int param_6)

{
  byte bVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  uVar3 = *param_2;
  bVar1 = *(byte *)((uVar3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar3 - 1));
  if (((bVar1 >> 3 == 0xc) || ((bVar1 & 0xf0) != 0x20)) ||
     (param_6 != *(int *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7)) + 3) >> 1)) {
    FUN_0108f294(param_2,param_6);
  }
  else {
    if ((bVar1 < 0x30) && (bVar1 >> 3 != 4)) {
      v8::internal::JSObject::TransitionElementsKind(param_2,4);
    }
    if (bVar1 < 0x20) {
      v8::internal::JSObject::EnsureWritableFastElements(param_2);
    }
  }
  uVar4 = *param_4;
  uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if ((uVar4 & 1) == 0) {
    dVar5 = (double)((int)uVar4 >> 1);
    pdVar2 = (double *)(uVar3 + (long)(int)(param_3 << 3 | 7));
  }
  else {
    dVar5 = *(double *)(uVar4 + 3);
    pdVar2 = (double *)(uVar3 + (long)(int)(param_3 << 3 | 7));
    if (NAN(dVar5)) {
      *pdVar2 = NAN;
      return;
    }
  }
  *pdVar2 = dVar5;
  return;
}

