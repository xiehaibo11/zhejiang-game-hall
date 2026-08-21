
/* v8::internal::Object::Add(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 v8::internal::Object::Add(Factory *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *param_2;
  if (((uVar2 & 1) == 0) ||
     (uVar3 = uVar2 & 0xffffffff00000000 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x42)) {
    uVar3 = *param_3;
    if (((uVar3 & 1) == 0) ||
       (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x42)) {
      if ((uVar2 & 1) == 0) {
        dVar4 = (double)((int)uVar2 >> 1);
      }
      else {
        dVar4 = *(double *)(uVar2 + 3);
      }
      goto joined_r0x01106414;
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 & 0xffffffff00000000 | 7;
      goto LAB_01106450;
    }
  }
  else {
LAB_01106450:
    if (((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) && (uVar3 = *param_3, (uVar3 & 1) != 0))
       && (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40))
    goto LAB_01106584;
    if (0x43 < *(ushort *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7)) {
      param_2 = (ulong *)JSReceiver::ToPrimitive(param_2,0);
    }
  }
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  uVar2 = *param_3;
  if (((uVar2 & 1) != 0) &&
     (0x43 < *(ushort *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7))) {
    param_3 = (ulong *)JSReceiver::ToPrimitive(param_3,0);
  }
  if (param_3 == (ulong *)0x0) {
    return 0;
  }
  uVar2 = *param_2;
  if (((uVar2 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))) {
    uVar2 = *param_3;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 & 0xffffffff00000000 | 7;
      if (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) goto LAB_0110651c;
      if ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42) &&
         (param_3 = (ulong *)ConvertToNumberOrNumeric(param_1,param_3,0), param_3 == (ulong *)0x0))
      {
        return 0;
      }
    }
    uVar2 = *param_2;
    if ((((uVar2 & 1) == 0) ||
        (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42)) ||
       (param_2 = (ulong *)ConvertToNumberOrNumeric(param_1,param_2,0), param_2 != (ulong *)0x0)) {
      uVar2 = *param_2;
      if ((uVar2 & 1) == 0) {
        dVar4 = (double)((int)uVar2 >> 1);
      }
      else {
        dVar4 = *(double *)(uVar2 + 3);
      }
      uVar3 = *param_3;
joined_r0x01106414:
      if ((uVar3 & 1) == 0) {
        dVar5 = (double)((int)uVar3 >> 1);
      }
      else {
        dVar5 = *(double *)(uVar3 + 3);
      }
      uVar1 = Factory::NewNumber<(v8::internal::AllocationType)0>(param_1,dVar4 + dVar5);
      return uVar1;
    }
  }
  else {
LAB_0110651c:
    uVar2 = *param_3;
    if (((((uVar2 & 1) != 0) &&
         (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x40)) ||
        (param_3 = (ulong *)ConvertToString(param_1,param_3), param_3 != (ulong *)0x0)) &&
       (((uVar2 = *param_2, (uVar2 & 1) != 0 &&
         (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x40)) ||
        (param_2 = (ulong *)ConvertToString(param_1,param_2), param_2 != (ulong *)0x0)))) {
LAB_01106584:
      uVar1 = Factory::NewConsString(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

