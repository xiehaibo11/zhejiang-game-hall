
/* v8::internal::LookupIterator::PropertyOrElement(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::LookupIterator::Configuration) */

void __thiscall
v8::internal::LookupIterator::PropertyOrElement
          (LookupIterator *param_1_00,LookupIterator *this,undefined8 param_1,ulong *param_4,
          ulong *param_5,undefined4 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  
  uVar2 = *param_4;
  if (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x40) {
    uVar1 = *(uint *)(uVar2 + 3);
    local_48 = uVar2;
    if ((uVar1 & 0xc0000003) == 0) {
      local_50 = (ulong)(uVar1 >> 3) & 0xffffff;
    }
    else if (((uVar1 & 5) == 4) ||
            (uVar2 = String::SlowAsIntegerIndex((String *)&local_48,&local_50), (uVar2 & 1) == 0))
    goto LAB_00ebb50c;
    *(undefined4 *)param_1_00 = param_6;
    *(LookupIterator **)(param_1_00 + 0x18) = this;
    *(undefined8 *)(param_1_00 + 0x28) = 0;
    *(undefined8 *)(param_1_00 + 0x30) = param_1;
    *(undefined8 *)(param_1_00 + 0xc) = 0xc000000000;
    *(long *)(param_1_00 + 0x20) = 0;
    *(undefined8 *)(param_1_00 + 0x38) = 0;
    *(ulong **)(param_1_00 + 0x40) = param_5;
    *(ulong *)(param_1_00 + 0x48) = local_50;
    *(undefined8 *)(param_1_00 + 0x50) = 0xffffffffffffffff;
    if ((local_50 < 0xffffffff) ||
       (*(short *)((*param_5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_5 - 1)) == 0x41b))
    {
      if ((param_4 != (ulong *)0x0) &&
         (*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) < 0x20))
      {
        *(ulong **)(param_1_00 + 0x20) = param_4;
      }
    }
    else {
      if (param_4 == (ulong *)0x0) {
        param_4 = (ulong *)Factory::SizeToString((Factory *)this,local_50,true);
      }
      if ((*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) &
          0xffe0) == 0x20) {
        param_4 = (ulong *)StringTable::LookupString(this,param_4);
      }
      *(ulong **)(param_1_00 + 0x20) = param_4;
    }
    Start<true>(param_1_00);
  }
  else {
LAB_00ebb50c:
    if ((*(short *)(((ulong)this | 7) + (ulong)*(uint *)(*param_4 - 1)) == 0x40) &&
       ((*(byte *)(*param_4 + 7) & 1) != 0)) {
      param_6 = 0;
    }
    *(undefined4 *)param_1_00 = param_6;
    *(LookupIterator **)(param_1_00 + 0x18) = this;
    *(undefined8 *)(param_1_00 + 0xc) = 0xc000000000;
    if ((*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) & 0xffe0)
        == 0x20) {
      param_4 = (ulong *)StringTable::LookupString(this,param_4);
    }
    *(ulong **)(param_1_00 + 0x20) = param_4;
    *(undefined8 *)(param_1_00 + 0x28) = 0;
    *(undefined8 *)(param_1_00 + 0x30) = param_1;
    *(undefined8 *)(param_1_00 + 0x38) = 0;
    *(ulong **)(param_1_00 + 0x40) = param_5;
    *(undefined8 *)(param_1_00 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(param_1_00 + 0x50) = 0xffffffffffffffff;
    Start<false>(param_1_00);
  }
  return;
}

