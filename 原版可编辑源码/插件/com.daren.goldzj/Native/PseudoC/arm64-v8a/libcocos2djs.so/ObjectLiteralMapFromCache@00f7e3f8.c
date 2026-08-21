
/* v8::internal::Factory::ObjectLiteralMapFromCache(v8::internal::Handle<v8::internal::NativeContext>,
   int) */

ulong * __thiscall
v8::internal::Factory::ObjectLiteralMapFromCache(Factory *this,ulong *param_2,int param_3)

{
  long lVar1;
  undefined4 *puVar2;
  Factory *pFVar3;
  uint uVar4;
  undefined4 uVar5;
  CanonicalHandleScope *this_00;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  pFVar3 = this + 0x95a0;
  if (param_3 == 0) {
    uVar10 = *param_2 & 0xffffffff00000000;
    this_00 = *(CanonicalHandleScope **)(this + 0x95b8);
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(*param_2 + 499)) + 0x1b);
    goto joined_r0x00f7e494;
  }
  if (0x80 < param_3) {
    this_00 = *(CanonicalHandleScope **)(this + 0x95b8);
    uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x29f);
    goto joined_r0x00f7e494;
  }
  uVar4 = *(uint *)(*param_2 + 0x1cb);
  uVar10 = *param_2 & 0xffffffff00000000 | (ulong)uVar4;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pFVar3;
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar3 = puVar6 + 1;
    *puVar6 = uVar10;
    if ((uVar4 & 1) != 0) goto LAB_00f7e528;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar10)
    ;
    uVar10 = *puVar6;
    if ((uVar10 & 1) != 0) {
LAB_00f7e528:
      if ((int)uVar10 == *(int *)(this + 0xa0)) {
        uVar10 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x208,1,1,0);
        *(undefined4 *)(uVar10 - 1) = *(undefined4 *)(this + 0x2b8);
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pFVar3;
          if (puVar6 == *(ulong **)(this + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pFVar3 = puVar6 + 1;
          *puVar6 = uVar10;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar10);
          uVar10 = *puVar6;
        }
        *(undefined4 *)(uVar10 + 3) = 0x100;
        uVar10 = *puVar6;
        uVar5 = *(undefined4 *)(this + 0xa0);
        *(ulong *)(uVar10 + 0xf) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x17) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x2f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x27) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x3f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x37) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x4f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x47) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x5f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x57) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x6f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x67) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x7f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x77) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x8f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x87) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x9f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x97) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xaf) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xa7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xbf) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xb7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xcf) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 199) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xdf) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xd7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xef) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xe7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xff) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0xf7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x10f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x107) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x11f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x117) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x12f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x127) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x13f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x137) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x14f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x147) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x15f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x157) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x16f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x167) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x17f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x177) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 399) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x187) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x19f) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x197) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1af) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1a7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1bf) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1b7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1cf) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1c7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1df) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1d7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1ef) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1e7) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1ff) = CONCAT44(uVar5,uVar5);
        *(ulong *)(uVar10 + 0x1f7) = CONCAT44(uVar5,uVar5);
        uVar9 = *param_2;
        uVar10 = *puVar6;
        puVar2 = (undefined4 *)(uVar9 + 0x1cb);
        *puVar2 = (int)uVar10;
        if ((uVar10 & 1) != 0) {
          uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,puVar2,uVar10);
            uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,puVar2,uVar10);
          }
        }
        goto LAB_00f7e688;
      }
    }
  }
  uVar4 = *(uint *)(uVar10 + (long)((param_3 + -1) * 4) + 7);
  if ((uVar4 != 3) && (((ulong)uVar4 & 3) == 3)) {
    this_00 = *(CanonicalHandleScope **)(this + 0x95b8);
    uVar10 = (ulong)uVar4 & 0xfffffffffffffffd | uVar10 & 0xffffffff00000000;
joined_r0x00f7e494:
    if (this_00 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pFVar3;
      if (puVar6 == *(ulong **)(this + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar3 = puVar6 + 1;
      *puVar6 = uVar10;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar10);
    }
    return puVar6;
  }
LAB_00f7e688:
  puVar7 = (ulong *)Map::Create((Isolate *)this,param_3);
  uVar9 = *puVar6;
  uVar10 = *puVar7;
  lVar1 = uVar9 + (long)((param_3 + -1) * 4);
  uVar4 = (uint)uVar10 | 2;
  *(uint *)(lVar1 + 7) = uVar4;
  if ((uVar10 & 1) == 0) {
    return puVar7;
  }
  if (uVar4 == 3) {
    return puVar7;
  }
  uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
  lVar1 = lVar1 + 7;
  if (((uint)uVar8 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(uVar9,lVar1,uVar10 & 0xfffffffffffffffd);
    uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
  }
  if ((uVar8 & 0x18) == 0) {
    return puVar7;
  }
  if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
    return puVar7;
  }
  Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar10 & 0xfffffffffffffffd);
  return puVar7;
}

