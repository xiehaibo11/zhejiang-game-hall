
void FUN_01127110(long param_1,ulong *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined4 local_78 [3];
  undefined8 local_6c;
  long local_60;
  ulong *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_60 = (ulong)*(uint *)(param_1 + 4) << 0x20;
  local_78[0] = 0;
  local_6c = 0xc000000000;
  if ((*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) & 0xffe0)
      == 0x20) {
    param_2 = (ulong *)v8::internal::StringTable::LookupString();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_58 = param_2;
  local_48 = param_1;
  local_38 = param_1;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)local_78);
  uVar1 = v8::internal::JSObject::CreateDataProperty(local_78,param_3,0x100000001);
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","result.IsJust() && result.FromJust()");
}

