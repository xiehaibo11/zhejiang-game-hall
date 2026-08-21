
/* WARNING: Removing unreachable block (ram,0x01049658) */
/* WARNING: Removing unreachable block (ram,0x0104965c) */
/* v8::internal::JsonParser<unsigned short>::BuildJsonArray(v8::internal::JsonParser<unsigned
   short>::JsonContinuation const&, std::__ndk1::vector<v8::internal::Handle<v8::internal::Object>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object> > > const&) */

ulong * __thiscall
v8::internal::JsonParser<unsigned_short>::BuildJsonArray
          (JsonParser<unsigned_short> *this,JsonContinuation *param_1,vector *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  double *pdVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  
  iVar10 = 0;
  uVar12 = (ulong)(*(uint *)(param_1 + 0x18) >> 2);
  uVar7 = *(long *)(param_2 + 8) - *(long *)param_2 >> 3;
  lVar13 = uVar7 - uVar12;
  uVar2 = (int)uVar7 - (*(uint *)(param_1 + 0x18) >> 2);
  if (uVar12 <= uVar7 && lVar13 != 0) {
    puVar6 = (undefined8 *)(*(long *)param_2 + uVar12 * 8);
    do {
      uVar7 = *(ulong *)*puVar6;
      if ((uVar7 & 1) != 0) {
        if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42) {
          iVar10 = 2;
          break;
        }
        iVar10 = 4;
      }
      lVar13 = lVar13 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar13 != 0);
  }
  puVar4 = (ulong *)Factory::NewJSArray(*(Factory **)this,iVar10,uVar2,uVar2,0,0);
  uVar7 = (ulong)*(uint *)(*puVar4 + 7);
  uVar8 = *puVar4 & 0xffffffff00000000;
  uVar11 = uVar8 | uVar7;
  if (iVar10 == 0) {
    bVar3 = false;
  }
  else {
    if (iVar10 == 4) {
      if ((int)uVar2 < 1) {
        return puVar4;
      }
      uVar7 = 0;
      do {
        uVar8 = **(ulong **)(*(long *)param_2 + uVar12 * 8 + uVar7);
        if ((uVar8 & 1) == 0) {
          dVar15 = (double)((int)uVar8 >> 1);
          pdVar9 = (double *)(uVar11 + (uVar7 & 0xfffffff8 | 7));
LAB_01049588:
          *pdVar9 = dVar15;
        }
        else {
          dVar15 = *(double *)(uVar8 + 3);
          pdVar9 = (double *)(uVar11 + (uVar7 & 0xfffffff8 | 7));
          if (!NAN(dVar15)) goto LAB_01049588;
          *pdVar9 = NAN;
        }
        uVar7 = uVar7 + 8;
        if ((ulong)uVar2 * 8 - uVar7 == 0) {
          return puVar4;
        }
      } while( true );
    }
    uVar5 = *(ulong *)((uVar8 | uVar7 & 0xfffffffffffc0000) + 8);
    bVar3 = (uVar5 & 0x40000) != 0 || (uVar5 & 0x18) == 0;
  }
  if (0 < (int)uVar2) {
    lVar13 = 0;
    lVar14 = uVar12 << 3;
    do {
      puVar1 = (undefined4 *)(uVar11 + 7 + (long)(int)lVar13);
      uVar12 = **(ulong **)(*(long *)param_2 + lVar14);
      *puVar1 = (int)uVar12;
      if ((bVar3) && ((uVar12 & 1) != 0)) {
        if ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar11,puVar1,uVar12);
        }
        if (((*(byte *)(uVar12 & 0xfffffffffffc0000 | 8) & 0x18) != 0) &&
           ((*(byte *)(uVar8 | uVar7 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar12);
        }
      }
      lVar13 = lVar13 + 4;
      lVar14 = lVar14 + 8;
    } while ((ulong)uVar2 * 4 - lVar13 != 0);
  }
  return puVar4;
}

