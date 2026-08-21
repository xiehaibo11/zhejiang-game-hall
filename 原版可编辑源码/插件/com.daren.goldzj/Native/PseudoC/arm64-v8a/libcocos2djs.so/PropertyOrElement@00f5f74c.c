
/* v8::internal::LookupIterator::PropertyOrElement(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::LookupIterator::Configuration) */

void __thiscall
v8::internal::LookupIterator::PropertyOrElement
          (LookupIterator *param_1_00,LookupIterator *this,ulong *param_1,ulong *param_4,
          undefined4 param_5)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_38;
  
  uVar4 = *param_4;
  if (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40) {
    uVar1 = *(uint *)(uVar4 + 3);
    local_38 = uVar4;
    if ((uVar1 & 0xc0000003) == 0) {
      uVar3 = *param_1;
      uVar4 = (ulong)(uVar1 >> 3) & 0xffffff;
    }
    else {
      if (((uVar1 & 5) == 4) ||
         (uVar4 = String::SlowAsIntegerIndex((String *)&local_38,&local_58), (uVar4 & 1) == 0))
      goto LAB_00f5f7d8;
      uVar3 = *param_1;
      uVar4 = local_58;
    }
    local_58 = uVar4;
    if (((uVar3 & 1) == 0) ||
       (puVar2 = param_1, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xa9)) {
      puVar2 = (ulong *)GetRootForNonJSReceiver(this,param_1,uVar4);
    }
    *(undefined4 *)param_1_00 = param_5;
    *(LookupIterator **)(param_1_00 + 0x18) = this;
    *(undefined8 *)(param_1_00 + 0x28) = 0;
    *(ulong **)(param_1_00 + 0x30) = param_1;
    *(undefined8 *)(param_1_00 + 0xc) = 0xc000000000;
    *(long *)(param_1_00 + 0x20) = 0;
    *(undefined8 *)(param_1_00 + 0x38) = 0;
    *(ulong **)(param_1_00 + 0x40) = puVar2;
    *(ulong *)(param_1_00 + 0x48) = uVar4;
    *(undefined8 *)(param_1_00 + 0x50) = 0xffffffffffffffff;
    if ((uVar4 < 0xffffffff) ||
       (*(short *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) == 0x41b)) {
      if ((param_4 != (ulong *)0x0) &&
         (*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) < 0x20))
      {
        *(ulong **)(param_1_00 + 0x20) = param_4;
      }
    }
    else {
      if (param_4 == (ulong *)0x0) {
        param_4 = (ulong *)Factory::SizeToString((Factory *)this,uVar4,true);
      }
      if ((*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) &
          0xffe0) == 0x20) {
        param_4 = (ulong *)StringTable::LookupString(this,param_4);
      }
      *(ulong **)(param_1_00 + 0x20) = param_4;
    }
    Start<true>(param_1_00);
    return;
  }
LAB_00f5f7d8:
  if (((*param_1 & 1) == 0) ||
     (puVar2 = param_1, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(*param_1 - 1)) < 0xa9)) {
    puVar2 = (ulong *)GetRootForNonJSReceiver(this,param_1,0xffffffffffffffff);
  }
  if ((*(short *)(((ulong)this | 7) + (ulong)*(uint *)(*param_4 - 1)) == 0x40) &&
     ((*(byte *)(*param_4 + 7) & 1) != 0)) {
    param_5 = 0;
  }
  *(undefined4 *)param_1_00 = param_5;
  *(LookupIterator **)(param_1_00 + 0x18) = this;
  *(undefined8 *)(param_1_00 + 0xc) = 0xc000000000;
  if ((*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) & 0xffe0)
      == 0x20) {
    param_4 = (ulong *)StringTable::LookupString(this,param_4);
  }
  *(ulong **)(param_1_00 + 0x20) = param_4;
  *(undefined8 *)(param_1_00 + 0x28) = 0;
  *(ulong **)(param_1_00 + 0x30) = param_1;
  *(undefined8 *)(param_1_00 + 0x38) = 0;
  *(ulong **)(param_1_00 + 0x40) = puVar2;
  *(undefined8 *)(param_1_00 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_1_00 + 0x50) = 0xffffffffffffffff;
  Start<false>(param_1_00);
  return;
}

