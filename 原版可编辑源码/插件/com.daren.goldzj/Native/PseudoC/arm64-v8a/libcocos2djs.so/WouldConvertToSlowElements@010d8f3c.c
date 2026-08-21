
/* v8::internal::JSObject::WouldConvertToSlowElements(unsigned int) */

bool __thiscall v8::internal::JSObject::WouldConvertToSlowElements(JSObject *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  ulong local_8;
  
  local_8 = *(ulong *)this;
  if ((*(byte *)((local_8 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(local_8 - 1)) < 0x30) &&
     (uVar1 = *(int *)((local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 7)) + 3) >> 1,
     uVar1 <= param_1)) {
    if (0x3ff < param_1 - uVar1) {
      return true;
    }
    uVar1 = param_1 + (param_1 + 1 >> 1) + 0x11;
    if ((500 < uVar1) &&
       (((5000 < uVar1 || ((local_8 & 1) == 0)) ||
        ((*(byte *)((local_8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)))) {
      iVar2 = GetFastElementsUsage((JSObject *)&local_8);
      iVar2 = base::bits::RoundUpToPowerOfTwo32(iVar2 + (iVar2 >> 1));
      if (iVar2 < 5) {
        iVar2 = 4;
      }
      return (uint)(iVar2 * 9) <= uVar1;
    }
  }
  return false;
}

