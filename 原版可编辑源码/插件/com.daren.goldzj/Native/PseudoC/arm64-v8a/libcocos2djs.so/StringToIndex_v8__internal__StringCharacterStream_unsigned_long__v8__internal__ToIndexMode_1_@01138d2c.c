
/* bool v8::internal::StringToIndex<v8::internal::StringCharacterStream, unsigned long,
   (v8::internal::ToIndexMode)1>(v8::internal::StringCharacterStream*, unsigned long*) */

bool v8::internal::
     StringToIndex<v8::internal::StringCharacterStream,unsigned_long,(v8::internal::ToIndexMode)1>
               (StringCharacterStream *param_1,ulong *param_2)

{
  StringCharacterStream SVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x128)) {
    StringCharacterStream::HasMore(param_1);
    SVar1 = param_1[0x118];
  }
  else {
    SVar1 = param_1[0x118];
  }
  if (SVar1 == (StringCharacterStream)0x0) {
    puVar6 = *(ushort **)(param_1 + 0x120);
    *(ushort **)(param_1 + 0x120) = puVar6 + 1;
    uVar4 = (uint)*puVar6;
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x120);
    *(byte **)(param_1 + 0x120) = pbVar5 + 1;
    uVar4 = (uint)*pbVar5;
  }
  uVar4 = uVar4 - 0x30;
  if (uVar4 == 0) {
    *param_2 = 0;
    bVar2 = StringCharacterStream::HasMore(param_1);
    bVar2 = bVar2 ^ 1;
  }
  else {
    uVar7 = (ulong)uVar4;
    if (uVar4 < 10) {
      do {
        uVar3 = StringCharacterStream::HasMore(param_1);
        if ((uVar3 & 1) == 0) {
          bVar2 = 1;
          *param_2 = uVar7;
          goto LAB_01138e28;
        }
        if (*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x128)) {
          StringCharacterStream::HasMore(param_1);
          if (param_1[0x118] != (StringCharacterStream)0x0) goto LAB_01138dd8;
LAB_01138dfc:
          puVar6 = *(ushort **)(param_1 + 0x120);
          *(ushort **)(param_1 + 0x120) = puVar6 + 1;
          uVar4 = (uint)*puVar6;
        }
        else {
          if (param_1[0x118] == (StringCharacterStream)0x0) goto LAB_01138dfc;
LAB_01138dd8:
          pbVar5 = *(byte **)(param_1 + 0x120);
          *(byte **)(param_1 + 0x120) = pbVar5 + 1;
          uVar4 = (uint)*pbVar5;
        }
      } while ((uVar4 - 0x30 < 10) &&
              (uVar7 = (ulong)(uVar4 - 0x30) + uVar7 * 10, uVar7 >> 0x35 == 0));
    }
    bVar2 = 0;
  }
LAB_01138e28:
  return (bool)(bVar2 & 1);
}

