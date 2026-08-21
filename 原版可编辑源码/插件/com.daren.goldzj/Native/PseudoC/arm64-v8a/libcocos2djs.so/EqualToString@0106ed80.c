
/* v8::internal::BigInt::EqualToString(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::String>) */

undefined8 v8::internal::BigInt::EqualToString(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar1 = (long *)StringToBigInt(param_1,param_3);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar3 = *param_2;
    lVar4 = *plVar1;
    if ((((*(uint *)(lVar3 + 3) ^ *(uint *)(lVar4 + 3)) & 1) == 0) &&
       (((*(uint *)(lVar4 + 3) ^ *(uint *)(lVar3 + 3)) & 0x7ffffffe) == 0)) {
      if ((*(uint *)(lVar3 + 3) & 0x7ffffffe) != 0) {
        uVar5 = 0;
        uVar6 = 0;
        do {
          uVar7 = uVar5 & 0xfffffff8 | 7;
          if (*(long *)(uVar7 + lVar3) != *(long *)(uVar7 + lVar4)) goto LAB_0106edc8;
          uVar6 = uVar6 + 1;
          uVar5 = uVar5 + 8;
        } while (uVar6 < ((ulong)(*(uint *)(lVar3 + 3) >> 1) & 0x3fffffff));
      }
      uVar2 = 1;
    }
    else {
LAB_0106edc8:
      uVar2 = 0;
    }
  }
  return uVar2;
}

