
/* v8::internal::JSReceiver::HasOwnProperty(v8::internal::Handle<v8::internal::JSReceiver>, unsigned
   int) */

undefined2 v8::internal::JSReceiver::HasOwnProperty(ulong *param_1,uint param_2)

{
  undefined2 uVar1;
  ulong *puVar2;
  ulong uVar3;
  Factory *this;
  undefined4 local_78 [3];
  undefined8 local_6c;
  Factory *local_60;
  ulong *local_58;
  undefined8 local_50;
  ulong *puStack_48;
  undefined8 local_40;
  ulong *puStack_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar3 = *param_1;
  this = (Factory *)(uVar3 & 0xffffffff00000000);
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0xac) {
    uVar1 = 1;
  }
  else {
    local_60 = this;
    puStack_48 = param_1;
    puStack_38 = param_1;
    if (*(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xaa) {
      local_30 = (ulong)param_2;
      local_58 = (ulong *)0x0;
      local_50 = 0;
      local_40 = 0;
      local_78[0] = 1;
      local_6c = 0xc000000000;
      uStack_28 = 0xffffffffffffffff;
      puVar2 = local_58;
      if (((param_2 == 0xffffffff) &&
          (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) != 0x41b
          )) && (puVar2 = (ulong *)Factory::SizeToString(this,0xffffffff,true),
                (*(ushort *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) &
                0xffe0) == 0x20)) {
        puVar2 = (ulong *)StringTable::LookupString(this);
      }
      local_58 = puVar2;
      LookupIterator::Start<true>((LookupIterator *)local_78);
      uVar3 = GetPropertyAttributes((LookupIterator *)local_78);
      if ((uVar3 & 0xff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x101;
        if (uVar3 >> 0x20 == 0x40) {
          uVar1 = 1;
        }
      }
    }
    else {
      local_30 = (ulong)param_2;
      local_58 = (ulong *)0x0;
      local_50 = 0;
      local_40 = 0;
      local_78[0] = 1;
      local_6c = 0xc000000000;
      uStack_28 = 0xffffffffffffffff;
      puVar2 = local_58;
      if (((param_2 == 0xffffffff) &&
          (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) != 0x41b
          )) && (puVar2 = (ulong *)Factory::SizeToString(this,0xffffffff,true),
                (*(ushort *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) &
                0xffe0) == 0x20)) {
        puVar2 = (ulong *)StringTable::LookupString(this);
      }
      local_58 = puVar2;
      LookupIterator::Start<true>((LookupIterator *)local_78);
      uVar1 = HasProperty((LookupIterator *)local_78);
    }
  }
  return uVar1;
}

