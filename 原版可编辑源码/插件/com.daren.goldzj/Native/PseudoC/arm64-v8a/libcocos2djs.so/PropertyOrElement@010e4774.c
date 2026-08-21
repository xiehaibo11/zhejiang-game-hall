
/* v8::internal::LookupIterator::PropertyOrElement(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>, bool*,
   v8::internal::LookupIterator::Configuration) */

void __thiscall
v8::internal::LookupIterator::PropertyOrElement
          (LookupIterator *param_1_00,LookupIterator *this,ulong *param_1,LookupIterator *param_4,
          undefined1 *param_5,ulong *param_6)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  ulong local_58;
  ulong local_38;
  
  local_58 = 0;
  uVar4 = *(ulong *)param_4;
  uVar5 = (ulong)param_6 & 0xffffffff;
  if ((uVar4 & 1) == 0) {
    if (-1 < (int)uVar4) {
      uVar6 = uVar4 >> 1 & 0x7fffffff;
LAB_010e47bc:
      *param_5 = 1;
      local_58 = uVar6;
      if (((*param_1 & 1) == 0) ||
         (puVar2 = param_1, param_6 = param_1,
         *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_1 - 1)) < 0xa9)) {
        puVar2 = (ulong *)GetRootForNonJSReceiver(this,param_1,uVar6,param_5,param_6);
      }
      LookupIterator(param_1_00,this,param_1,uVar6,puVar2,uVar5,0);
      return;
    }
LAB_010e4870:
    param_4 = (LookupIterator *)Object::ConvertToName(this,param_4);
  }
  else {
    uVar3 = uVar4 & 0xffffffff00000000 | 7;
    if ((((*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x42) &&
         (dVar7 = *(double *)(uVar4 + 3), 0.0 <= dVar7)) && (dVar7 <= 9007199254740991.0)) &&
       (uVar6 = (ulong)dVar7, dVar7 == (double)uVar6)) goto LAB_010e47bc;
    if (0x40 < *(ushort *)(uVar3 + *(uint *)(uVar4 - 1))) goto LAB_010e4870;
  }
  puVar2 = param_1;
  if (param_4 == (LookupIterator *)0x0) {
    *param_5 = 0;
    param_4 = this + 200;
    if (((*param_1 & 1) == 0) ||
       (*(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_1 - 1)) < 0xa9)) {
      puVar2 = (ulong *)GetRootForNonJSReceiver(this,param_1,0xffffffffffffffff);
    }
    uVar5 = 3;
  }
  else {
    *param_5 = 1;
    uVar4 = *(ulong *)param_4;
    if (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40) {
      uVar1 = *(uint *)(uVar4 + 3);
      local_38 = uVar4;
      if ((uVar1 & 0xc0000003) == 0) {
        uVar3 = *param_1;
        uVar4 = (ulong)(uVar1 >> 3) & 0xffffff;
joined_r0x010e49b0:
        local_58 = uVar4;
        if (((uVar3 & 1) == 0) ||
           (*(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xa9)) {
          puVar2 = (ulong *)GetRootForNonJSReceiver(this,param_1,uVar4);
        }
        LookupIterator(param_1_00,this,param_1,uVar4,puVar2,uVar5,param_4);
        return;
      }
      if (((uVar1 & 5) != 4) &&
         (uVar4 = String::SlowAsIntegerIndex((String *)&local_38,&local_58), (uVar4 & 1) != 0)) {
        uVar3 = *param_1;
        uVar4 = local_58;
        goto joined_r0x010e49b0;
      }
    }
    if (((*param_1 & 1) == 0) ||
       (*(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_1 - 1)) < 0xa9)) {
      puVar2 = (ulong *)GetRootForNonJSReceiver(this,param_1,0xffffffffffffffff);
    }
  }
  LookupIterator(param_1_00,this,param_1,param_4,puVar2,uVar5);
  return;
}

