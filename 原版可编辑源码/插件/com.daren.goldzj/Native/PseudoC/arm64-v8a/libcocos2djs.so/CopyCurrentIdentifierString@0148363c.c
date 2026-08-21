
/* v8::internal::wasm::AsmJsParser::CopyCurrentIdentifierString() */

undefined1  [16] __thiscall
v8::internal::wasm::AsmJsParser::CopyCurrentIdentifierString(AsmJsParser *this)

{
  AsmJsParser *__src;
  AsmJsParser AVar1;
  Zone *this_00;
  void *__dest;
  size_t __n;
  uint uVar2;
  ulong uVar3;
  AsmJsParser *pAVar4;
  undefined1 auVar5 [16];
  
  pAVar4 = this + 0x40;
  this_00 = *(Zone **)this;
  if (((byte)*pAVar4 & 1) == 0) {
    uVar3 = (ulong)((byte)*pAVar4 >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 0x48);
  }
  __dest = *(void **)(this_00 + 0x10);
  uVar3 = uVar3 + 7 & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar3) {
    __dest = (void *)Zone::NewExpand(this_00,uVar3);
    AVar1 = *pAVar4;
  }
  else {
    *(ulong *)(this_00 + 0x10) = uVar3 + (long)__dest;
    AVar1 = *pAVar4;
  }
  if (((byte)AVar1 & 1) == 0) {
    __n = (size_t)((byte)AVar1 >> 1);
    __src = this + 0x41;
  }
  else {
    __n = *(size_t *)(this + 0x48);
    __src = *(AsmJsParser **)(this + 0x50);
  }
  if (__n != 0) {
    memcpy(__dest,__src,__n);
    AVar1 = *pAVar4;
  }
  if (((byte)AVar1 & 1) == 0) {
    uVar2 = (uint)((byte)AVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)(this + 0x48);
  }
  auVar5._8_8_ = (long)(int)uVar2;
  auVar5._0_8_ = __dest;
  return auVar5;
}

