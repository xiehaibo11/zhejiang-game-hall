
/* v8::internal::Factory::NewStringFromTwoByte(unsigned short const*, int,
   v8::internal::AllocationType) */

Factory * __thiscall
v8::internal::Factory::NewStringFromTwoByte
          (Factory *this,ulong *param_1,uint param_2,undefined4 param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ushort uVar3;
  Factory *pFVar4;
  int iVar5;
  ulong *puVar6;
  
  if (param_2 == 0) {
    return this + 200;
  }
  puVar1 = (ulong *)((long)param_1 + (long)(int)param_2 * 2);
  puVar6 = param_1;
  if (7 < param_2) {
    if (((ulong)param_1 & 7) != 0) {
      uVar3 = (ushort)*param_1;
      while (uVar3 < 0x100) {
        puVar6 = (ulong *)((long)puVar6 + 2);
        if (((ulong)puVar6 & 7) == 0) goto LAB_00f6e0f8;
        uVar3 = *(ushort *)puVar6;
      }
LAB_00f6e180:
      iVar5 = (int)((long)puVar6 - (long)param_1 >> 1);
      goto joined_r0x00f6e150;
    }
LAB_00f6e0f8:
    puVar2 = puVar6 + 2;
    for (; (puVar2 <= puVar1 && ((*puVar6 & 0xff00ff00ff00ff00) == 0)); puVar6 = puVar6 + 1) {
      puVar2 = puVar6 + 3;
    }
  }
  for (; puVar6 < puVar1; puVar6 = (ulong *)((long)puVar6 + 2)) {
    if (0xff < (ushort)*puVar6) goto LAB_00f6e180;
  }
  iVar5 = (int)((ulong)((long)puVar6 - (long)param_1) >> 1);
joined_r0x00f6e150:
  if (iVar5 < (int)param_2) {
    pFVar4 = (Factory *)NewRawTwoByteString(this,param_2,param_4);
    if (pFVar4 != (Factory *)0x0) {
      CopyChars<unsigned_short,unsigned_short>
                ((ushort *)(*(long *)pFVar4 + 0xb),(ushort *)param_1,(long)(int)param_2);
    }
  }
  else {
    if (param_2 == 1) {
      pFVar4 = (Factory *)LookupSingleCharacterStringFromCode(this,(ushort)*param_1);
      return pFVar4;
    }
    pFVar4 = (Factory *)NewRawOneByteString(this,param_2,param_4);
    if (pFVar4 != (Factory *)0x0) {
      CopyChars<unsigned_short,unsigned_char>
                ((uchar *)(*(long *)pFVar4 + 0xb),(ushort *)param_1,(long)(int)param_2);
    }
  }
  return pFVar4;
}

