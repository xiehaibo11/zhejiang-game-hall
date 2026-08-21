
/* v8::internal::ValueDeserializer::ReadRawBytes(int) */

void v8::internal::ValueDeserializer::ReadRawBytes(int param_1)

{
  long lVar1;
  ulong uVar2;
  int in_w1;
  undefined1 *in_x8;
  long lVar3;
  
  uVar2 = (ulong)(uint)param_1;
  lVar1 = *(long *)(uVar2 + 0x10);
  lVar3 = (long)in_w1;
  if (*(long *)(uVar2 + 0x18) - lVar1 < lVar3) {
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    *in_x8 = 0;
    return;
  }
  *(long *)(uVar2 + 0x10) = lVar1 + lVar3;
  *(long *)(in_x8 + 8) = lVar1;
  *(long *)(in_x8 + 0x10) = lVar3;
  *in_x8 = 1;
  return;
}

