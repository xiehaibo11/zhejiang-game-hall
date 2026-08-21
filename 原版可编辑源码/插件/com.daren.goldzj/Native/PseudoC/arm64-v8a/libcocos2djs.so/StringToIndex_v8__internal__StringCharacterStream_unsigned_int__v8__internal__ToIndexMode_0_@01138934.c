
/* bool v8::internal::StringToIndex<v8::internal::StringCharacterStream, unsigned int,
   (v8::internal::ToIndexMode)0>(v8::internal::StringCharacterStream*, unsigned int*) */

bool v8::internal::
     StringToIndex<v8::internal::StringCharacterStream,unsigned_int,(v8::internal::ToIndexMode)0>
               (StringCharacterStream *param_1,uint *param_2)

{
  StringCharacterStream SVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ushort *puVar7;
  
  if (*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x128)) {
    StringCharacterStream::HasMore(param_1);
    SVar1 = param_1[0x118];
  }
  else {
    SVar1 = param_1[0x118];
  }
  if (SVar1 == (StringCharacterStream)0x0) {
    puVar7 = *(ushort **)(param_1 + 0x120);
    *(ushort **)(param_1 + 0x120) = puVar7 + 1;
    uVar4 = (uint)*puVar7;
  }
  else {
    pbVar6 = *(byte **)(param_1 + 0x120);
    *(byte **)(param_1 + 0x120) = pbVar6 + 1;
    uVar4 = (uint)*pbVar6;
  }
  uVar4 = uVar4 - 0x30;
  if (uVar4 == 0) {
    *param_2 = 0;
    bVar2 = StringCharacterStream::HasMore(param_1);
    bVar2 = bVar2 ^ 1;
  }
  else if (uVar4 < 10) {
    uVar3 = StringCharacterStream::HasMore(param_1);
    while ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x128)) {
        StringCharacterStream::HasMore(param_1);
        if (param_1[0x118] == (StringCharacterStream)0x0) goto LAB_01138a10;
LAB_011389ec:
        pbVar6 = *(byte **)(param_1 + 0x120);
        *(byte **)(param_1 + 0x120) = pbVar6 + 1;
        uVar5 = (uint)*pbVar6;
      }
      else {
        if (param_1[0x118] != (StringCharacterStream)0x0) goto LAB_011389ec;
LAB_01138a10:
        puVar7 = *(ushort **)(param_1 + 0x120);
        *(ushort **)(param_1 + 0x120) = puVar7 + 1;
        uVar5 = (uint)*puVar7;
      }
      if ((9 < uVar5 - 0x30) || (0x19999999U - ((int)(uVar5 - 0x2d) >> 3) < uVar4))
      goto LAB_01138a58;
      uVar4 = (uVar5 - 0x30) + uVar4 * 10;
      uVar3 = StringCharacterStream::HasMore(param_1);
    }
    bVar2 = 1;
    *param_2 = uVar4;
  }
  else {
LAB_01138a58:
    bVar2 = 0;
  }
  return (bool)(bVar2 & 1);
}

