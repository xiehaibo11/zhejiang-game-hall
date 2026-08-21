
/* v8::internal::LookupIterator::PropertyOrElement(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>, bool*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::LookupIterator::Configuration) */

void __thiscall
v8::internal::LookupIterator::PropertyOrElement
          (LookupIterator *param_1_00,LookupIterator *this,ulong *param_1,LookupIterator *param_4,
          undefined1 *param_5,ulong *param_6,undefined4 param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  ulong local_58;
  ulong local_38;
  
  local_58 = 0;
  uVar4 = *(ulong *)param_4;
  if ((uVar4 & 1) == 0) {
    if (-1 < (int)uVar4) {
      uVar2 = uVar4 >> 1 & 0x7fffffff;
LAB_010e446c:
      *param_5 = 1;
      local_58 = uVar2;
      LookupIterator(param_1_00,this,param_1,uVar2,param_6,param_7,0);
      return;
    }
LAB_010e44ec:
    param_4 = (LookupIterator *)Object::ConvertToName(this,param_4);
  }
  else {
    uVar3 = uVar4 & 0xffffffff00000000 | 7;
    if ((((*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x42) &&
         (dVar5 = *(double *)(uVar4 + 3), 0.0 <= dVar5)) && (dVar5 <= 9007199254740991.0)) &&
       (uVar2 = (ulong)dVar5, dVar5 == (double)uVar2)) goto LAB_010e446c;
    if (0x40 < *(ushort *)(uVar3 + *(uint *)(uVar4 - 1))) goto LAB_010e44ec;
  }
  if (param_4 == (LookupIterator *)0x0) {
    *param_5 = 0;
    param_4 = this + 200;
    if (((*param_1 & 1) == 0) ||
       (param_6 = param_1, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_1 - 1)) < 0xa9))
    {
      param_6 = (ulong *)GetRootForNonJSReceiver(this,param_1,0xffffffffffffffff);
    }
    param_7 = 3;
  }
  else {
    *param_5 = 1;
    uVar4 = *(ulong *)param_4;
    if (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40) {
      uVar1 = *(uint *)(uVar4 + 3);
      local_38 = uVar4;
      if ((uVar1 & 0xc0000003) == 0) {
        local_58 = (ulong)(uVar1 >> 3) & 0xffffff;
LAB_010e45f4:
        LookupIterator(param_1_00,this,param_1,local_58,param_6,param_7,param_4);
        return;
      }
      if (((uVar1 & 5) != 4) &&
         (uVar4 = String::SlowAsIntegerIndex((String *)&local_38,&local_58), (uVar4 & 1) != 0))
      goto LAB_010e45f4;
    }
    this = (LookupIterator *)((ulong)*(uint *)((long)param_6 + 4) << 0x20);
  }
  LookupIterator(param_1_00,this,param_1,param_4,param_6,param_7);
  return;
}

