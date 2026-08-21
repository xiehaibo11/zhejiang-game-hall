
/* v8::internal::Factory::NumberToStringCacheSet(v8::internal::Handle<v8::internal::Object>, int,
   char const*, bool) */

Factory * __thiscall
v8::internal::Factory::NumberToStringCacheSet
          (Factory *this,ulong *param_2,int param_3,byte *param_4,uint param_5)

{
  long lVar1;
  uint *puVar2;
  size_t sVar3;
  Factory *pFVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  sVar3 = strlen((char *)param_4);
  iVar6 = (int)sVar3;
  if (iVar6 == 1) {
    pFVar4 = (Factory *)LookupSingleCharacterStringFromCode(this,(ushort)*param_4);
    if (pFVar4 == (Factory *)0x0) {
LAB_00f7cb58:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else if (iVar6 == 0) {
    pFVar4 = this + 200;
  }
  else {
    pFVar4 = (Factory *)NewRawOneByteString(this,sVar3 & 0xffffffff,param_5 & 1);
    if (pFVar4 == (Factory *)0x0) goto LAB_00f7cb58;
    CopyChars<unsigned_char,unsigned_char>((uchar *)(*(long *)pFVar4 + 0xb),param_4,(long)iVar6);
  }
  if ((param_5 & 1) != 0) {
    uVar9 = *(ulong *)(this + 0xf38);
    puVar2 = (uint *)(uVar9 + ((long)(param_3 << 3) | 7U));
    if (((*puVar2 & 1) == 0) || (*puVar2 != *(uint *)(this + 0xa0))) {
      uVar7 = *(ulong *)(this + 0x8890) >> 9;
      if (0x3fff < uVar7) {
        uVar7 = 0x4000;
      }
      iVar6 = (int)uVar7;
      if (uVar7 < 0x201) {
        iVar6 = 0x200;
      }
      if (iVar6 << 1 != *(int *)(uVar9 + 3) >> 1) {
        puVar5 = (undefined8 *)
                 NewFixedArrayWithFiller(this,0xc,iVar6 << 1,*(undefined8 *)(this + 0xa0),1);
        *(undefined8 *)(this + 0xf38) = *puVar5;
        return pFVar4;
      }
    }
    uVar7 = *param_2;
    *puVar2 = (uint)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,puVar2,uVar7);
        uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,puVar2,uVar7);
      }
    }
    uVar9 = *(ulong *)(this + 0xf38);
    uVar7 = *(ulong *)pFVar4;
    lVar1 = uVar9 + (long)(int)(param_3 << 3 | 4);
    *(int *)(lVar1 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,lVar1,uVar7);
        uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar7);
      }
    }
  }
  return pFVar4;
}

