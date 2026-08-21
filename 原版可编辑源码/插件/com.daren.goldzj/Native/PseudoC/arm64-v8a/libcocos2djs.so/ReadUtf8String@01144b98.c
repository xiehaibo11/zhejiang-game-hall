
/* v8::internal::ValueDeserializer::ReadUtf8String() */

undefined8 __thiscall v8::internal::ValueDeserializer::ReadUtf8String(ValueDeserializer *this)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  byte *local_20;
  ulong uStack_18;
  
  local_20 = *(byte **)(this + 0x10);
  uVar3 = 0;
  uVar4 = 0;
  do {
    if (*(byte **)(this + 0x18) <= local_20) goto LAB_01144bf8;
    bVar1 = *local_20;
    if (uVar4 < 0x20) {
      uVar3 = (bVar1 & 0x7f) << (ulong)(uVar4 & 0x1f) | uVar3;
      uVar4 = uVar4 + 7;
    }
    local_20 = local_20 + 1;
    *(byte **)(this + 0x10) = local_20;
  } while ((char)bVar1 < '\0');
  if (((int)uVar3 < 0) ||
     (uStack_18 = (ulong)uVar3, (long)*(byte **)(this + 0x18) - (long)local_20 < (long)uStack_18)) {
LAB_01144bf8:
    uVar2 = 0;
  }
  else {
    *(byte **)(this + 0x10) = local_20 + uStack_18;
    uVar2 = Factory::NewStringFromUtf8(*(Factory **)this,&local_20,0);
  }
  return uVar2;
}

