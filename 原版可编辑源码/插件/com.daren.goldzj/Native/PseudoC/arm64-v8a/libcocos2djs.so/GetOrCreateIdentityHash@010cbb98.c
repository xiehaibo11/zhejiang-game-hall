
/* v8::internal::JSReceiver::GetOrCreateIdentityHash(v8::internal::Isolate*) */

ulong __thiscall
v8::internal::JSReceiver::GetOrCreateIdentityHash(JSReceiver *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_8;
  
  local_8 = *(ulong *)this;
  uVar1 = *(uint *)(local_8 + 3);
  if ((uVar1 & 1) == 0) {
joined_r0x010cbc14:
    uVar1 = (int)uVar1 >> 1;
joined_r0x010cbbe4:
    if (uVar1 != 0) goto LAB_010cbc34;
  }
  else {
    uVar2 = local_8 & 0xffffffff00000000 | (ulong)uVar1;
    uVar3 = local_8 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa4) {
      uVar1 = *(uint *)(uVar2 + 3) >> 0xb & 0xfffff;
      goto joined_r0x010cbbe4;
    }
    if ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x7a) ||
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x79)) {
      uVar1 = *(uint *)(uVar2 + 0x17);
      goto joined_r0x010cbc14;
    }
  }
  uVar1 = Isolate::GenerateIdentityHash(param_1,0xfffff);
  SetIdentityHash((JSReceiver *)&local_8,uVar1);
LAB_010cbc34:
  return -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
}

