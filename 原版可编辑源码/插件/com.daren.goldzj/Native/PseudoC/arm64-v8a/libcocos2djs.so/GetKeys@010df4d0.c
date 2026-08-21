
/* v8::internal::KeyAccumulator::GetKeys(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::KeyCollectionMode, v8::internal::PropertyFilter, v8::internal::GetKeysConversion,
   bool, bool) */

long v8::internal::KeyAccumulator::GetKeys
               (long param_1,undefined4 param_2,int param_3,undefined4 param_4,byte param_5,
               byte param_6)

{
  long lVar1;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  int local_2c;
  byte local_28;
  byte local_27;
  undefined2 local_26;
  undefined1 local_24;
  
  local_28 = param_5 & 1;
  local_27 = param_6 & 1;
  uStack_38 = 0;
  local_48 = (ulong)*(uint *)(param_1 + 4) << 0x20;
  local_26 = 0;
  local_24 = 1;
  local_40 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  FastKeyAccumulator::Prepare((FastKeyAccumulator *)&local_48);
  if (local_2c == 0x12) {
    lVar1 = FastKeyAccumulator::GetKeysFast((FastKeyAccumulator *)&local_48,param_4);
    if (lVar1 != 0) {
      return lVar1;
    }
    if (((*(ulong *)(local_48 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(local_48 + 0x2bd8) != *(int *)(local_48 + 0xa8))) {
      return 0;
    }
  }
  lVar1 = FastKeyAccumulator::GetKeysSlow((FastKeyAccumulator *)&local_48,param_4);
  return lVar1;
}

