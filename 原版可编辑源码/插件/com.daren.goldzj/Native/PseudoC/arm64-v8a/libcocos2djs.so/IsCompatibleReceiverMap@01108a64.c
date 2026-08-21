
/* v8::internal::AccessorInfo::IsCompatibleReceiverMap(v8::internal::Handle<v8::internal::AccessorInfo>,
   v8::internal::Handle<v8::internal::Map>) */

uint v8::internal::AccessorInfo::IsCompatibleReceiverMap(ulong *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar1 = *(uint *)(*param_1 + 0xb);
  if (((uVar1 & 1) == 0) ||
     (uVar2 = *param_1 & 0xffffffff00000000, local_18 = uVar2 | uVar1,
     *(short *)((uVar2 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0x4e)) {
    uVar1 = 1;
  }
  else if (*(ushort *)(*param_2 + 7) < 0xaa) {
    uVar1 = 0;
  }
  else {
    uVar1 = FunctionTemplateInfo::IsTemplateFor((FunctionTemplateInfo *)&local_18,*param_2);
  }
  return uVar1 & 1;
}

