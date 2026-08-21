
/* v8::internal::KeyAccumulator::CollectOwnJSProxyTargetKeys(v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::Handle<v8::internal::JSReceiver>) */

undefined2 __thiscall
v8::internal::KeyAccumulator::CollectOwnJSProxyTargetKeys
          (KeyAccumulator *this,undefined8 param_2,long param_3)

{
  undefined2 uVar1;
  long lVar2;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 local_24;
  
  local_28 = *(undefined2 *)(this + 0x28);
  local_48 = (ulong)*(uint *)(param_3 + 4) << 0x20;
  local_38 = 0;
  uStack_30 = 0;
  local_26 = 0;
  local_24 = 1;
  lStack_40 = param_3;
  FastKeyAccumulator::Prepare((FastKeyAccumulator *)&local_48);
  if (uStack_30._4_4_ == 0x12) {
    lVar2 = FastKeyAccumulator::GetKeysFast((FastKeyAccumulator *)&local_48,0);
    if (lVar2 != 0) goto LAB_010e2f7c;
    if (((*(ulong *)(local_48 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(local_48 + 0x2bd8) != *(int *)(local_48 + 0xa8))) {
      return 0;
    }
  }
  lVar2 = FastKeyAccumulator::GetKeysSlow((FastKeyAccumulator *)&local_48,0);
  if (lVar2 == 0) {
    return 0;
  }
LAB_010e2f7c:
  uVar1 = AddKeysFromJSProxy(this,param_2,lVar2);
  return uVar1;
}

