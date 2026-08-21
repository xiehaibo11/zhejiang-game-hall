
/* v8::internal::JSProxy::GetPropertyAttributes(v8::internal::LookupIterator*) */

ulong v8::internal::JSProxy::GetPropertyAttributes(LookupIterator *param_1)

{
  Factory *this;
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_58[0] = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  this = *(Factory **)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar2 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
    *(long *)(param_1 + 0x20) = lVar2;
  }
  uVar1 = GetOwnPropertyDescriptor(this,uVar4,lVar2,local_58);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
  }
  else if (uVar1 < 0x100) {
    uVar3 = 0x4000000001;
  }
  else {
    uVar3 = (ulong)(~(uint)local_58[0] & (uint)(local_58[0] >> 1) & 4 |
                    (uint)local_58[0] & ((uint)local_58[0] << 1 ^ 0xffffffff) & 2 |
                   (uint)(local_58[0] >> 5) & (local_58[0] >> 4 ^ 0xffffffff) & 1) << 0x20 | 1;
  }
  return uVar3;
}

