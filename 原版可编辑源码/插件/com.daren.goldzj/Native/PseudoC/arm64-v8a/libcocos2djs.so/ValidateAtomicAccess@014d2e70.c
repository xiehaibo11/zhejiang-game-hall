
/* v8::internal::ValidateAtomicAccess(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSTypedArray>, v8::internal::Handle<v8::internal::Object>) */

undefined1  [16] v8::internal::ValidateAtomicAccess(Factory *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong unaff_x20;
  double dVar4;
  undefined1 auVar5 [16];
  
  if ((*param_3 & 0x80000001) != 0) {
    param_3 = (ulong *)Object::ConvertToIndex(param_1,param_3,0xbf);
  }
  if (param_3 == (ulong *)0x0) {
    uVar1 = 0;
    goto LAB_014d2f44;
  }
  uVar3 = *param_3;
  if ((uVar3 & 1) == 0) {
    if (-1 < (int)uVar3) {
      unaff_x20 = uVar3 >> 1 & 0x7fffffff;
LAB_014d2eec:
      uVar3 = *param_2;
      if (((*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb)) + 0x1b) >> 2 & 1)
           == 0) && (unaff_x20 < *(ulong *)(uVar3 + 0x1f))) {
        uVar1 = 1;
        goto LAB_014d2f44;
      }
    }
  }
  else {
    dVar4 = *(double *)(uVar3 + 3);
    if ((0.0 <= dVar4) && (dVar4 < 1.8446744073709552e+19)) {
      unaff_x20 = (ulong)dVar4;
      goto LAB_014d2eec;
    }
  }
  puVar2 = (undefined8 *)Factory::NewRangeError(param_1,0xbf,0,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar2,0);
  uVar1 = 0;
LAB_014d2f44:
  auVar5._8_8_ = unaff_x20;
  auVar5._0_8_ = uVar1;
  return auVar5;
}

