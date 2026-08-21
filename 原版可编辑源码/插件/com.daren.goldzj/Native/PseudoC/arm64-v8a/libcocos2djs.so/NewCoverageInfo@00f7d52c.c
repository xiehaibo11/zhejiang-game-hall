
/* v8::internal::Factory::NewCoverageInfo(v8::internal::ZoneVector<v8::internal::SourceRange>
   const&) */

Factory * __thiscall v8::internal::Factory::NewCoverageInfo(Factory *this,ZoneVector *param_1)

{
  Factory *pFVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_28;
  
  uVar4 = *(long *)(param_1 + 8) - *(long *)param_1;
  if ((int)(uVar4 >> 1) == 0) {
    pFVar1 = this + 0x168;
  }
  else {
    pFVar1 = (Factory *)NewFixedArrayWithFiller(this,0xc,uVar4 >> 1,*(undefined8 *)(this + 0xa0),0);
  }
  if (0 < (int)(uVar4 >> 3)) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      local_28 = *(undefined8 *)pFVar1;
      CoverageInfo::InitializeSlot
                ((CoverageInfo *)&local_28,iVar2,*(int *)(*(long *)param_1 + lVar3),
                 ((int *)(*(long *)param_1 + lVar3))[1]);
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + 1;
    } while ((uVar4 >> 3 & 0xffffffff) * 8 - lVar3 != 0);
  }
  return pFVar1;
}

