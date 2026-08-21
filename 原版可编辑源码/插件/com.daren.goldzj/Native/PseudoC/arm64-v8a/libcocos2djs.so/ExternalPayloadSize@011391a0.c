
/* v8::internal::ExternalString::ExternalPayloadSize() const */

int __thiscall v8::internal::ExternalString::ExternalPayloadSize(ExternalString *this)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = *(ulong *)this;
  iVar2 = 1;
  if ((*(byte *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) & 8) == 0) {
    iVar2 = 2;
  }
  return iVar2 * *(int *)(uVar1 + 7);
}

